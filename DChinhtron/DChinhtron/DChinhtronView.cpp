
// DChinhtronView.cpp : implementation of the CDChinhtronView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "DChinhtron.h"
#endif

#include "DChinhtronDoc.h"
#include "DChinhtronView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDChinhtronView

IMPLEMENT_DYNCREATE(CDChinhtronView, CView)

BEGIN_MESSAGE_MAP(CDChinhtronView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CDChinhtronView construction/destruction

CDChinhtronView::CDChinhtronView() noexcept
{
	// TODO: add construction code here
	hinhtron.thietlap(100,250,200,350);
}

CDChinhtronView::~CDChinhtronView()
{
}

BOOL CDChinhtronView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CDChinhtronView drawing

void CDChinhtronView::OnDraw(CDC* /*pDC*/)
{
	CDChinhtronDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC pdc(this);
	hinhtron.c = CString("Su dung cac phim  -> de di chuyen hinh ");
	hinhtron.ve(&pdc);
	// TODO: add draw code for native data here
}


// CDChinhtronView printing

BOOL CDChinhtronView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDChinhtronView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDChinhtronView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CDChinhtronView diagnostics

#ifdef _DEBUG
void CDChinhtronView::AssertValid() const
{
	CView::AssertValid();
}

void CDChinhtronView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDChinhtronDoc* CDChinhtronView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDChinhtronDoc)));
	return (CDChinhtronDoc*)m_pDocument;
}
#endif //_DEBUG


// CDChinhtronView message handlers


void CDChinhtronView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: Add your message handler code here and/or call default
	int key = nChar;
	CClientDC pdc(this);
	if (key == 37)
	{
		{
			hinhtron.pentrang(&pdc);
		
			hinhtron.ve(&pdc);
			hinhtron.dctrai(&pdc);
			hinhtron.penden(&pdc);
			
			hinhtron.ve(&pdc);
		}
	}
	else
	
		if (key == 38)
		{
			hinhtron.pentrang(&pdc);
		
			hinhtron.ve(&pdc);
			hinhtron.dclen(&pdc);
			hinhtron.penden(&pdc);
			
			hinhtron.ve(&pdc);
		}
		else
			if (key == 39)
			{
				hinhtron.pentrang(&pdc);
				
				hinhtron.ve(&pdc);
				hinhtron.dcphai(&pdc);
				hinhtron.penden(&pdc);
			
				hinhtron.ve(&pdc);
			}
			else
				if (key == 40)
				{
					hinhtron.pentrang(&pdc);
				
					hinhtron.ve(&pdc);
					hinhtron.dcxuong(&pdc);
					hinhtron.penden(&pdc);
					
					hinhtron.ve(&pdc);
				}
	
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
