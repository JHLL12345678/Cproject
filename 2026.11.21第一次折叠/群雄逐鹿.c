//#include <stdio.h>
//#include <stdlib.h>
//#define MAX 100100
//int map[MAX];
//int head[MAX];//
//int top;//记录路径
// struct node 
//{
//	long long to,nxt;
//}arr[MAX];
// struct path 
// {
//	 long long u, v,c;
// }Pat[MAX];
//int q[MAX * 2];//队列
//long long add(long long u, long long v)
//{
//	arr[++top].to = v;
//	arr[top].nxt = head[u];
//	head[u] = top;
//}
//int main() 
//{
//	int n, m; 
//	top = -1;
//	memset(map,0,sizeof(map));
//	scanf("%d %d",&n,&m);
//	for (int i = 0; i < n-1; i++)
//	{
//		long long u, v;
//		scanf("%lld %lld",&u,&v);
//		add(u, v);
//		add(v, u);
//	}
//	for (int i = 0; i < m; i++)
//		scanf("%lld %lld %lld", Pat[i].u,Pat[i].v,Pat[i].c);
//	int h=0, tl=0,pos=m-1;
//	q[top++] = Pat[pos].u;
//	//while (h < tl) 
//	{
//		int s = q[h++];
//		for (long long e = head[s]; e ; e=arr[e].nxt)
//		{
//			int t = arr[e].to;
//			if (map[t] != 0) continue;
//
//		}
//	}
//}