// jisuanqi uiDlg.h : header file
//

#if !defined(AFX_JISUANQIUIDLG_H__CA02782D_65B9_42B4_AAA2_40EF0F257787__INCLUDED_)
#define AFX_JISUANQIUIDLG_H__CA02782D_65B9_42B4_AAA2_40EF0F257787__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CJisuanqiuiDlg dialog

class CJisuanqiuiDlg : public CDialog
{
// Construction
public:
	CJisuanqiuiDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CJisuanqiuiDlg)
	enum { IDD = IDD_JISUANQIUI_DIALOG };
	int		yu;
	int		cong;
	int		cai;
	CString	zuofa;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJisuanqiuiDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CJisuanqiuiDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JISUANQIUIDLG_H__CA02782D_65B9_42B4_AAA2_40EF0F257787__INCLUDED_)
