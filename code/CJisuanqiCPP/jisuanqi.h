// jisuanqi.h : main header file for the JISUANQI application
//

#if !defined(AFX_JISUANQI_H__97424F0A_6382_46EF_9D54_40E587E02688__INCLUDED_)
#define AFX_JISUANQI_H__97424F0A_6382_46EF_9D54_40E587E02688__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CJisuanqiApp:
// See jisuanqi.cpp for the implementation of this class
//

class CJisuanqiApp : public CWinApp
{
public:
	CJisuanqiApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJisuanqiApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CJisuanqiApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JISUANQI_H__97424F0A_6382_46EF_9D54_40E587E02688__INCLUDED_)
