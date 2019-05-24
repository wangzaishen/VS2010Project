
// osgLearnView.cpp : CosgLearnView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "osgLearn.h"
#endif

#include "osgLearnDoc.h"
#include "osgLearnView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CosgLearnView

IMPLEMENT_DYNCREATE(CosgLearnView, CView)

BEGIN_MESSAGE_MAP(CosgLearnView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CosgLearnView ����/����

CosgLearnView::CosgLearnView()
{
	// TODO: �ڴ˴���ӹ������

}

CosgLearnView::~CosgLearnView()
{
}

BOOL CosgLearnView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CosgLearnView ����

void CosgLearnView::OnDraw(CDC* /*pDC*/)
{
	CosgLearnDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}

void CosgLearnView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CosgLearnView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CosgLearnView ���

#ifdef _DEBUG
void CosgLearnView::AssertValid() const
{
	CView::AssertValid();
}

void CosgLearnView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CosgLearnDoc* CosgLearnView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CosgLearnDoc)));
	return (CosgLearnDoc*)m_pDocument;
}
#endif //_DEBUG


// CosgLearnView ��Ϣ�������
