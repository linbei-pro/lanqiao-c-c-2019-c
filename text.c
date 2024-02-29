

#include<stdio.h>
int a[20190324];//数组空间太大，放在main函数外面
int main()
{
    a[0] = a[1] = a[2] = 1;
    for (int i = 3; i < 20190324; i++)
    {
        a[i] = (a[i - 3] + a[i - 2] + a[i - 1]) % 10000;
    }
    printf("%d", a[20190323]);
}
