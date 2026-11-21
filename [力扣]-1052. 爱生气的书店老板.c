//#include <stdio.h>
//#include <stdlib.h>
//int maxSatisfied(int* customers, int customersSize, int* grumpy, int grumpySize, int minutes) {
//    int s[2] , max_s1 = 0;
//    for (int i = 0; i < customersSize; i++) {
//        s[grumpy[i]] += customers[i];
//        int left = i - minutes + 1; // 窗口左端点
//        if (left < 0) { // 窗口长度不足 minutes
//            continue;
//        }
//        max_s1 = MAX(max_s1, s[1]);
//        // 窗口最左边元素离开窗口
//        s[1] -= grumpy[left] ? customers[left] : 0;
//    }
//    return s[0] + max_s1;
//}
//int main() {
//	int nums[] = { 1,0,1,2,1,1,7,5 };
//	int arr[] = { 0,1,0,1,0,1,0,1 };
//	printf("%d", maxSatisfied(nums,8,arr,8,3));
//}
// 
// 
// 
// 
/////
/////我的石山代码
/////
// 
// 
// 
// 
// 
//#include <stdio.h>
//#include <stdlib.h>
//int maxSatisfied(int* customers, int customersSize, int* grumpy, int grumpySize, int minutes) {
//	if (customersSize == 1)
//		return customers[0];
//	int* arr = (int*)malloc((customersSize + 1) * sizeof(int));
//	int* rra = (int*)malloc((customersSize + 1) * sizeof(int));
//	arr[0] = !grumpy[0] ? customers[0] : 0;
//	rra[customersSize - 1] = !grumpy[customersSize - 1] ? customers[customersSize - 1] : 0;
//	for (int i = 1; i < customersSize; i++)
//	{
//		if (!grumpy[i])
//			arr[i] = customers[i] + arr[i - 1];
//		else
//			arr[i] = arr[i - 1];
//		printf("%d ", arr[i]);
//	}
//	printf("|");
//	for (int i = customersSize - 2; i >= 0; i--)
//	{
//		if (!grumpy[i])
//			rra[i] = customers[i] + rra[i + 1];
//		else
//			rra[i] = rra[i + 1];
//		printf("%d ", rra[i]);
//	}
//	int sum = 0, ans = 0;
//	for (int r = 0; r < customersSize; r++)
//	{
//		sum += customers[r];
//		if (r - minutes + 1 < 0)continue;
//		int SUM = sum, l = r - minutes + 1;
//		if (l > 0)
//			SUM += arr[l - 1];
//		if (r < customersSize - 1)
//			SUM += rra[r + 1];
//		if (SUM > ans)
//			ans = SUM;
//		sum -= customers[l];
//	}
//	return ans;
//}