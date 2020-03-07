// ---------------------------------------------------------------------------
// wxhtml.h - headers and wxLua types for wxLua binding
//
// This file was generated by genwxbind.lua 
// Any changes made to this file will be lost when the file is regenerated
// ---------------------------------------------------------------------------

#ifndef __HOOK_WXLUA_wxhtml_H__
#define __HOOK_WXLUA_wxhtml_H__

#include "wxbind/include/wxbinddefs.h"
#include "wxluasetup.h"
#include "wxbind/include/wxcore_bind.h"

#include "wxlua/wxlstate.h"
#include "wxlua/wxlbind.h"

// ---------------------------------------------------------------------------
// Check if the version of binding generator used to create this is older than
//   the current version of the bindings.
//   See 'bindings/genwxbind.lua' and 'modules/wxlua/wxldefs.h'
#if WXLUA_BINDING_VERSION > 38
#   error "The WXLUA_BINDING_VERSION in the bindings is too old, regenerate bindings."
#endif //WXLUA_BINDING_VERSION > 38
// ---------------------------------------------------------------------------

// binding class
class WXDLLIMPEXP_BINDWXHTML wxLuaBinding_wxhtml : public wxLuaBinding
{
public:
    wxLuaBinding_wxhtml();


private:
    DECLARE_DYNAMIC_CLASS(wxLuaBinding_wxhtml)
};


// initialize wxLuaBinding_wxhtml for all wxLuaStates
extern WXDLLIMPEXP_BINDWXHTML wxLuaBinding* wxLuaBinding_wxhtml_init();

// ---------------------------------------------------------------------------
// Includes
// ---------------------------------------------------------------------------

#if (wxCHECK_VERSION(2,8,0)) && (wxLUA_USE_wxHTML && wxUSE_HTML)
    #include "wx/html/htmlcell.h"
    #include "wx/html/htmlwin.h"
    #include "wx/htmllbox.h"
#endif // (wxCHECK_VERSION(2,8,0)) && (wxLUA_USE_wxHTML && wxUSE_HTML)

#if (wxLUA_USE_wxHTML && wxUSE_HTML) && (wxLUA_USE_wxHtmlHelpController && wxUSE_WXHTML_HELP)
    #include "wx/html/helpctrl.h"
    #include "wx/html/helpdata.h"
#endif // (wxLUA_USE_wxHTML && wxUSE_HTML) && (wxLUA_USE_wxHtmlHelpController && wxUSE_WXHTML_HELP)

#if (wxLUA_USE_wxHTML && wxUSE_HTML) && (wxLUA_USE_wxLuaHtmlWindow)
    #include "wxbind/include/wxhtml_wxlhtml.h"
#endif // (wxLUA_USE_wxHTML && wxUSE_HTML) && (wxLUA_USE_wxLuaHtmlWindow)

#if wxLUA_USE_wxHTML && wxUSE_HTML
    #include "wx/html/htmlcell.h"
    #include "wx/html/htmltag.h"
    #include "wx/html/htmprint.h"
    #include "wx/wxhtml.h"
#endif // wxLUA_USE_wxHTML && wxUSE_HTML

// ---------------------------------------------------------------------------
// Lua Tag Method Values and Tables for each Class
// ---------------------------------------------------------------------------

#if (wxCHECK_VERSION(2,8,0)) && (wxLUA_USE_wxHTML && wxUSE_HTML)
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlCellEvent;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlColourCell;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlFontCell;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlLinkEvent;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlWindowInterface;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxSimpleHtmlListBox;
#endif // (wxCHECK_VERSION(2,8,0)) && (wxLUA_USE_wxHTML && wxUSE_HTML)

#if (wxCHECK_VERSION(3,1,2)) && (wxLUA_USE_wxHTML && wxUSE_HTML)
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlRenderingInfo;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlRenderingState;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlRenderingStyle;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlSelection;
#endif // (wxCHECK_VERSION(3,1,2)) && (wxLUA_USE_wxHTML && wxUSE_HTML)

#if (wxLUA_USE_wxHTML && wxUSE_HTML) && (wxLUA_USE_wxHtmlHelpController && wxUSE_WXHTML_HELP)
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlHelpController;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlHelpData;
#endif // (wxLUA_USE_wxHTML && wxUSE_HTML) && (wxLUA_USE_wxHtmlHelpController && wxUSE_WXHTML_HELP)

#if (wxLUA_USE_wxHTML && wxUSE_HTML) && (wxLUA_USE_wxLuaHtmlWindow)
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxLuaHtmlWinTagEvent;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxLuaHtmlWindow;
#endif // (wxLUA_USE_wxHTML && wxUSE_HTML) && (wxLUA_USE_wxLuaHtmlWindow)

#if wxLUA_USE_wxHTML && wxUSE_HTML
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlCell;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlContainerCell;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlDCRenderer;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlEasyPrinting;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlLinkInfo;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlParser;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlPrintout;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlTag;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlWidgetCell;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlWinParser;
    extern WXDLLIMPEXP_DATA_BINDWXHTML(int) wxluatype_wxHtmlWindow;
#endif // wxLUA_USE_wxHTML && wxUSE_HTML



#endif // __HOOK_WXLUA_wxhtml_H__

