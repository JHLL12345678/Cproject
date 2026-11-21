//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct {
//	int b, e, t;
//}node;
//node arr[100005];
//int map[100005];
//int cmp_node(const void* a, const void* b) {
//	const node* x = (const node*)a, * y = (const node*)b;
//	if (x->e == y->e)
//		return (x->b > y->b) - (x->b < y->b);   // 关键修正：按 e 升序
//	return (x->e > y->e) - (x->e < y->e);
//}
//int main() {
//	int n,h,H;
//	scanf("%d %d",&n,&h);
//	H = h;
//	memset(map, 0, sizeof(map));
//	for (int i = 0; i < h; i++)
//		scanf("%d %d %d", &arr[i].b, &arr[i].e, &arr[i].t);
//	qsort(arr, H, sizeof(node), cmp_node);
//	int ans = 0;
//	for (int i = 0; i < H; i++)
//	{
//		int k = arr[i].t;
//		for (int l = arr[i].b; l <= arr[i].e; l++)
//			if (map[l] == 1)
//				k--;
//		for (int j = arr[i].e; k>0&& j>=arr[i].b; j--){
//			if (map[j] == 0){
//				map[j] = 1;
//				k--;
//				ans++;
//			}
//		}
//	}
//	printf("%d",ans);
//	return 0;
//
//}