//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#define MAX 1005
//int arr[MAX][MAX] = {0};
//int main() 
//{
//	int r,s=0;
//	scanf("%d", &r);
//	for (int i = 1; i <= r; i++)
//		for (int j = 1; j <= i; j++)
//		{
//			int a,b,max;
//			scanf("%d", arr[i] + j);
//			a = arr[i][j]  + arr[i - 1][j - 1];
//			b = arr[i][j] + arr[i - 1][j];
//			max = a > b ? a : b;
//			arr[i][j] = max;
//		}
//	for (int i = 1; i <= r; i++)
//		if (arr[r][i] > s)
//			s = arr[r][i];
//	printf("%d",s);
//}