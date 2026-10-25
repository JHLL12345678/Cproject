//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#define MAX 1005
//int arr[MAX][MAX] = {0};
//int main() 
//{
//	int N, M, C;
//	scanf("%d %d %d",&N,&M,&C);
//	for (int i = 1; i <= N; i++)
//		for (int j = 1; j <= M; j++)
//		{
//			scanf("%d", arr[i] + j);
//			arr[i][j] += arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
//		}
//
//	int min = N > M ? M : N;
//	int max,x,y;
//	for (int i = 1; i <= N - C + 1; i++)
//		for (int j = 1; j <= M - C + 1; j++)
//		{
//			int x1 = i, y1 = j, x2 = i + C - 1, y2 = j + C - 1,sum=0;
//			sum = arr[x2][y2] - arr[x1 - 1][y2] - arr[x2][y1 - 1] + arr[x1 - 1][y1 - 1];
//			if (j ==1&& i == 1)
//				max = sum;
//			if (sum > max)
//			{
//				max = sum;
//				x = x1, y = y1;
//			}
//		}
//	printf("%d %d", x, y);
//	return 0;
//}