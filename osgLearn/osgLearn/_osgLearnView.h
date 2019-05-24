
// osgLearnView.h : CosgLearnView ��Ľӿ�
//

#pragma once


class CosgLearnView : public CView
{
protected: // �������л�����
	CosgLearnView();
	DECLARE_DYNCREATE(CosgLearnView)

// ����
public:
	CosgLearnDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CosgLearnView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // osgLearnView.cpp �еĵ��԰汾
inline CosgLearnDoc* CosgLearnView::GetDocument() const
   { return reinterpret_cast<CosgLearnDoc*>(m_pDocument); }
#endif

