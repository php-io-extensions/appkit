#!/usr/bin/env python3
"""Emit Zephir + OKF pages for the collection/grid/chrome wave."""

from __future__ import annotations

from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
ZEP = ROOT / "appkit" / "ns"
OKF = ROOT / ".okf" / "api"


def write(path: Path, text: str) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(text.lstrip("\n"), encoding="utf-8")
    print(f"wrote {path.relative_to(ROOT)}")


def zep_header(ns: str, include: str, doc: str) -> str:
    return f"""namespace AppKit\\NS\\{ns};

%{{
#include "{include}"
#include <stdint.h>
}}%


/**
 * {doc}
 */
class {ns}
{{
"""


def method_create(cfn: str, args_zep: str, args_c: str) -> str:
    return f"""    public static function create({args_zep}) -> int
    {{
        int handle;
        %{{
            handle = (zend_long) {cfn}({args_c});
        }}%
        return handle;
    }}
"""


def method_wrap(cfn: str, ptr_name: str) -> str:
    return f"""    public static function wrap(int {ptr_name}) -> int
    {{
        int handle;
        %{{
            handle = (zend_long) {cfn}((void *)(uintptr_t) {ptr_name});
        }}%
        return handle;
    }}
"""


def method_destroy(cfn: str, arg: str) -> str:
    return f"""    public static function destroy(int {arg}) -> void
    {{
        %{{
            {cfn}((uintptr_t) {arg});
        }}%
    }}
"""


def method_ns(cfn: str, php_name: str, arg: str) -> str:
    return f"""    public static function {php_name}(int {arg}) -> int
    {{
        int ptr;
        %{{
            ptr = (zend_long)(uintptr_t) {cfn}((uintptr_t) {arg});
        }}%
        return ptr;
    }}
"""


def method_void(php: str, cfn: str, args_zep: str, args_c: str) -> str:
    return f"""    public static function {php}({args_zep}) -> void
    {{
        %{{
            {cfn}({args_c});
        }}%
    }}
"""


def method_int(php: str, cfn: str, args_zep: str, args_c: str) -> str:
    return f"""    public static function {php}({args_zep}) -> int
    {{
        int value;
        %{{
            value = (zend_long) {cfn}({args_c});
        }}%
        return value;
    }}
"""


def method_bool(php: str, cfn: str, args_zep: str, args_c: str) -> str:
    return f"""    public static function {php}({args_zep}) -> bool
    {{
        bool result;
        %{{
            result = {cfn}({args_c}) == 1;
        }}%
        return result;
    }}
"""


def method_double(php: str, cfn: str, args_zep: str, args_c: str) -> str:
    return f"""    public static function {php}({args_zep}) -> double
    {{
        double value;
        %{{
            value = {cfn}({args_c});
        }}%
        return value;
    }}
"""


def method_string(php: str, cfn: str, args_zep: str, args_c: str) -> str:
    return f"""    public static function {php}({args_zep}) -> string
    {{
        %{{
            char buf[4096];
            buf[0] = '\\0';
            if ({cfn}({args_c}, buf, (int) sizeof(buf))) {{
                RETURN_STRING(buf);
            }}
            RETURN_EMPTY_STRING();
        }}%
        return "";
    }}
"""


def method_size(php: str, cfn: str, arg: str, wname: str, hname: str) -> str:
    return f"""    public static function {php}(int {arg}) -> array
    {{
        %{{
            double w = 0.0;
            double h = 0.0;
            zval *ret;
            if ({cfn}((uintptr_t) {arg}, &w, &h)) {{
                array_init(return_value);
                add_assoc_double(return_value, "{wname}", w);
                add_assoc_double(return_value, "{hname}", h);
                return;
            }}
            array_init(return_value);
        }}%
        return [];
    }}
"""


def okf(title: str, slug: str, desc: str, zep: str, h: str, rows: list[tuple[str, str]]) -> str:
    table = "\n".join(f"| `{m}` | {maps} |" for m, maps in rows)
    return f"""---
type: CoreType
title: AppKit\\\\NS\\\\{title}\\\\{title}
description: {desc}
resource: /appkit/ns/{slug}/{slug}.zep
tags: [appkit, api, {slug}]
status: draft
generated: {{ by: cursor-agent, at: "2026-08-15T13:40:00Z" }}
sources:
  - id: zep
    resource: /appkit/ns/{slug}/{slug}.zep
    title: {slug}.zep
  - id: h
    resource: /src/{h}
    title: {h}
  - id: m
    resource: /src/{h.replace('.h', '.m')}
    title: {h.replace('.h', '.m')}
---

# Schema

| Method | Maps to |
|--------|---------|
{table}
"""


# --- NSCollectionViewLayout ---
write(
    ZEP / "nscollectionviewlayout" / "nscollectionviewlayout.zep",
    zep_header("NSCollectionViewLayout", "ns-collectionviewlayout.h", "NSCollectionViewLayout base collection layout.")
    + method_create("ns_collectionviewlayout_create", "", "")
    + method_wrap("ns_collectionviewlayout_wrap", "nsCollectionViewLayoutPtr")
    + method_destroy("ns_collectionviewlayout_destroy", "layout")
    + method_ns("ns_collectionviewlayout_nscollectionviewlayout", "nsCollectionViewLayout", "layout")
    + method_void("invalidate", "ns_collectionviewlayout_invalidate", "int layout", "(uintptr_t) layout")
    + method_int("collectionView", "ns_collectionviewlayout_collection_view", "int layout", "(uintptr_t) layout")
    + method_double("contentWidth", "ns_collectionviewlayout_content_width", "int layout", "(uintptr_t) layout")
    + method_double("contentHeight", "ns_collectionviewlayout_content_height", "int layout", "(uintptr_t) layout")
    + "}\n",
)
write(
    OKF / "nscollectionviewlayout.md",
    okf(
        "NSCollectionViewLayout",
        "nscollectionviewlayout",
        "NSCollectionViewLayout base collection layout",
        "nscollectionviewlayout.zep",
        "ns-collectionviewlayout.h",
        [
            ("create / wrap / destroy / nsCollectionViewLayout", "NSObject retain/release"),
            ("invalidate", "invalidateLayout"),
            ("collectionView", "borrowed NSView wrap of collectionView"),
            ("contentWidth / contentHeight", "collectionViewContentSize"),
        ],
    ),
)

# --- FlowLayout ---
write(
    ZEP / "nscollectionviewflowlayout" / "nscollectionviewflowlayout.zep",
    zep_header("NSCollectionViewFlowLayout", "ns-collectionviewflowlayout.h", "NSCollectionViewFlowLayout flowing item layout.")
    + method_create("ns_collectionviewflowlayout_create", "", "")
    + method_wrap("ns_collectionviewflowlayout_wrap", "nsCollectionViewFlowLayoutPtr")
    + method_destroy("ns_collectionviewflowlayout_destroy", "layout")
    + method_ns("ns_collectionviewflowlayout_nscollectionviewflowlayout", "nsCollectionViewFlowLayout", "layout")
    + method_void("setItemSize", "ns_collectionviewflowlayout_set_item_size", "int layout, double width, double height", "(uintptr_t) layout, width, height")
    + method_size("getItemSize", "ns_collectionviewflowlayout_get_item_size", "layout", "width", "height")
    + method_void("setEstimatedItemSize", "ns_collectionviewflowlayout_set_estimated_item_size", "int layout, double width, double height", "(uintptr_t) layout, width, height")
    + method_size("getEstimatedItemSize", "ns_collectionviewflowlayout_get_estimated_item_size", "layout", "width", "height")
    + method_void("setMinimumLineSpacing", "ns_collectionviewflowlayout_set_minimum_line_spacing", "int layout, double spacing", "(uintptr_t) layout, spacing")
    + method_double("getMinimumLineSpacing", "ns_collectionviewflowlayout_get_minimum_line_spacing", "int layout", "(uintptr_t) layout")
    + method_void("setMinimumInteritemSpacing", "ns_collectionviewflowlayout_set_minimum_interitem_spacing", "int layout, double spacing", "(uintptr_t) layout, spacing")
    + method_double("getMinimumInteritemSpacing", "ns_collectionviewflowlayout_get_minimum_interitem_spacing", "int layout", "(uintptr_t) layout")
    + method_void("setScrollDirection", "ns_collectionviewflowlayout_set_scroll_direction", "int layout, int direction", "(uintptr_t) layout, (int) direction")
    + method_int("getScrollDirection", "ns_collectionviewflowlayout_get_scroll_direction", "int layout", "(uintptr_t) layout")
    + method_void("setHeaderReferenceSize", "ns_collectionviewflowlayout_set_header_reference_size", "int layout, double width, double height", "(uintptr_t) layout, width, height")
    + method_size("getHeaderReferenceSize", "ns_collectionviewflowlayout_get_header_reference_size", "layout", "width", "height")
    + method_void("setFooterReferenceSize", "ns_collectionviewflowlayout_set_footer_reference_size", "int layout, double width, double height", "(uintptr_t) layout, width, height")
    + method_size("getFooterReferenceSize", "ns_collectionviewflowlayout_get_footer_reference_size", "layout", "width", "height")
    + method_void("setSectionInset", "ns_collectionviewflowlayout_set_section_inset", "int layout, double top, double left, double bottom, double right", "(uintptr_t) layout, top, left, bottom, right")
    + method_void("setSectionHeadersPin", "ns_collectionviewflowlayout_set_section_headers_pin", "int layout, bool flag", "(uintptr_t) layout, flag ? 1 : 0")
    + method_bool("sectionHeadersPin", "ns_collectionviewflowlayout_section_headers_pin", "int layout", "(uintptr_t) layout")
    + method_void("setSectionFootersPin", "ns_collectionviewflowlayout_set_section_footers_pin", "int layout, bool flag", "(uintptr_t) layout, flag ? 1 : 0")
    + method_bool("sectionFootersPin", "ns_collectionviewflowlayout_section_footers_pin", "int layout", "(uintptr_t) layout")
    + method_bool("sectionIsCollapsed", "ns_collectionviewflowlayout_section_is_collapsed", "int layout, int section", "(uintptr_t) layout, (int) section")
    + method_void("collapseSection", "ns_collectionviewflowlayout_collapse_section", "int layout, int section", "(uintptr_t) layout, (int) section")
    + method_void("expandSection", "ns_collectionviewflowlayout_expand_section", "int layout, int section", "(uintptr_t) layout, (int) section")
    + "}\n",
)
write(
    OKF / "nscollectionviewflowlayout.md",
    okf(
        "NSCollectionViewFlowLayout",
        "nscollectionviewflowlayout",
        "NSCollectionViewFlowLayout flowing item layout",
        "nscollectionviewflowlayout.zep",
        "ns-collectionviewflowlayout.h",
        [
            ("create / wrap / destroy / nsCollectionViewFlowLayout", "ownership"),
            ("itemSize / estimatedItemSize", "item metrics"),
            ("minimumLineSpacing / minimumInteritemSpacing", "spacing"),
            ("scrollDirection", "NSCollectionViewScrollDirection (VERTICAL=0, HORIZONTAL=1)"),
            ("headerReferenceSize / footerReferenceSize / sectionInset", "section chrome"),
            ("sectionHeadersPin / sectionFootersPin", "pin to visible bounds"),
            ("collapseSection / expandSection / sectionIsCollapsed", "section collapse"),
        ],
    ),
)

# --- GridLayout ---
write(
    ZEP / "nscollectionviewgridlayout" / "nscollectionviewgridlayout.zep",
    zep_header("NSCollectionViewGridLayout", "ns-collectionviewgridlayout.h", "NSCollectionViewGridLayout legacy grid layout.")
    + method_create("ns_collectionviewgridlayout_create", "", "")
    + method_wrap("ns_collectionviewgridlayout_wrap", "nsCollectionViewGridLayoutPtr")
    + method_destroy("ns_collectionviewgridlayout_destroy", "layout")
    + method_ns("ns_collectionviewgridlayout_nscollectionviewgridlayout", "nsCollectionViewGridLayout", "layout")
    + method_void("setMargins", "ns_collectionviewgridlayout_set_margins", "int layout, double top, double left, double bottom, double right", "(uintptr_t) layout, top, left, bottom, right")
    + method_void("setMinimumInteritemSpacing", "ns_collectionviewgridlayout_set_minimum_interitem_spacing", "int layout, double spacing", "(uintptr_t) layout, spacing")
    + method_double("getMinimumInteritemSpacing", "ns_collectionviewgridlayout_get_minimum_interitem_spacing", "int layout", "(uintptr_t) layout")
    + method_void("setMinimumLineSpacing", "ns_collectionviewgridlayout_set_minimum_line_spacing", "int layout, double spacing", "(uintptr_t) layout, spacing")
    + method_double("getMinimumLineSpacing", "ns_collectionviewgridlayout_get_minimum_line_spacing", "int layout", "(uintptr_t) layout")
    + method_void("setMaximumNumberOfRows", "ns_collectionviewgridlayout_set_maximum_number_of_rows", "int layout, int rows", "(uintptr_t) layout, (int) rows")
    + method_int("getMaximumNumberOfRows", "ns_collectionviewgridlayout_get_maximum_number_of_rows", "int layout", "(uintptr_t) layout")
    + method_void("setMaximumNumberOfColumns", "ns_collectionviewgridlayout_set_maximum_number_of_columns", "int layout, int columns", "(uintptr_t) layout, (int) columns")
    + method_int("getMaximumNumberOfColumns", "ns_collectionviewgridlayout_get_maximum_number_of_columns", "int layout", "(uintptr_t) layout")
    + method_void("setMinimumItemSize", "ns_collectionviewgridlayout_set_minimum_item_size", "int layout, double width, double height", "(uintptr_t) layout, width, height")
    + method_size("getMinimumItemSize", "ns_collectionviewgridlayout_get_minimum_item_size", "layout", "width", "height")
    + method_void("setMaximumItemSize", "ns_collectionviewgridlayout_set_maximum_item_size", "int layout, double width, double height", "(uintptr_t) layout, width, height")
    + method_size("getMaximumItemSize", "ns_collectionviewgridlayout_get_maximum_item_size", "layout", "width", "height")
    + "}\n",
)
write(
    OKF / "nscollectionviewgridlayout.md",
    okf(
        "NSCollectionViewGridLayout",
        "nscollectionviewgridlayout",
        "NSCollectionViewGridLayout legacy grid layout",
        "nscollectionviewgridlayout.zep",
        "ns-collectionviewgridlayout.h",
        [
            ("create / wrap / destroy / nsCollectionViewGridLayout", "ownership"),
            ("setMargins", "NSEdgeInsets margins"),
            ("minimumInteritemSpacing / minimumLineSpacing", "spacing"),
            ("maximumNumberOfRows / maximumNumberOfColumns", "grid caps (0 = unlimited)"),
            ("minimumItemSize / maximumItemSize", "item size limits"),
        ],
    ),
)

# --- Compositional ---
write(
    ZEP / "nscollectionviewcompositionallayout" / "nscollectionviewcompositionallayout.zep",
    zep_header("NSCollectionViewCompositionalLayout", "ns-collectionviewcompositionallayout.h", "NSCollectionViewCompositionalLayout section-based layout.")
    + """    public static function createList(double itemHeight = 32.0) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewcompositionallayout_create_list(itemHeight);
        }%
        return handle;
    }
    public static function createGrid(int columns = 3, double itemHeight = 96.0) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewcompositionallayout_create_grid((int) columns, itemHeight);
        }%
        return handle;
    }
"""
    + method_wrap("ns_collectionviewcompositionallayout_wrap", "nsCollectionViewCompositionalLayoutPtr")
    + method_destroy("ns_collectionviewcompositionallayout_destroy", "layout")
    + method_ns("ns_collectionviewcompositionallayout_nscollectionviewcompositionallayout", "nsCollectionViewCompositionalLayout", "layout")
    + method_void("setScrollDirection", "ns_collectionviewcompositionallayout_set_scroll_direction", "int layout, int direction", "(uintptr_t) layout, (int) direction")
    + method_int("getScrollDirection", "ns_collectionviewcompositionallayout_get_scroll_direction", "int layout", "(uintptr_t) layout")
    + method_void("setInterSectionSpacing", "ns_collectionviewcompositionallayout_set_inter_section_spacing", "int layout, double spacing", "(uintptr_t) layout, spacing")
    + method_double("getInterSectionSpacing", "ns_collectionviewcompositionallayout_get_inter_section_spacing", "int layout", "(uintptr_t) layout")
    + "}\n",
)
write(
    OKF / "nscollectionviewcompositionallayout.md",
    okf(
        "NSCollectionViewCompositionalLayout",
        "nscollectionviewcompositionallayout",
        "NSCollectionViewCompositionalLayout section-based layout",
        "nscollectionviewcompositionallayout.zep",
        "ns-collectionviewcompositionallayout.h",
        [
            ("createList / createGrid", "initWithSection: using a list or N-column group"),
            ("wrap / destroy / nsCollectionViewCompositionalLayout", "ownership"),
            ("scrollDirection", "configuration.scrollDirection (VERTICAL=0, HORIZONTAL=1)"),
            ("interSectionSpacing", "configuration.interSectionSpacing"),
        ],
    ),
)

# --- Transition ---
write(
    ZEP / "nscollectionviewtransitionlayout" / "nscollectionviewtransitionlayout.zep",
    zep_header("NSCollectionViewTransitionLayout", "ns-collectionviewtransitionlayout.h", "NSCollectionViewTransitionLayout between two layouts.")
    + """    public static function create(int currentLayout, int nextLayout) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewtransitionlayout_create((uintptr_t) currentLayout, (uintptr_t) nextLayout);
        }%
        return handle;
    }
"""
    + method_wrap("ns_collectionviewtransitionlayout_wrap", "nsCollectionViewTransitionLayoutPtr")
    + method_destroy("ns_collectionviewtransitionlayout_destroy", "layout")
    + method_ns("ns_collectionviewtransitionlayout_nscollectionviewtransitionlayout", "nsCollectionViewTransitionLayout", "layout")
    + method_void("setProgress", "ns_collectionviewtransitionlayout_set_progress", "int layout, double progress", "(uintptr_t) layout, progress")
    + method_double("getProgress", "ns_collectionviewtransitionlayout_get_progress", "int layout", "(uintptr_t) layout")
    + method_int("currentLayout", "ns_collectionviewtransitionlayout_current_layout", "int layout", "(uintptr_t) layout")
    + method_int("nextLayout", "ns_collectionviewtransitionlayout_next_layout", "int layout", "(uintptr_t) layout")
    + """    public static function updateValue(int layout, string key, double value) -> void
    {
        %{
            ns_collectionviewtransitionlayout_update_value((uintptr_t) layout, Z_STRVAL(key), value);
        }%
    }
    public static function valueForKey(int layout, string key) -> double
    {
        double value;
        %{
            value = ns_collectionviewtransitionlayout_value_for_key((uintptr_t) layout, Z_STRVAL(key));
        }%
        return value;
    }
}
""",
)
write(
    OKF / "nscollectionviewtransitionlayout.md",
    okf(
        "NSCollectionViewTransitionLayout",
        "nscollectionviewtransitionlayout",
        "NSCollectionViewTransitionLayout between two layouts",
        "nscollectionviewtransitionlayout.zep",
        "ns-collectionviewtransitionlayout.h",
        [
            ("create(current, next)", "initWithCurrentLayout:nextLayout:"),
            ("wrap / destroy / nsCollectionViewTransitionLayout", "ownership"),
            ("setProgress / getProgress", "transitionProgress"),
            ("currentLayout / nextLayout", "wrapped NSCollectionViewLayout handles"),
            ("updateValue / valueForKey", "animated key interpolation"),
        ],
    ),
)

# --- Diffable ---
write(
    ZEP / "nscollectionviewdiffabledatasource" / "nscollectionviewdiffabledatasource.zep",
    zep_header("NSCollectionViewDiffableDataSource", "ns-collectionviewdiffable.h", "Simplified string-identifier NSCollectionViewDiffableDataSource.")
    + """    public static function create(int collection) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_collectionviewdiffable_create((uintptr_t) collection);
        }%
        return handle;
    }
"""
    + method_destroy("ns_collectionviewdiffable_destroy", "source")
    + """    public static function setItemTitle(int source, string itemId, string title) -> void
    {
        %{
            ns_collectionviewdiffable_set_item_title((uintptr_t) source, Z_STRVAL(itemId), Z_STRVAL(title));
        }%
    }
    public static function apply(int source, string sectionId, array itemIds, bool animating = true) -> void
    {
        %{
            zval *item;
            const char *cids[1024];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(itemIds), item) {
                if (count >= 1024) {
                    break;
                }
                convert_to_string(item);
                cids[count++] = Z_STRVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            ns_collectionviewdiffable_apply((uintptr_t) source, Z_STRVAL(sectionId), cids, count, animating ? 1 : 0);
        }%
    }
"""
    + method_int("itemCount", "ns_collectionviewdiffable_item_count", "int source", "(uintptr_t) source")
    + """    public static function itemIdAt(int source, int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\\0';
            if (ns_collectionviewdiffable_item_id_at((uintptr_t) source, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
""",
)
write(
    OKF / "nscollectionviewdiffable.md",
    okf(
        "NSCollectionViewDiffableDataSource",
        "nscollectionviewdiffabledatasource",
        "Simplified string-identifier NSCollectionViewDiffableDataSource",
        "nscollectionviewdiffabledatasource.zep",
        "ns-collectionviewdiffable.h",
        [
            ("create(collection) / destroy", "attaches built-in string item provider"),
            ("setItemTitle", "title shown by the item provider"),
            ("apply(sectionId, itemIds, animating)", "NSDiffableDataSourceSnapshot"),
            ("itemCount / itemIdAt", "snapshot query"),
        ],
    ),
)

# --- GridRow ---
write(
    ZEP / "nsgridrow" / "nsgridrow.zep",
    zep_header("NSGridRow", "ns-gridrow.h", "NSGridRow of an NSGridView.")
    + method_wrap("ns_gridrow_wrap", "nsGridRowPtr")
    + method_destroy("ns_gridrow_destroy", "row")
    + method_ns("ns_gridrow_nsgridrow", "nsGridRow", "row")
    + method_int("numberOfCells", "ns_gridrow_number_of_cells", "int row", "(uintptr_t) row")
    + method_int("cellAt", "ns_gridrow_cell_at", "int row, int index", "(uintptr_t) row, (int) index")
    + method_void("setYPlacement", "ns_gridrow_set_y_placement", "int row, int placement", "(uintptr_t) row, (int) placement")
    + method_int("getYPlacement", "ns_gridrow_get_y_placement", "int row", "(uintptr_t) row")
    + method_void("setRowAlignment", "ns_gridrow_set_row_alignment", "int row, int alignment", "(uintptr_t) row, (int) alignment")
    + method_int("getRowAlignment", "ns_gridrow_get_row_alignment", "int row", "(uintptr_t) row")
    + method_void("setHeight", "ns_gridrow_set_height", "int row, double height", "(uintptr_t) row, height")
    + method_double("getHeight", "ns_gridrow_get_height", "int row", "(uintptr_t) row")
    + method_void("setTopPadding", "ns_gridrow_set_top_padding", "int row, double padding", "(uintptr_t) row, padding")
    + method_double("getTopPadding", "ns_gridrow_get_top_padding", "int row", "(uintptr_t) row")
    + method_void("setBottomPadding", "ns_gridrow_set_bottom_padding", "int row, double padding", "(uintptr_t) row, padding")
    + method_double("getBottomPadding", "ns_gridrow_get_bottom_padding", "int row", "(uintptr_t) row")
    + method_void("setHidden", "ns_gridrow_set_hidden", "int row, bool flag", "(uintptr_t) row, flag ? 1 : 0")
    + method_bool("isHidden", "ns_gridrow_is_hidden", "int row", "(uintptr_t) row")
    + method_void("mergeCells", "ns_gridrow_merge_cells", "int row, int start, int length", "(uintptr_t) row, (int) start, (int) length")
    + "}\n",
)
write(
    OKF / "nsgridrow.md",
    okf(
        "NSGridRow",
        "nsgridrow",
        "NSGridRow of an NSGridView",
        "nsgridrow.zep",
        "ns-gridrow.h",
        [
            ("wrap / destroy / nsGridRow", "retain of grid-owned row"),
            ("numberOfCells / cellAt", "cells in this row"),
            ("yPlacement", "NSGridCellPlacement (INHERITED=0 NONE=1 LEADING/TOP=2 TRAILING/BOTTOM=3 CENTER=4 FILL=5)"),
            ("rowAlignment", "NSGridRowAlignment (INHERITED=0 NONE=1 FIRST_BASELINE=2 LAST_BASELINE=3)"),
            ("height / topPadding / bottomPadding / hidden", "row metrics"),
            ("mergeCells", "mergeCellsInRange:"),
        ],
    ),
)

# --- GridColumn ---
write(
    ZEP / "nsgridcolumn" / "nsgridcolumn.zep",
    zep_header("NSGridColumn", "ns-gridcolumn.h", "NSGridColumn of an NSGridView.")
    + method_wrap("ns_gridcolumn_wrap", "nsGridColumnPtr")
    + method_destroy("ns_gridcolumn_destroy", "column")
    + method_ns("ns_gridcolumn_nsgridcolumn", "nsGridColumn", "column")
    + method_int("numberOfCells", "ns_gridcolumn_number_of_cells", "int column", "(uintptr_t) column")
    + method_int("cellAt", "ns_gridcolumn_cell_at", "int column, int index", "(uintptr_t) column, (int) index")
    + method_void("setXPlacement", "ns_gridcolumn_set_x_placement", "int column, int placement", "(uintptr_t) column, (int) placement")
    + method_int("getXPlacement", "ns_gridcolumn_get_x_placement", "int column", "(uintptr_t) column")
    + method_void("setWidth", "ns_gridcolumn_set_width", "int column, double width", "(uintptr_t) column, width")
    + method_double("getWidth", "ns_gridcolumn_get_width", "int column", "(uintptr_t) column")
    + method_void("setLeadingPadding", "ns_gridcolumn_set_leading_padding", "int column, double padding", "(uintptr_t) column, padding")
    + method_double("getLeadingPadding", "ns_gridcolumn_get_leading_padding", "int column", "(uintptr_t) column")
    + method_void("setTrailingPadding", "ns_gridcolumn_set_trailing_padding", "int column, double padding", "(uintptr_t) column, padding")
    + method_double("getTrailingPadding", "ns_gridcolumn_get_trailing_padding", "int column", "(uintptr_t) column")
    + method_void("setHidden", "ns_gridcolumn_set_hidden", "int column, bool flag", "(uintptr_t) column, flag ? 1 : 0")
    + method_bool("isHidden", "ns_gridcolumn_is_hidden", "int column", "(uintptr_t) column")
    + method_void("mergeCells", "ns_gridcolumn_merge_cells", "int column, int start, int length", "(uintptr_t) column, (int) start, (int) length")
    + "}\n",
)
write(
    OKF / "nsgridcolumn.md",
    okf(
        "NSGridColumn",
        "nsgridcolumn",
        "NSGridColumn of an NSGridView",
        "nsgridcolumn.zep",
        "ns-gridcolumn.h",
        [
            ("wrap / destroy / nsGridColumn", "retain of grid-owned column"),
            ("numberOfCells / cellAt", "cells in this column"),
            ("xPlacement", "NSGridCellPlacement"),
            ("width / leadingPadding / trailingPadding / hidden", "column metrics"),
            ("mergeCells", "mergeCellsInRange:"),
        ],
    ),
)

# --- GridCell ---
write(
    ZEP / "nsgridcell" / "nsgridcell.zep",
    zep_header("NSGridCell", "ns-gridcell.h", "NSGridCell of an NSGridView.")
    + method_wrap("ns_gridcell_wrap", "nsGridCellPtr")
    + method_destroy("ns_gridcell_destroy", "cell")
    + method_ns("ns_gridcell_nsgridcell", "nsGridCell", "cell")
    + method_void("setContentView", "ns_gridcell_set_content_view", "int cell, int view", "(uintptr_t) cell, (uintptr_t) view")
    + method_int("contentView", "ns_gridcell_content_view", "int cell", "(uintptr_t) cell")
    + method_int("row", "ns_gridcell_row", "int cell", "(uintptr_t) cell")
    + method_int("column", "ns_gridcell_column", "int cell", "(uintptr_t) cell")
    + method_void("setXPlacement", "ns_gridcell_set_x_placement", "int cell, int placement", "(uintptr_t) cell, (int) placement")
    + method_int("getXPlacement", "ns_gridcell_get_x_placement", "int cell", "(uintptr_t) cell")
    + method_void("setYPlacement", "ns_gridcell_set_y_placement", "int cell, int placement", "(uintptr_t) cell, (int) placement")
    + method_int("getYPlacement", "ns_gridcell_get_y_placement", "int cell", "(uintptr_t) cell")
    + method_void("setRowAlignment", "ns_gridcell_set_row_alignment", "int cell, int alignment", "(uintptr_t) cell, (int) alignment")
    + method_int("getRowAlignment", "ns_gridcell_get_row_alignment", "int cell", "(uintptr_t) cell")
    + "}\n",
)
write(
    OKF / "nsgridcell.md",
    okf(
        "NSGridCell",
        "nsgridcell",
        "NSGridCell of an NSGridView",
        "nsgridcell.zep",
        "ns-gridcell.h",
        [
            ("wrap / destroy / nsGridCell", "retain of grid-owned cell"),
            ("setContentView / contentView", "hosted NSView"),
            ("row / column", "parent NSGridRow / NSGridColumn wraps"),
            ("xPlacement / yPlacement / rowAlignment", "cell placement enums"),
        ],
    ),
)

# --- StatusBar ---
write(
    ZEP / "nsstatusbar" / "nsstatusbar.zep",
    zep_header("NSStatusBar", "ns-statusbar.h", "NSStatusBar system menu-bar status bar.")
    + """    public static function system() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_statusbar_system();
        }%
        return handle;
    }
"""
    + method_wrap("ns_statusbar_wrap", "nsStatusBarPtr")
    + method_destroy("ns_statusbar_destroy", "bar")
    + method_ns("ns_statusbar_nsstatusbar", "nsStatusBar", "bar")
    + method_int("statusItemWithLength", "ns_statusbar_status_item_with_length", "int bar, double length", "(uintptr_t) bar, length")
    + method_int("statusItemWithKind", "ns_statusbar_status_item_with_kind", "int bar, int kind", "(uintptr_t) bar, (int) kind")
    + method_void("removeStatusItem", "ns_statusbar_remove_status_item", "int bar, int item", "(uintptr_t) bar, (uintptr_t) item")
    + method_bool("isVertical", "ns_statusbar_is_vertical", "int bar", "(uintptr_t) bar")
    + method_double("thickness", "ns_statusbar_thickness", "int bar", "(uintptr_t) bar")
    + "}\n",
)
write(
    OKF / "nsstatusbar.md",
    okf(
        "NSStatusBar",
        "nsstatusbar",
        "NSStatusBar system menu-bar status bar",
        "nsstatusbar.zep",
        "ns-statusbar.h",
        [
            ("system / wrap / destroy / nsStatusBar", "shared systemStatusBar retain"),
            ("statusItemWithLength / statusItemWithKind", "statusItemWithLength: (VARIABLE=0, SQUARE=1)"),
            ("removeStatusItem", "removeStatusItem:"),
            ("isVertical / thickness", "bar geometry"),
        ],
    ),
)

# --- Workspace ---
write(
    ZEP / "nsworkspace" / "nsworkspace.zep",
    zep_header("NSWorkspace", "ns-workspace.h", "NSWorkspace shared desktop workspace.")
    + """    public static function shared() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_workspace_shared();
        }%
        return handle;
    }
"""
    + method_wrap("ns_workspace_wrap", "nsWorkspacePtr")
    + method_destroy("ns_workspace_destroy", "workspace")
    + method_ns("ns_workspace_nsworkspace", "nsWorkspace", "workspace")
    + """    public static function openURL(int workspace, string url) -> bool
    {
        bool result;
        %{
            result = ns_workspace_open_url((uintptr_t) workspace, Z_STRVAL(url)) == 1;
        }%
        return result;
    }
    public static function selectFile(int workspace, string fullPath, string rootPath = "") -> bool
    {
        bool result;
        %{
            result = ns_workspace_select_file((uintptr_t) workspace, Z_STRVAL(fullPath), Z_STRVAL(rootPath)) == 1;
        }%
        return result;
    }
    public static function showSearchResults(int workspace, string query) -> bool
    {
        bool result;
        %{
            result = ns_workspace_show_search_results((uintptr_t) workspace, Z_STRVAL(query)) == 1;
        }%
        return result;
    }
    public static function isFilePackage(int workspace, string path) -> bool
    {
        bool result;
        %{
            result = ns_workspace_is_file_package((uintptr_t) workspace, Z_STRVAL(path)) == 1;
        }%
        return result;
    }
    public static function iconForFile(int workspace, string path) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_workspace_icon_for_file((uintptr_t) workspace, Z_STRVAL(path));
        }%
        return handle;
    }
"""
    + method_void("hideOtherApplications", "ns_workspace_hide_other_applications", "int workspace", "(uintptr_t) workspace")
    + """    public static function urlForApplicationWithBundleIdentifier(int workspace, string bundleId) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\\0';
            if (ns_workspace_url_for_application_with_bundle_id((uintptr_t) workspace, Z_STRVAL(bundleId), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function urlForApplicationToOpenURL(int workspace, string url) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\\0';
            if (ns_workspace_url_for_application_to_open_url((uintptr_t) workspace, Z_STRVAL(url), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function frontmostApplicationName(int workspace) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\\0';
            if (ns_workspace_frontmost_application_name((uintptr_t) workspace, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
""",
)
write(
    OKF / "nsworkspace.md",
    okf(
        "NSWorkspace",
        "nsworkspace",
        "NSWorkspace shared desktop workspace",
        "nsworkspace.zep",
        "ns-workspace.h",
        [
            ("shared / wrap / destroy / nsWorkspace", "sharedWorkspace retain"),
            ("openURL", "openURL:"),
            ("selectFile", "selectFile:inFileViewerRootedAtPath:"),
            ("showSearchResults", "showSearchResultsForQueryString:"),
            ("isFilePackage", "isFilePackageAtPath:"),
            ("iconForFile", "iconForFile: as NSImage handle"),
            ("hideOtherApplications", "hideOtherApplications"),
            ("urlForApplicationWithBundleIdentifier / urlForApplicationToOpenURL", "application URL strings"),
            ("frontmostApplicationName", "frontmostApplication.localizedName (NSRunningApplication bound as part of NSWorkspace)"),
        ],
    ),
)

# --- Controller ---
write(
    ZEP / "nscontroller" / "nscontroller.zep",
    zep_header("NSController", "ns-controller.h", "NSController Cocoa bindings editor base.")
    + method_create("ns_controller_create", "", "")
    + method_wrap("ns_controller_wrap", "nsControllerPtr")
    + method_destroy("ns_controller_destroy", "controller")
    + method_ns("ns_controller_nscontroller", "nsController", "controller")
    + method_void("discardEditing", "ns_controller_discard_editing", "int controller", "(uintptr_t) controller")
    + method_bool("commitEditing", "ns_controller_commit_editing", "int controller", "(uintptr_t) controller")
    + method_bool("isEditing", "ns_controller_is_editing", "int controller", "(uintptr_t) controller")
    + "}\n",
)
write(
    OKF / "nscontroller.md",
    okf(
        "NSController",
        "nscontroller",
        "NSController Cocoa bindings editor base",
        "nscontroller.zep",
        "ns-controller.h",
        [
            ("create / wrap / destroy / nsController", "ownership"),
            ("discardEditing", "discardEditing"),
            ("commitEditing", "commitEditing"),
            ("isEditing", "editing"),
        ],
    ),
)

print("done")
