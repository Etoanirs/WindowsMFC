//#include "framework.h"
	//#include "targetver.h"
	//	#include <SDKDDKVer.h>
	//#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
	// Windows Header Files
	#include<windows.h>
	//切记！当调用<windows.h>时，不要调用MFC！（Afx.h)
	// C RunTime Header Files
	//#include <stdlib.h>
	//#include <malloc.h>
	//#include <memory.h>
	//#include <tchar.h>
/*
	在UNICODE中
	#define __TEXT(quote)	L##quote
	其他
	#define __TEXT(quote)	quote
	#define TEXT(quote)		__TEXT(quote)
	所有的字符串常量都用TEXT("String")是非常合适的
*/
//#include "Chapter02.h"
	//#include "Resource.h"
#if 0
int APIENTRY WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstacne,
	LPSTR lpCmdLine,
	int nCmdShow
	)
{
	MessageBox(NULL,TEXT("Information"), TEXT("Caption"), MB_ABORTRETRYIGNORE | MB_DEFBUTTON2 | MB_ICONWARNING);
	return 0;
}
#else

int APIENTRY WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstacne,
	LPSTR lpCmdLine,
	int nCmdShow
	)
{
	int result = MessageBox(NULL, TEXT("这是对话框"), TEXT("你好"), MB_ICONINFORMATION | MB_YESNO);
	switch (result)/*注意！使用Unicode应用TEXT包围字串*/
	{
	case IDYES:MessageBox(NULL, TEXT("您选择了YES"), TEXT("YES"), MB_OK); break;
	case IDNO:MessageBox(NULL, TEXT("您选择了NO"), TEXT("NO"), MB_OK); break;
	}
	return 0;
}
#endif // 0

/*
#define	TEXT（X）   __TEXT(X)
　　字符编码是的本质是为了信息在机器之间沟通，用特定的二进制数据表示信息的字符和格式。最初电传打印机用5bit编码表，那个时候计算机主要是政府的使用，没有统一的标准，随着计算机技术的发展和普及，美国人于1976年基本定型ASCII，采用7bit编码表。标准制定的过程不是一蹴而就的事情，中间各方面都要慢慢的成型，最初在1963年开始提出，中间不断的各方协商，1976年版本基本形成了共识，1986年是最新的一次更新。ASCII至今为止共定义了128个字符；其中33个字符无法显示，这些字符大部分都是过时的控制符。0到31表示32个古老的电传打印相关的控制符，最后一个127表示删除字符。而且ASCII码的字符连续性更好，数字字符0到9是连续的；大小写转化也方便，键盘上的‘A’和‘a’数值相差了0x20,'#'和‘3’相差了0x20,刚好是SHIFT。ASCII是一个在大量的键盘，显示器，系统硬件，打印机，字体文件和互联网上普及的标准。

　　ASCII是美国制定的，但是美国以外的国家怎么办呢？首先我们看和美国比较相近的英国，英版 £ 这个符号没有了，国际标准化提出了从其中找了10个字符@[\]^{|}~放开给各个国家，但是这个方法很大为题是不兼容ASCII，没有形成一致性，新的结果就扩展的ASCII。这个扩展很及时，它将编码表扩展到了8位，基本解决了很常见的一些问题，而且前面的128可以保持不变。这样256个字符满足了很多国家，主要有两种扩展的字符集，一个是IBM扩展字符集，这个被大量机器使用，那时候的IBM机器太多了。Windows做了一套类似的ASNI字符集，这个也是美国标准。选择编码的时候最常见的选项拉丁语-1就是这个。微软给IBM的PC用户引入了CodePage的概念，把IBM的扩展字符集定义为代码页437，把他称为 MS-DOS Latin US，他自己的那一套代码页为850，代码页是一个很好机器，各个公司给不同的语种定义代码页的概念，但是这种代码页需要做一些代码页的转换工作。而且好多代码页出现了，同样的西里尔语，他在DOS和WINDOWS和Macintosh都不一致，而且在128字节中也有了一些不一致。
*/



//// Chapter02.cpp : Defines the entry point for the application.
////
//
//#include "framework.h"
//#include "Chapter02.h"
//
//#define MAX_LOADSTRING 100
//
//// Global Variables:
//HINSTANCE hInst;                                // current instance
//WCHAR szTitle[MAX_LOADSTRING];                  // The title bar text
//WCHAR szWindowClass[MAX_LOADSTRING];            // the main window class name
//
//// Forward declarations of functions included in this code module:
//ATOM                MyRegisterClass(HINSTANCE hInstance);
//BOOL                InitInstance(HINSTANCE, int);
//LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
//INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);
//
//int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
//                     _In_opt_ HINSTANCE hPrevInstance,
//                     _In_ LPWSTR    lpCmdLine,
//                     _In_ int       nCmdShow)
//{
//    UNREFERENCED_PARAMETER(hPrevInstance);
//    UNREFERENCED_PARAMETER(lpCmdLine);
//
//    // TODO: Place code here.
//
//    // Initialize global strings
//    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
//    LoadStringW(hInstance, IDC_CHAPTER02, szWindowClass, MAX_LOADSTRING);
//    MyRegisterClass(hInstance);
//
//    // Perform application initialization:
//    if (!InitInstance (hInstance, nCmdShow))
//    {
//        return FALSE;
//    }
//
//    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_CHAPTER02));
//
//    MSG msg;
//
//    // Main message loop:
//    while (GetMessage(&msg, nullptr, 0, 0))
//    {
//        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
//        {
//            TranslateMessage(&msg);
//            DispatchMessage(&msg);
//        }
//    }
//
//    return (int) msg.wParam;
//}
//
//
//
////
////  FUNCTION: MyRegisterClass()
////
////  PURPOSE: Registers the window class.
////
//ATOM MyRegisterClass(HINSTANCE hInstance)
//{
//    WNDCLASSEXW wcex;
//
//    wcex.cbSize = sizeof(WNDCLASSEX);
//
//    wcex.style          = CS_HREDRAW | CS_VREDRAW;
//    wcex.lpfnWndProc    = WndProc;
//    wcex.cbClsExtra     = 0;
//    wcex.cbWndExtra     = 0;
//    wcex.hInstance      = hInstance;
//    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_CHAPTER02));
//    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
//    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
//    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_CHAPTER02);
//    wcex.lpszClassName  = szWindowClass;
//    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));
//
//    return RegisterClassExW(&wcex);
//}
//
////
////   FUNCTION: InitInstance(HINSTANCE, int)
////
////   PURPOSE: Saves instance handle and creates main window
////
////   COMMENTS:
////
////        In this function, we save the instance handle in a global variable and
////        create and display the main program window.
////
//BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
//{
//   hInst = hInstance; // Store instance handle in our global variable
//
//   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
//      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);
//
//   if (!hWnd)
//   {
//      return FALSE;
//   }
//
//   ShowWindow(hWnd, nCmdShow);
//   UpdateWindow(hWnd);
//
//   return TRUE;
//}
//
////
////  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM)
////
////  PURPOSE: Processes messages for the main window.
////
////  WM_COMMAND  - process the application menu
////  WM_PAINT    - Paint the main window
////  WM_DESTROY  - post a quit message and return
////
////
//LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
//{
//    switch (message)
//    {
//    case WM_COMMAND:
//        {
//            int wmId = LOWORD(wParam);
//            // Parse the menu selections:
//            switch (wmId)
//            {
//            case IDM_ABOUT:
//                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
//                break;
//            case IDM_EXIT:
//                DestroyWindow(hWnd);
//                break;
//            default:
//                return DefWindowProc(hWnd, message, wParam, lParam);
//            }
//        }
//        break;
//    case WM_PAINT:
//        {
//            PAINTSTRUCT ps;
//            HDC hdc = BeginPaint(hWnd, &ps);
//            // TODO: Add any drawing code that uses hdc here...
//            EndPaint(hWnd, &ps);
//        }
//        break;
//    case WM_DESTROY:
//        PostQuitMessage(0);
//        break;
//    default:
//        return DefWindowProc(hWnd, message, wParam, lParam);
//    }
//    return 0;
//}
//
//// Message handler for about box.
//INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
//{
//    UNREFERENCED_PARAMETER(lParam);
//    switch (message)
//    {
//    case WM_INITDIALOG:
//        return (INT_PTR)TRUE;
//
//    case WM_COMMAND:
//        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
//        {
//            EndDialog(hDlg, LOWORD(wParam));
//            return (INT_PTR)TRUE;
//        }
//        break;
//    }
//    return (INT_PTR)FALSE;
//}
