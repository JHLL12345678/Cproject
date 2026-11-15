#include <stdio.h>
#include <stdlib.h>
int b[200005];
int ans[200005];
int main() {
	int n;
	long long sum=0;
	scanf("%d",&n);
	for (int i = 1; i < n; i++) {
		scanf("%d", b+i);
		sum += b[i];
	}
	if (n == 2) {
		printf("%d",b[1]-1);
		return 0;
	}
	ans[0] = 1;
	int bool = 0,MAX=200005;
	while (ans[0] < b[1]) {
		int token = 1,max=0;
		for (int i = 1; i < n-1; i++) {
			ans[i] = b[i] - ans[i - 1];
			if (ans[i] >= b[i + 1]||ans[i]<=0) {
				token = 0;
				break;
			}
			if (ans[i] > max)
				max = ans[i];
		}
		if (token) {
			if(max<MAX)
				MAX = max;
			bool = 1;
		}
		ans[0]++;
	}
	printf("%d ",bool?MAX:-1);
}