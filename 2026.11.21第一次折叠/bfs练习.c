//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#define MAX 200005
//int head[MAX];//链接表--->存储第i个有多少个节点;
//int to[2 * MAX], nxt[2 * MAX], ecnt;//to[i]:第i条边的起点,nxt[i]同起点的下一条边其值指向下一条边;ecnt:已存边数
//int dist[MAX];//;
//int q[MAX];//对列
///// <summary>
///// 用来添加有向线段的函数
///// </summary>
///// <param name="u">原点</param>
///// <param name="v">到达的点</param>
//void add(int u,int v)
//{
//	to[++ecnt] = v;	//记住一个新位置，几下终点
//	nxt[ecnt] = head[u];//新边接在原来那条链的最前面
//	head[u] = ecnt;//让head[u]重新指向这条新边
//}
//int main()
//{
//	int n, m, s, t, i;
//	memset(head, 0, sizeof(head));
//	ecnt = 0;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < m; i++)
//	{
//		int u, v;
//		scanf("%d %d",&u,&v);
//		add(u, v);
//		add(v, u);
//	}
//	scanf("%d %d",&s,&t);
//	memset(dist, -1, sizeof(dist));
//	dist[s] = 0;
//	int h = 0, tl = 0;//h-->队头,tl-->队尾
//	q[tl++] = s;
//	while (h < tl) 
//	{
//		int u = q[h++];
//		if (u == t)break;
//		for (int  e = head[u]; e; e=nxt[e])
//		{
//			int v = to[e];
//			if (dist[v] != -1)continue;
//			dist[v] = dist[u] + 1;
//			q[tl++] = v;//指针向前走一位
//		}
//	}
//	printf("%d", dist[t]);
//	return 0;
//}
