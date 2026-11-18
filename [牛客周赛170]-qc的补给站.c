#include <stdio.h>
#include <stdlib.h>
#define ll long long
typedef struct  {
	ll l, r;
}node;
node a[200005];
int cmp_int(const void *a,const void*b) {
	const node* x = (const node*)a, * y = (const node*)b;
	if (x->l == y->l)
		return (x->r < y->r) - (x->r > y->r);
	return (x->l < y->l) - (x->l > y->l);
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		ll I;
		scanf("%lld", &I);
		a[i].r = I + i - 1;//因为ai=r-i+1即r=ai+i-1
		a[i].l = i - I + 1;//因为ai=i-l+1即l=i-ai+1
	}
	qsort(a+1, n,sizeof(node),cmp_int);
	int q = 1;
	ll min = n,ans=0;
	for (int i = n; i >=1 ; i--){
		while (q <= n && a[q].l > i  ) {
			if (a[q].r < min)
				min = a[q].r;
			q++;
		}
		if (min >= i)
		{
			ans += (min - i + 1);
		}
	}
	printf("%lld",ans);
}