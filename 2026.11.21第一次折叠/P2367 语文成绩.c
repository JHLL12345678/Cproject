//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#define MAX 5000005
//int arr[MAX], d[MAX] = {0};
//int main() 
//{
//	int n, p,x=0,y=0,score,min=100;//p增加分数的次数
//	scanf("%d %d",&n,&p);
//	int temp = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int A;
//		scanf("%d", &A);
//		d[i] =A  - temp;
//		temp = d[i];
//	}
//	for (int i = 0; i < p; i++)
//	{
//		scanf("%d %d %d", &x, &y, &score);
//		d[x] += score;
//		d[y + 1] -= score;
//	}
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += d[i];
//		if (sum < min)
//			min =sum;
//	}
//	printf("%d",min);
//	return 0;
//}