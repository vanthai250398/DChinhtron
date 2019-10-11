
// DChinhtronView.h : interface of the CDChinhtronView class
//

#pragma once
#include"HT.h"

class CDChinhtronView : public CView
{
protected: // create from serialization only
	CDChinhtronView() noexcept;
	DECLARE_DYNCREATE(CDChinhtronView)

// Attributes
public:
	CDChinhtronDoc* GetDocument() const;

// Operations
public:
	HT hinhtron;
// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CDChinhtronView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // debug version in DChinhtronView.cpp
inline CDChinhtronDoc* CDChinhtronView::GetDocument() const
   { return reinterpret_cast<CDChinhtronDoc*>(m_pDocument); }
#endif

