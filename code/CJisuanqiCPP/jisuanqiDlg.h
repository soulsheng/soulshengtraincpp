// jisuanqiDlg.h : header file
//

#if !defined(AFX_JISUANQIDLG_H__838F7AC0_4551_48A5_AD24_F0704581325B__INCLUDED_)
#define AFX_JISUANQIDLG_H__838F7AC0_4551_48A5_AD24_F0704581325B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CJisuanqiDlg dialog

#include "CJisuanqi.h"

class CJisuanqiDlg : public CDialog
{
// Construction
public:
	CJisuanqiDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CJisuanqiDlg)
	enum { IDD = IDD_JISUANQI_DIALOG };

	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJisuanqiDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CJisuanqiDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	afx_msg void OnButton7();
	afx_msg void OnButton8();
	afx_msg void OnButton9();
	afx_msg void OnButton0();
	afx_msg void OnButtonChu();
	afx_msg void OnButtonCheng();
	afx_msg void OnButtonJian();
	afx_msg void OnButtonJia();
	afx_msg void OnButtonDeng();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()


	CJisuanqi jisuan;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JISUANQIDLG_H__838F7AC0_4551_48A5_AD24_F0704581325B__INCLUDED_)
