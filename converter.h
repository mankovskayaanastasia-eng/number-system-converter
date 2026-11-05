#pragma once

#ifdef DLL1_EXPORTS
#define CONVERTER_API __declspec(dllexport)
#else
#define CONVERTER_API __declspec(dllimport)
#endif

extern "C" {
    CONVERTER_API int DecToOct(int decimal);
    CONVERTER_API int OctToDec(int octal);
}
