// uiSingleView.h : interface of the CUiSingleView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_UISINGLEVIEW_H__6E6565AB_9344_49D9_B60D_697636CF8F6D__INCLUDED_)
#define AFX_UISINGLEVIEW_H__6E6565AB_9344_49D9_B60D_697636CF8F6D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CUiSingleView : public CView
{
protected: // create from serialization only
	CUiSingleView();
	DECLARE_DYNCREATE(CUiSingleView)

// Attributes
public:
	CUiSingleDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CUiSingleView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CUiSingleView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CUiSingleView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in uiSingleView.cpp
inline CUiSingleDoc* CUiSingleView::GetDocument()
   { return (CUiSingleDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_UISINGLEVIEW_H__6E6565AB_9344_49D9_B60D_697636CF8F6D__INCLUDED_)
