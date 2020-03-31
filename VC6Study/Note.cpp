1. Windows程序的基本内容
新建的工程包含以下文件
/*
targetver.h
	#pragma once
	// // Including SDKDDKVer.h defines the highest available Windows platform.
	// If you wish to build your application for a previous Windows platform, include WinSDKVer.h and
	// set the _WIN32_WINNT macro to the platform you wish to support before including SDKDDKVer.h.
	#include <SDKDDKVer.h>

framework.h	
	#pragma once
	#include "targetver.h"
	#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
	// Windows Header Files
	#include <windows.h>
	// C RunTime Header Files
	#include <stdlib.h>
	#include <malloc.h>
	#include <memory.h>
Chapter02.h
	#pragma once
	#include "resource.h" */
修改之后，只需要如下的内容：
#include <windows.h>
#include <tchar.h>
int APIENTRY WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstacne,
	LPSTR lpCmdLine,
	int nCmdShow
	)
{
	MessageBox(NULL, _T("Information"), _T("Caption"), MB_OK);
	return 0;
}

2. int MessageBox(
	HWND hWnd,          // handle to owner window
	LPCTSTR lpText,     // text in message box
	LPCTSTR lpCaption,  // message box title
	UINT uType          // message box style
	);
	参数：
		To indicate the buttons displayed in the message box 表明显示哪些按钮
		MB_ABORTRETRYIGNORE| MB_HELP | MB_YESNOCANCEL
		To display an icon in the message box 图标
		MB_ICONSTOP	MB_ICONERROR MB_ICONHAND MB_ICONEXCLAMATION MB_ICONINFORMATION
		To indicate the default button
		MB_DEFBUTTON2  默认选择第2个按钮
	Return value
		IDABORT Abort button was selected.
		IDCANCEL Cancel button was selected.
		IDCONTINUE Continue button was selected.
		IDIGNORE Ignore button was selected.
		IDNO No button was selected.
		IDOK OK button was selected.
		IDRETRY Retry button was selected.
		IDTRYAGAIN Try Again button was selected.
		IDYES Yes button was selected.
