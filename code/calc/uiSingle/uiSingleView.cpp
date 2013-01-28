// uiSingleView.cpp : implementation of the CUiSingleView class
//

#include "stdafx.h"
#include "uiSingle.h"

#include "uiSingleDoc.h"
#include "uiSingleView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CUiSingleView

IMPLEMENT_DYNCREATE(CUiSingleView, CView)

BEGIN_MESSAGE_MAP(CUiSingleView, CView)
	//{{AFX_MSG_MAP(CUiSingleView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CUiSingleView construction/destruction

CUiSingleView::CUiSingleView()
{
	// TODO: add construction code here

}

CUiSingleView::~CUiSingleView()
{
}

BOOL CUiSingleView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CUiSingleView drawing

void CUiSingleView::OnDraw(CDC* pDC)
{
	CUiSingleDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CUiSingleView printing

BOOL CUiSingleView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CUiSingleView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CUiSingleView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CUiSingleView diagnostics

#ifdef _DEBUG
void CUiSingleView::AssertValid() const
{
	CView::AssertValid();
}

void CUiSingleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUiSingleDoc* CUiSingleView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUiSingleDoc)));
	return (CUiSingleDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CUiSingleView message handlers
