//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int arr[100005];
//int kept[100005];
//int minArrivalsToDiscard(int* arrivals, int arrivalsSize, int w, int m) {
//	int top = 0, ans=0;
//	memset(arr, 0, sizeof(arr));
//	for (int i = 0; i < arrivalsSize; i++)
//		kept[i] = 1;
//	for (int r = 0; r < arrivalsSize; r++)
//	{
//		arr[arrivals[r]]++;
//		if (arr[arrivals[r]] > m) {
//			ans++;
//			arr[arrivals[r]]--;
//			kept[r] = 0;
//		}
//		int l = r - w + 1;
//		if (l<0)continue;
//		if (kept[l])
//			arr[arrivals[l]]--;
//	}
//	return ans;
//}
//int main() {
//	int arrivals[] = { 4,8,1,4,6,3,1,1,4,4};
//	int w = 9;
//	int m = 2;
//	printf("%d",minArrivalsToDiscard(arrivals,sizeof(arrivals)/4, w, m));
//}