#include <stdio.h>
int main()
{
	int max(int x,int y);
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=max(a,b);
	printf("最大值是%d\n",c);
	return 0;
}
/******************************
    求两个整数的最大值函数
	输入：两个整数
	输出：两个整数的最大值
 ******************************/
int max(int x,int y)
{
int z;
if(x>y) z=x;
else z=y;
return z;
}
