//#include <stdio.h>
//void solve() {
//	int n, m, k;
//	scanf("%d %d %d",&n,&m,&k);
//	int s = n - k + 1;//让(k-1)个点单独作为(k-1)个连通块，其余点作为一个整体
//	long long e = (long long)1 * s * (s - 1) / 2;//计算这些点最多能接纳多少条边
//	if (m < (n - k + 1) - 1 || m>e) {//对比边的范围是否在可接受的最大值和最小值之间
//		printf("%d\n",-1);//不在就返回-1
//		return;//因为选取这个情况就是该图的极限况包含了所有可能只需要这个判断即可
//	}
//	for (int v = 2; v <= s; v++)//由于满足条件的边的情况下1与所有点（连接块）的边一定存在
//		printf("%d %d\n",1,v);//直接挨个输出就行
//	int res = m - (s - 1);//检查剩余的边（去掉点1）
//	for (int u = 2; u <s&&res>0; u++)//从其他几个点出发一次列举直到没有剩余的边
//		for (int v = u+1; v <=s&&res>0 ; v++)
//		{
//			printf("%d %d\n",u,v);
//			res--;
//		}
//
//}
//int main() {
//	int T;
//	scanf("%d",&T);
//	while (T--)
//		solve();
//}