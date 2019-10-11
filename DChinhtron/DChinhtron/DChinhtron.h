
// DChinhtron.h : main header file for the DChinhtron application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CDChinhtronApp:
// See DChinhtron.cpp for the implementation of this class
//

class CDChinhtronApp : public CWinApp
{
public:
	CDChinhtronApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDChinhtronApp theApp;
