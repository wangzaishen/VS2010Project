
// osgLearn.h : osgLearn Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CosgLearnApp:
// �йش����ʵ�֣������ osgLearn.cpp
//

class CosgLearnApp : public CWinAppEx
{
public:
	CosgLearnApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	virtual BOOL OnIdle(LONG lCount);
	DECLARE_MESSAGE_MAP()
};

extern CosgLearnApp theApp;
