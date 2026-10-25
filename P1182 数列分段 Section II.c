#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int arr[100005] = { 0 };
long long sum=0;
int N, M;
int need(long long mid)
{
	long long x=0;
	int cut = 1,up=0;
	for (int i = 1; i <= N; i++)
	{
		if (x + arr[i] > mid)
		{
			cut++;
			x = arr[i];
		}
		else
			x += arr[i];
	}
	return cut;
}
int main() 
{
	long long ans, lo=0, hi=0;
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", arr + i);
		hi += arr[i];
		if (arr[i] > lo)
			lo = arr[i];
	}
	while (lo <= hi) 
	{
		long long mid = lo + (hi - lo) / 2;
		if (need(mid) <= M)
		{
			ans = mid;
			hi = mid - 1;
		}
		else
			lo = mid + 1;
	}
	printf("%lld", ans);
	return 0;
}