//#include <stdio.h>
//#include <stdlib.h>
//int maxScore(int* cardPoints, int cardPointsSize, int k) {
//	int* arr = (int*)malloc((2 * k+1) * sizeof(int));
//	int top = 0;
//	for (int i = k-1; i >=0 ; i--)
//		arr[top++] = cardPoints[i];
//	for (int i = cardPointsSize - 1; i >= cardPointsSize - k; i--)
//		arr[top++] = cardPoints[i];
//	int sum = 0, ans = 0;
//	for (int r = 0; r < top; r++)
//	{
//		sum += arr[r];
//		//printf("%d ",arr[r]);
//		if (r - k + 1<0)continue;
//		if (sum >ans)
//			ans=sum; 
//		int l = r - k + 1;
//		sum -= arr[l];
//	}
//	return ans;
//}
//int main() {
//	int arr[] = { 100,40,17,9,73,75 };
//	printf("%d", maxScore(arr,6,3));
//}