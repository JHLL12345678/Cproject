//#include <stdio.h>
//int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {
//	int sum = 0, ans = 0;
//	for (int r = 0; r < arrSize; r++)
//	{
//		sum += arr[r];
//		if (r - k + 1<0)continue;
//		if (sum / k >= threshold)
//			ans++;
//		int l = r - k + 1;
//		sum -= arr[l];
//	}
//	return ans;
//}
//int main() {
//	int arr[] = { 2,2,2,2,5,5,5,8 };
//	printf("%d", numOfSubarrays(arr,8,3,4));
//}