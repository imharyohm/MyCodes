// wap tp finf X to the power a mod p, where, o is orime and gcd(x,p)=1.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int x, int p)
{
    if (x == 0)
        return p;
    else if (p == 0)
        return x;
    else if (x >= p)
        gcd(x - p, p);
    else
        gcd(p - x, x);
}
int main()
{
    int x, p;
    printf("Entre the value of x,p:");
    scanf("%d%d", &x, &p);

    int count = 0;
    for (int i = 2; i <= p / 2; i++)
    {
        if (p % i == 0)
            count = 0;
    }
    if (count != 0)
        exit(0);
    if (gcd(x, p) == 1)
    {
        int z = pow(x, p - 1);
        int sum = z % p;
        printf("The value of the calculation is %d", sum);
    }
    else
        exit(0);
}