#include <stdio.h>

void adicao(int n1, int n2)
{
    n1 += 1;
    n2 += 1;
}

int main(void)
{
    int n1 = 1;
    int n2 = 1;
    adicao(n1, n2);

    printf("%d %d\n", n1, n2);

    return 0;
}