// simplewall
// Copyright (c) 2016-2021 Henry++

#pragma once

EXTERN_C const IID IID_IImageList2;

VOID _app_settab_id (HWND hwnd, INT page_id);

UINT _app_getinterfacestatelocale (ENUM_INSTALL_TYPE install_type);
BOOLEAN _app_initinterfacestate (HWND hwnd, BOOLEAN is_forced);
VOID _app_restoreinterfacestate (HWND hwnd, BOOLEAN is_enabled);
VOID _app_setinterfacestate (HWND hwnd);

VOID _app_imagelist_init (HWND hwnd);

VOID _app_listviewresize (HWND hwnd, INT listview_id, BOOLEAN is_forced);
VOID _app_listviewsetview (HWND hwnd, INT listview_id);

VOID _app_listviewsetfont (HWND hwnd, INT listview_id, BOOLEAN is_forced);

INT CALLBACK _app_listviewcompare_callback (LPARAM lparam1, LPARAM lparam2, LPARAM lparam);
VOID _app_listviewsort (HWND hwnd, INT listview_id, INT column_id, BOOLEAN is_notifycode);

VOID _app_toolbar_init (HWND hwnd);
VOID _app_toolbar_resize ();

VOID _app_refreshgroups (HWND hwnd, INT listview_id);
VOID _app_refreshstatus (HWND hwnd, INT listview_id);

INT _app_getposition (HWND hwnd, INT listview_id, LPARAM lparam);
VOID _app_showitem (HWND hwnd, INT listview_id, INT item, INT scroll_pos);
BOOLEAN _app_showappitem (HWND hwnd, PITEM_APP ptr_app);
