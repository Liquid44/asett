// asett.h : main header file for the ASETT application
//

#if !defined(AFX_ASETT_H__426E7644_F9ED_498F_BFA7_148FEB4CDD18__INCLUDED_)
#define AFX_ASETT_H__426E7644_F9ED_498F_BFA7_148FEB4CDD18__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

extern "C" {
#include "ingame.h"
}


/////////////////////////////////////////////////////////////////////////////
// CAsettApp:
// See asett.cpp for the implementation of this class
//

class CAsettApp : public CWinApp
{
public:
	CAsettApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAsettApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CAsettApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ASETT_H__426E7644_F9ED_498F_BFA7_148FEB4CDD18__INCLUDED_)
