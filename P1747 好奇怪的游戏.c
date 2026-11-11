//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#define MAX 125
//int map[MAX][MAX];//用于标记是否走过该点
//int nx[] = { 2,2,2,2,1,1,-1,-1,-2,-2,-2,-2 };//对应可走的坐标点
//int ny[] = { 2,1,-1,-2,-2,2,2,-2,2,1,-1,-2 };
//struct pos 
//{
//	int x, y, step;
//}q[MAX*MAX];
//void bfs(int a, int b)
//{
//	int h = 0, tl = 1;
//	q[1].x = a;
//	q[1].y = b;
//	q[1].step = 0;
//	map[a][b] = 1;
//	if (a == 1 && b == 1)
//	{
//		printf("%d\n", 0);
//		return;
//	}
//	while(h < tl) 
//	{
//		h++;
//		for (int i = 0; i < 12; i++)
//		{
//			int x = q[h].x + nx[i];
//			int y = q[h].y + ny[i];
//			if (x <= 101&&x>=1 &&y>=1&& y <= 101 && map[x][y] == 0)
//			{
//				tl++;
//				q[tl].x = x;
//				q[tl].y = y;
//				q[tl].step = q[h].step+1;
//				map[x][y] = 1;
//			}
//			if (q[tl].x == 1 && q[tl].y == 1)
//			{
//				printf("%d\n", q[tl].step);
//				return;
//			}
//		}
//	}
//	return;
//}
//int main()
//{
//	memset(map, 0, sizeof(map));
//	int s, t;
//	scanf("%d %d", &s, &t);
//	bfs(s, t);
//	memset(map, 0, sizeof(map));
//	scanf("%d %d", &s, &t);
//	bfs(s, t);
//	
//}