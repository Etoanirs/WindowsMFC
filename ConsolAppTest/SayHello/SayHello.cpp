// SayHello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//
//int main()
//{
//    std::cout << "Hello World!\n";
//}
#include <Windows.h>
#include <stdio.h>
BOOL CALLBACK EnumCodePagesProc(LPTSTR lpCodePageString)    //Winnls.h (include Windows.h)
{
    CPINFOEX info = { 0 };
    //UINT cp = atoi(lpCodePageString);
    UINT cp = _wtoi(lpCodePageString);

    if (GetCPInfoEx(cp, 0, &info))
    {
        //SetConsoleOutputCP(info.CodePage);
        wprintf(L"%s\n", info.CodePageName);        
    }
        
    return TRUE;
}
int main(int argc, char const* argv[])
{
    //winnls.h (include Windows.h)
    
    EnumSystemCodePages(EnumCodePagesProc, CP_INSTALLED);    //CP_SUPPORTED  CP_INSTALLED

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
