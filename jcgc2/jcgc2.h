
// jcgc2.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cjcgc2App:
// �йش����ʵ�֣������ jcgc2.cpp
//

class Cjcgc2App : public CWinApp
{
public:
	Cjcgc2App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cjcgc2App theApp;