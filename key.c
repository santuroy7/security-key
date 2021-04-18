#include <stdio.h>
int main()
{
    int n, rem, n2, rem2, n3, rem3;
    printf("Enter Three (4_digits) Number To Make Your Key: \n");
    scanf("%d%d%d",&n ,&n2,&n3);
    int i = 0;
    int a[4];
    int b[4];
    int c[4];
    while (n != 0)
    {
        rem = n % 10;
        a[i] = rem;
        n = (n / 10);
        i = (i + 1);
    }
    int j = 0;
    while (n2 != 0)
    {
        rem2 = n2 % 10;
        b[j] = rem2;
        n2 = (n2 / 10);
        j = (j + 1);
    }
    int k = 0;
    while (n3 != 0)
    {
        rem3 = n3 % 10;
        c[k] = rem3;
        n3 = (n3 / 10);
        k = (k + 1);
    }
    int s1 = a[0];
    for (int i = 0; i < 4; i++)
    {
        if (a[i] < s1)
        {
            s1 = a[i];
        }
    }
    int s2 = b[0];
    for (int i = 0; i < 4; i++)
    {
        if (b[i] < s2)
        {
            s2 = b[i];
        }
    }
    int s3 = c[0];
    for (int i = 0; i < 4; i++)
    {
        if (c[i] < s3)
        {
            s3 = c[i];
        }
    }
    int m1 = a[0];
    for (int i = 0; i < 4; i++)
    {
        if (a[i] > m1)
        {
            m1 = a[i];
        }
    }
    int m2 = b[0];
    for (int i = 0; i < 4; i++)
    {
        if (b[i] > m2)
        {
            m2 = b[i];
        }
    }
    int m3 = c[0];
    for (int i = 0; i < 4; i++)
    {
        if (c[i] > m3)
        {
            m3 = c[i];
        }
    }
    int total_small, total_max,key;
    total_small=(s1+s2+s3);
    total_max=(m1+m2+m3);
    key=(total_small-total_max);
    printf("Your Key = %d",key);
    }
