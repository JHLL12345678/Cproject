//#include <stdlib.h>
//int cmp_int(const void* a, const void* b) {
//	int x = *(const int*)a, y = *(const int*)b;
//	return (x > y) - (x < y);
//}
////使用了双指针+枚举，解法:由于需要求三个数字之和等于targer=0因为数据在排序后不会影响题目，假如我们能先固定一个值即枚举一个值
////剩下两个就能通过双指针去快速查找，并且我们只要保证排除与选中的数相同的数就能确保不会重复
//int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
//	*returnColumnSizes = 0;
//	//设答案可能有3000个
//	int** res = (int**)malloc(3000*sizeof(int));
//	qsort(nums, numsSize, sizeof(int), cmp_int);
//	for (int i = 0; i < numsSize-2; i++)
//	{
//		if (nums[i] == nums[i + 1])continue;
//		int l=i+1, r=numsSize-1;
//		while(l<r)
//		{
//			int sum = nums[i] + nums[l] + nums[r];
//			if (sum > 0)r--;
//			else if (sum < 0)l++;
//			else {
//				int* ans = (int*)malloc(3 * sizeof(int));
//				ans[0] = nums[i];
//				ans[1] = nums[l];
//				ans[2] = nums[r];
//				res[**returnColumnSizes] = ans;
//				(**returnColumnSizes)++;
//				while (l < r && nums[l] == nums[l + 1])l++;
//				while (l < r && nums[l] == nums[r - 1])r--;
//				l ++ ;
//				r--;
//			}
//		}
//	}
//	return res;
//}