#include "Ejercicio03.h"
#include <cmath>

bool Ejercicio03::isPowerOfTwo(int n)
{
    int absoluto = abs(n);
    double log = log2(absoluto);
    if (absoluto == 0) return false;
    if (floor(log) == ceil(log)) return true;
    else return false;
}
