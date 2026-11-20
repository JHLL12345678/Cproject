//int min(int a, int b) {
//	return a > b ? b : a;
//}
//int maxArea(int* height, int heightSize) {
//	int l = 0, r = heightSize - 1, ans = 0;
//	while (l < r) {
//		int V = (r - l) * min(height[l], height[r]);
//		if (V > ans)
//			ans = V;
//		height[l] > height[r] ? r++ : l++;
//	}
//	return ans;
//}