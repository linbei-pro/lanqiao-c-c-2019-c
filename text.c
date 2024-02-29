

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

    
	int num[4] = {0,1,1,1};
	int index = 4;
	while(index<=20190324)
	{
		num[index%3] = num[1]+num[2]+num[3];
		num[index%3]%=10000;
		index++;
	}
	printf("%d ",num[index%3]);

return 0;
}
