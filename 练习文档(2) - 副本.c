// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
int main()
{
    int a,b,c,max,min,mid;
    scanf("%d %d %d",&a,&b,&c);
    max= a>b?(a>c?a:c):(b>c?b:c);
    min= a>b?(b>c?c:b):(a>c?c:a);
    mid= a>b?(b>c?b:c):(a>c?a:c);
	printf("%d %d %d",max,mid,min);
}
