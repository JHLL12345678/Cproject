/* P2367 语文成绩 —— 差分数组
 * n, p <= 5e6；暴力 O(n*p) 最坏 2.5e13 次加法，必 TLE
 * 差分：区间加 z 只改两个位置，最后一遍前缀和还原
 * 时间 O(n+p)，空间 约 20MB
 */
#include <stdio.h>

#define MAXN 5000005          /* n <= 5e6，必须多留格：d[y+1] 在 y=n 时会用到 d[n+1] */

int d[MAXN];                  /* 差分数组：放全局 -> 自动清零，也不炸栈 */

int main(void)
{
	int n, p;
	int x, y, z;
	int i, cur = 0, minv = 0x7fffffff;

	scanf("%d %d", &n, &p);

	/* 初始成绩：a[i] 等价于「对区间 [i, i] 加 a[i]」，同样只动两头。
	 * d[i] 这一格被写两次：上一步留下的 -a[i-1]，这一步加的 +a[i]，
	 * 合起来正好是 a[i]-a[i-1]，也就是差分的定义。 */
	for (i = 1; i <= n; i++) {
		int s;
		scanf("%d", &s);
		d[i] += s;
		d[i + 1] -= s;
	}

	/* p 次区间加：只有 d[x] 和 d[y+1] 变，中间一格的活都不用干 */
	for (i = 0; i < p; i++) {
		scanf("%d %d %d", &x, &y, &z);
		d[x] += z;
		d[y + 1] -= z;
	}

	/* 前缀和还原真实成绩，边还原边记最小值 */
	for (i = 1; i <= n; i++) {
		cur += d[i];
		if (cur < minv) minv = cur;
	}

	printf("%d\n", minv);
	return 0;
}
