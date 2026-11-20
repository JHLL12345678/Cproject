//#include <stdlib.h>
//#include <string.h>
//
///* 比较函数：供 qsort 使用，升序排序 */
//int cmp_int(const void* a, const void* b) {
//	int x = *(const int*)a, y = *(const int*)b;
//	return (x > y) - (x < y);
//}
//
//int** fourSum(int* nums, int numsSize, int target, int* returnSize, int** returnColumnSizes) {
//	*returnSize = 0;
//	if (numsSize < 4) return NULL;
//
//	qsort(nums, numsSize, sizeof(int), cmp_int);
//
//	int cap = 16;
//	int** res = (int**)malloc(cap * sizeof(int*));
//	*returnColumnSizes = (int*)malloc(cap * sizeof(int));
//	for (int i = 0; i < numsSize - 3; i++)
//	{
//		if (i > 0 && nums[i] == nums[i - 1]) continue;
//		for (int j = i + 1; j < numsSize - 2; j++)
//		{
//			if (j > i + 1 && nums[j] == nums[j - 1]) continue;
//			int l = j + 1, r = numsSize - 1;
//			while (l < r) {
//				long long sum = (long long)nums[i] + nums[j] + nums[l] + nums[r];
//				if (sum > target) r--;
//				else if (sum < target) l++;
//				else {
//					if (*returnSize == cap) {
//						cap *= 2; 
//						res = (int**)realloc(res, cap * sizeof(int*));
//						*returnColumnSizes = (int*)realloc(*returnColumnSizes, cap * sizeof(int));
//					}
//					int* quad = (int*)malloc(4 * sizeof(int));
//					quad[0] = nums[i];
//					quad[1] = nums[j];
//					quad[2] = nums[l];
//					quad[3] = nums[r];
//					res[*returnSize] = quad;
//					(*returnColumnSizes)[*returnSize] = 4;
//					(*returnSize)++;
//					while (l < r && nums[l] == nums[l + 1]) l++;
//					while (l < r && nums[r] == nums[r - 1]) r--;
//					l++;
//					r--;
//				}
//			}
//		}
//	}
//	return res;
//}