//#include <stdio.h>
//typedef struct {
//	int l, r;
//}node;
//node arr[100005];
//long long a[1000005];
//int main() {
//	int T;
//	scanf("%d",&T);
//	int max = 0;
//	for (int i = 1; i <= T; i++)
//	{
//		scanf("%d %d", &arr[i].l, &arr[i].r);
//		if (max < arr[i].r)
//			max = arr[i].r;
//	}
//	a[0] = 0;
//	int k = 1,token=0;
//	int x[7];
//	for (int i = 1; i <=1000000; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			int n = i,len=0;
//			while (n) {
//				x[len] = n% 10;
//				n /= 10;
//				len++;
//			}
//			int g = 0;
//			for (int c = len-1; c >=0; c--)
//			{
//				a[g+k] = x[c] + a[k +g - 1];
//				g++;
//			}
//			k += len;
//			if (k>=max+1)
//			{
//				token = 1;
//				break;
//			}
//		}
//		if (token)
//			break;
//	}
//	for (int i = 1; i <= T; i++)
//		printf("%lld\n", a[arr[i].r ] - a[arr[i].l-1]); 
//	return 0;
//}