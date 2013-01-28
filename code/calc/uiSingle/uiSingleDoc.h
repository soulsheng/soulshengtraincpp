// uiSingleDoc.h : interface of the CUiSingleDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_UISINGLEDOC_H__30A34AE1_F63A_4D84_8ED3_06A1108C388D__INCLUDED_)
#define AFX_UISINGLEDOC_H__30A34AE1_F63A_4D84_8ED3_06A1108C388D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CUiSingleDoc : public CDocument
{
protected: // create from serialization only
	CUiSingleDoc();
	DECLARE_DYNCREATE(CUiSingleDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CUiSingleDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CUiSingleDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CUiSingleDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_UISINGLEDOC_H__30A34AE1_F63A_4D84_8ED3_06A1108C388D__INCLUDED_)
