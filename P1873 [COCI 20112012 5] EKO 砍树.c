//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#define MAX 1000001
//int arr[MAX] = {0};
//int main() 
//{
//	int N, M,H=0,max=0;
//	scanf("%d %d",&N,&M);
//	for (int i = 1; i <= N; i++)
//	{
//		scanf("%d", arr + i);
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	int ans;
//	while (H <= max) 
//	{
//		int mid = H + (max - H) / 2;
//		long long sum = 0;
//		for (int j = 1; j <= N; j++)
//			if (arr[j] > mid)
//				sum += arr[j] - mid;
//
//
//		if (sum >= M)
//		{
//			ans = mid;
//			H = mid + 1;
//		}
//		else
//			 max = mid - 1;
//	}
//	printf("%d",ans);
//	return 0;
//}