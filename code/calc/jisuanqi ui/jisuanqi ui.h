// jisuanqi ui.h : main header file for the JISUANQI UI application
//

#if !defined(AFX_JISUANQIUI_H__315212F5_87A7_4CF1_9995_B9D479F1BF1D__INCLUDED_)
#define AFX_JISUANQIUI_H__315212F5_87A7_4CF1_9995_B9D479F1BF1D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CJisuanqiuiApp:
// See jisuanqi ui.cpp for the implementation of this class
//

class CJisuanqiuiApp : public CWinApp
{
public:
	CJisuanqiuiApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJisuanqiuiApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CJisuanqiuiApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JISUANQIUI_H__315212F5_87A7_4CF1_9995_B9D479F1BF1D__INCLUDED_)
