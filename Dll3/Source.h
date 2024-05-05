#pragma once
//#ifdef Dll3_LIB_EXPORTS
//#define Dll3_LIB_API __declspec(dllexport)
//#else
//#define Dll3_LIB_API __declspec(dllimport)
//#endif // Dll3_LIB_EXPORTS

extern "C" __declspec(dllexport) int sum(int);