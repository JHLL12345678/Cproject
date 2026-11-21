//int check(char a) {
//	if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
//		return 1;
//	return 0;
//}
//int maxVowels(char* s, int k) {
//	int count = 0;
//	int len = 0,ans=0,l=0,r=k-1;
//	while (s[len] != '\0')len++;
//	for (int i = l; i <= r; i++)
//	{
//		if (check(s[i]))
//			ans++;
//	}
//	if (ans == k)
//		return ans;
//	count = ans;
//	while (r < len) {
//		if (check(s[l++]))
//			count--;
//		if (check(s[++r])&&r+1<=len)
//			count++;
//		if (count > ans)
//			ans = count;
//	}
//	return ans;
//}