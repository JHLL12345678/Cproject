//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
////---------------------------------------------------------------------------
////------牛客竞赛169---小红跑步有-----------------------------------------
////---------------------------------------------------------------------------
//
////感受:别人的思路很清晰目标明确，本题简化一下就是要求在特定由'*'围成的
////"跑道"顺时针的方向从A到B，原作者直接简化问题，不去逐个求两点间距控制寻找
////方向而是直接找第一个点作为起点来判断直接标记路上的每一个点，由于无形之中
////已经控制了方向所以直接求两点所被标记的步数相减就可以得到答案;
//int _x, _y, _tx, _ty, step;//开始节点和结束节点;
//int** d;
//char** map;
//int n, m;
//int check(int x, int y) {
//	return (x >= 1 && x <= n && y >= 1 && y <= m && map[x][y] == '*');
//}
//int main()
//{
//	scanf("%d %d", &n, &m);
//	d = (int**)malloc((n + 1) * sizeof(int*));//用来标记步数
//	map = (char**)malloc((n + 1) * sizeof(char*));//用于记图
//	for (int i = 0; i <= n; i++)//初始化数组
//	{
//		map[i] = (char*)malloc((m + 2) * sizeof(char));
//		d[i] = (int*)malloc((m + 1) * sizeof(int));
//		memset(d[i], -1, (m + 1) * sizeof(int));
//	}
//
//	//将图保存下来
//	char s[100005];
//	for (int i = 1; i <= n; i++) {
//		scanf("%s", s);
//		for (int j = 1; j <= m; j++)
//			map[i][j] = s[j - 1];
//	}
//	scanf("%d %d %d %d", &_x, &_y, &_tx, &_ty);
//	//现在寻找第一个点;
//	int token = 1, sx = -1, sy = -1;
//	for (int i = 1; i <= n && token; i++) {
//		for (int j = 1; j <= m; j++) {
//			if (map[i][j] == '*') {
//				token = 0;
//				sx = i;
//				sy = j;
//				break;
//			}
//		}
//	}
//	int dx[] = { 0,0,1,-1 };
//	int dy[] = { 1,-1,0,0 };
//	int x = sx, y = sy, px = -1, py = -1;
//	step = 0;
//	while (1) {//记录第一个点寻找下一个点
//		d[x][y] = step++;
//		int nx = -1, ny = -1;//下一个点
//		for (int i = 0; i < 4; i++) {
//			int tx = x + dx[i];
//			int ty = y + dy[i];
//			if (check(tx, ty) && !(px == tx && py == ty)) {
//				nx = tx; ny = ty;
//				break;
//			}
//		}
//		if (nx == -1)break;
//		px = x; py = y;
//		x = nx; y = ny;
//		if (x == sx && y == sy)break;
//	}
//
//	int ans = (d[_tx][_ty] - d[_x][_y] + step) % step;
//	printf("%d\n", ans);
//
//
//	for (int i = 0; i <= n; i++) {
//		free(map[i]); free(d[i]);
//	}
//	free(map); free(d);
//	return 0;
//}