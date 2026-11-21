///* P1182 数列分段 Section II —— 答案二分（计数型 check）
// *
// * 题意：把长度为 n 的数列切成 m 段连续子段，使"各段和的最大值"最小。
// * 思路：不真去分段，只判断"每段和 <= x 时最少要切几段"。
// *       need(x) 随 x 增大只减不增 => 可二分。
// * 时间 O(n log(sum))，约 3e6 次操作。
// *
// * 范围（开码前 60 秒那一问）：
// *   n <= 1e5，a[i] < 1e8  =>  总和可达 1e13，超过 int
// *   => sum / lo / hi / mid / ans 全部用 long long
// */
//#include <stdio.h>
//
//#define MAXN 100005
//
//int a[MAXN];
//int n, m;
//
///* 每段和不超过 x 时，最少需要分成几段（贪心：能塞就塞，塞不下就断） */
//int need(long long x)
//{
//	int cnt = 1;               /* 至少一段 */
//	long long s = 0;           /* 当前段的和 */
//	int i;
//
//	for (i = 1; i <= n; i++) {
//		if (s + a[i] > x) {    /* 塞不下：断一段，从 a[i] 重新开始 */
//			cnt++;
//			s = a[i];
//		} else {               /* 塞得下：并进当前段 */
//			s += a[i];
//		}
//	}
//	return cnt;
//}
//
//int main(void)
//{
//	long long sum = 0;
//	long long lo, hi, ans;
//	int i;
//
//	scanf("%d %d", &n, &m);
//
//	lo = 0;
//	for (i = 1; i <= n; i++) {
//		scanf("%d", &a[i]);
//		sum += a[i];
//		if (a[i] > lo) lo = a[i];   /* 下界 = 最大元素（一段里至少要装下它） */
//	}
//	hi = sum;                       /* 上界 = 全部并成一段，一定可行 */
//
//	ans = hi;
//	while (lo <= hi) {
//		long long mid = lo + (hi - lo) / 2;   /* 防溢出写法 */
//		if (need(mid) <= m) {                 /* 可行 -> 记下答案，再试更小 */
//			ans = mid;
//			hi = mid - 1;
//		} else {                              /* 不可行 -> 放大 */
//			lo = mid + 1;
//		}
//	}
//
//	printf("%lld\n", ans);
//	return 0;
//}
