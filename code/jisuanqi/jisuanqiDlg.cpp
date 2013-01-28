// jisuanqiDlg.cpp : implementation file
//

#include "stdafx.h"
#include "jisuanqi.h"
#include "jisuanqiDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJisuanqiDlg dialog

CJisuanqiDlg::CJisuanqiDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CJisuanqiDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CJisuanqiDlg)
	m_jieguo = 0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	jiashu=0;
	beijiashu=0;
	yunsuanfu=' '; 
}

void CJisuanqiDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CJisuanqiDlg)
	DDX_Text(pDX, IDC_EDIT2, m_jieguo);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CJisuanqiDlg, CDialog)
	//{{AFX_MSG_MAP(CJisuanqiDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	ON_BN_CLICKED(IDC_BUTTON7, OnButton7)
	ON_BN_CLICKED(IDC_BUTTON8, OnButton8)
	ON_BN_CLICKED(IDC_BUTTON9, OnButton9)
	ON_BN_CLICKED(IDC_BUTTON10, OnButton0)
	ON_BN_CLICKED(IDC_BUTTON13, OnButtonChu)
	ON_BN_CLICKED(IDC_BUTTON14, OnButtonCheng)
	ON_BN_CLICKED(IDC_BUTTON15, OnButtonJian)
	ON_BN_CLICKED(IDC_BUTTON16, OnButtonJia)
	ON_BN_CLICKED(IDC_BUTTON12, OnButtonDeng)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJisuanqiDlg message handlers

BOOL CJisuanqiDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CJisuanqiDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CJisuanqiDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CJisuanqiDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CJisuanqiDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	if (yunsuanfu==' ')
	{
		jiashu=jiashu*10 + 1;
		
		m_jieguo=jiashu;
	}
	else 
	{
		beijiashu=beijiashu*10 + 1;

		m_jieguo=beijiashu;
	}

	UpdateData(FALSE);
}

void CJisuanqiDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	if (yunsuanfu==' ')
	{
		jiashu=jiashu*10 + 2;
		
		m_jieguo=jiashu;
	}
	else 
	{
		beijiashu=beijiashu*10 + 2;

		m_jieguo=beijiashu;
	}

	UpdateData(FALSE);
}

void CJisuanqiDlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	if (yunsuanfu==' ')
	{
		jiashu=jiashu*10 + 3;
		
		m_jieguo=jiashu;
	}
	else 
	{
		beijiashu=beijiashu*10 + 3;

		m_jieguo=beijiashu;
	}

	UpdateData(FALSE);	
}

void CJisuanqiDlg::OnButton4() 
{
	// TODO: Add your control notification handler code here
	if (yunsuanfu==' ')
	{
		jiashu=jiashu*10 + 4;
		
		m_jieguo=jiashu;
	}
	else 
	{
		beijiashu=beijiashu*10 + 4;

		m_jieguo=beijiashu;
	}

	UpdateData(FALSE);	
}

void CJisuanqiDlg::OnButton5() 
{
	// TODO: Add your control notification handler code here
if (yunsuanfu==' ')
	{
		jiashu=jiashu*10 + 5;
		
		m_jieguo=jiashu;
	}
	else 
	{
		beijiashu=beijiashu*10 + 5;

		m_jieguo=beijiashu;
	}

	UpdateData(FALSE);		
}

void CJisuanqiDlg::OnButton6() 
{
	// TODO: Add your control notification handler code here
	if (yunsuanfu==' ')
	{
		jiashu=jiashu*10 + 6;
		
		m_jieguo=jiashu;
	}
	else 
	{
		beijiashu=beijiashu*10 + 6;

		m_jieguo=beijiashu;
	}

	UpdateData(FALSE);
}

void CJisuanqiDlg::OnButton7() 
{
	// TODO: Add your control notification handler code here
	if (yunsuanfu==' ')
	{
		jiashu=jiashu*10 +7;
		
		m_jieguo=jiashu;
	}
	else 
	{
		beijiashu=beijiashu*10 + 7;

		m_jieguo=beijiashu;
	}

	UpdateData(FALSE);	
}

void CJisuanqiDlg::OnButton8() 
{
	// TODO: Add your control notification handler code here
		if (yunsuanfu==' ')
	{
		jiashu=jiashu*10 +8;
		
		m_jieguo=jiashu;
	}
	else 
	{
		beijiashu=beijiashu*10 + 8;

		m_jieguo=beijiashu;
	}

	UpdateData(FALSE);
}

void CJisuanqiDlg::OnButton9() 
{
	// TODO: Add your control notification handler code here
			if (yunsuanfu==' ')
	{
		jiashu=jiashu*10 +9;
		
		m_jieguo=jiashu;
	}
	else 
	{
		beijiashu=beijiashu*10 + 9;

		m_jieguo=beijiashu;
	}

	UpdateData(FALSE);
}

void CJisuanqiDlg::OnButton0() 
{
	// TODO: Add your control notification handler code here
		if (yunsuanfu==' ')
	{
		jiashu=jiashu*10 +0;
		
		m_jieguo=jiashu;
	}
	else 
	{
		beijiashu=beijiashu*10 + 0;

		m_jieguo=beijiashu;
	}

	UpdateData(FALSE);
}

void CJisuanqiDlg::OnButtonChu() 
{
	// TODO: Add your control notification handler code here
	yunsuanfu = '/';
}

void CJisuanqiDlg::OnButtonCheng() 
{
	// TODO: Add your control notification handler code here
	yunsuanfu = '*';	
}

void CJisuanqiDlg::OnButtonJian() 
{
	// TODO: Add your control notification handler code here
	yunsuanfu = '-';
}

void CJisuanqiDlg::OnButtonJia() 
{
	// TODO: Add your control notification handler code here
	yunsuanfu = '+';
}

void CJisuanqiDlg::OnButtonDeng() 
{
	// TODO: Add your control notification handler code here
	switch(yunsuanfu)
	{
	case '+':
		m_jieguo= jiashu+beijiashu;
		break;

	case '-':
		m_jieguo= jiashu-beijiashu;
		break;

	case '*':
		m_jieguo= jiashu*beijiashu;
		break;

	case '/':
		m_jieguo= jiashu/beijiashu;
		break;

	default:
		m_jieguo= -1;
		break;	
	}

	UpdateData(FALSE);

	yunsuanfu = ' ';
	m_jieguo=0;
	jiashu=0;
	beijiashu=0;
}
