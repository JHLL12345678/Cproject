//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//long long arr[30][30] = { 0 };
//int main() 
//{
//	int n, m, x, y;//m-x,n-y
//	scanf("%d %d %d %d",&n,&m,&x,&y);
//	n += 3; m += 3; x += 3; y += 3;
//	int dx[] = {2,2,1,1,0,-1,-1,-2,-2};
//	int dy[] = {1,-1,2,-2,0,2,-2,1,-1};
//	for (int i = 0; i < 9; i++)
//		arr[x + dx[i]][y + dy[i]] = -10;
//	arr[3][3] = 1;
//	for (int i = 3; i <= n; i++)
//	{
//		for (int j = 3; j <=m ; j++)
//		{
//			if (i == 3 && j == 3)
//				continue;
//			if (arr[i][j] == -10)
//				arr[i][j] = 0;
//			else
//				arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
//		}
//	}
//	printf("%lld",arr[n][m]);
//}