#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	long long a, b, c,time,id;//点单时间、到店时间、奶茶制作时间、完成时间
}node ;
node arr[200005];
long long ans[200005];
int cmp_node(const void* a, const void* b) {
	node* x = (const node*)a, * y = (const node*)b;
	return (x->a > y->a) - (x->a < y->a);
}
long long max_(long long x, long long y) {return x > y ? x : y;}
long long timeadd(long long t) {return  t > 0 ? t : 0;}
long long q[10];
void solve() {
	int n;//全局时间
	scanf("%d",&n);
	memset(q, 0, sizeof(q));
	for (int i = 1; i <= n; i++)
	{
		scanf("%lld %lld %lld", &arr[i].a, &arr[i].b, &arr[i].c);
		arr[i].id= i;
	}
	qsort(arr+1,n,sizeof(arr[0]),cmp_node);
	long long T=0;//制做奶茶的时间（对于当前的人）
	for (int j = 1; j <= n; j++){//历遍订单直接向后推出能在这个窗口制做的订单的时间
		//从点单时间才开始做
		T += arr[j].c+ timeadd(arr[j].a-T);//累加做餐的时间
		arr[j].time = max_(max_(q[j % 10], T),arr[j].b) - arr[j].b;//当前这个人在这个窗口能拿到的时间等于做餐时间与上一个人来的时间的最大值
		q[j % 10] = max_(max_(q[j % 10], arr[j].b),T);//这个窗口取上一个人与这个人的来的时间的最大值
		ans[arr[j].id] = arr[j].time;
	}
	for (int i = 1; i <= n; i++)
		printf("%lld ",ans[i]);
	printf("\n");
}	
int main() {
	int T;
	scanf("%d",&T);
	while (T--)
		solve();
}