//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#define MAX 1000001
//int arr[MAX] = { 0 };
//int main() 
//{
//	int n, m;
//	scanf("%d %d",&n,&m);
//	for (int i = 1; i <= n; i++)
//		scanf("%d", arr + i);
//	for (int i = 1; i <=m ; i++)
//	{
//		int q,l=1,h=n;
//		scanf("%d",&q);
//		while (l <= h)
//		{
//			int mid = l + (h - l) / 2;
//			if (q > arr[mid])
//			{
//				l = mid + 1;      // 严格大于，肯定在右边
//			}
//			else
//			{
//				h = mid - 1;      // 等于或者小于，都往左边缩，找更早的
//			}
//		}
//		if (arr[l] == q)
//			printf("%d ", l);
//		else
//			printf("-1 ");
//	}
//}