#include <stdio.h>
#include "C_Generic.h"

G Max(G a, G b)
{
    int max = GetG(a) + GetG(b);
    return SetG(max);
}

int main()
{
    int a = 0, b = 0;
    scanf("%d+%d", &a, &b);
    int max = (int)GetG(Max(SetG(a), SetG(b)));
    printf("%d", max);
}
