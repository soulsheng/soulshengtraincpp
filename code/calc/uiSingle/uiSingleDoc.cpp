// uiSingleDoc.cpp : implementation of the CUiSingleDoc class
//

#include "stdafx.h"
#include "uiSingle.h"

#include "uiSingleDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CUiSingleDoc

IMPLEMENT_DYNCREATE(CUiSingleDoc, CDocument)

BEGIN_MESSAGE_MAP(CUiSingleDoc, CDocument)
	//{{AFX_MSG_MAP(CUiSingleDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CUiSingleDoc construction/destruction

CUiSingleDoc::CUiSingleDoc()
{
	// TODO: add one-time construction code here

}

CUiSingleDoc::~CUiSingleDoc()
{
}

BOOL CUiSingleDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CUiSingleDoc serialization

void CUiSingleDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CUiSingleDoc diagnostics

#ifdef _DEBUG
void CUiSingleDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CUiSingleDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CUiSingleDoc commands
