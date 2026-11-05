#include "pch.h"
#include "converter.h"


int DecToOct(int decimal)
{
    int t = 0;
    int result = 0;
    int array[50];
    while (decimal != 0) {
        array[t] = decimal % 8;
        decimal /= 8;
        t++;
    }
    t--;
    for (;t >= 0;t--) {
        result = result * 10 + array[t];
    }
    return result;
}

int OctToDec(int octal)
{
    int multiplier = 1;
    int result = 0;
    while (octal != 0) {
        result+= (octal % 10)*multiplier;
        octal = octal / 10;
        multiplier *= 8;
    }
    return result;
}
