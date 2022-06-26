// asett.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "asett.h"
#include "asettDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ASE CALLBACKS
void ASEBrowser_invalidate(void)
{

}

void ASEBrowser_progress(void)
{

}

/////////////////////////////////////////////////////////////////////////////
// CAsettApp

BEGIN_MESSAGE_MAP(CAsettApp, CWinApp)
	//{{AFX_MSG_MAP(CAsettApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAsettApp construction

CAsettApp::CAsettApp()
{
	ASEBrowser_init();
	ASEBrowser_setconfig(256000, 512000, 60, 250);
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CAsettApp object

CAsettApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CAsettApp initialization

BOOL CAsettApp::InitInstance()
{
	if (!AfxSocketInit())
	{
		AfxMessageBox(IDP_SOCKETS_INIT_FAILED);
		return FALSE;
	}


	while(true) {
		MessageBox(0, "Refresh servers?", "ASE Refresh", MB_OK);
		ASEBrowser_refresh("1 if version != \"0.5\" remove\n");
		Sleep(500);
		MessageBox(0, ASEBrowser_statusmessage, "ASE Status", MB_OK);
		if (ASEBrowser_servers > 0) {
		  MessageBox(0, ASEBrowser_getinfo(0, "address"), "ASE Game Servers", MB_OK);
		}
		ASEBrowser_cancel();
	}


	return FALSE;
}
