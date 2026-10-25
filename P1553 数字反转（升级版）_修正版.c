//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///* ------------------------------------------------------------------
//   P1553 数字反转（升级版）—— 修正版
//   结构与你原来的代码保持一致：
//   1) 读入字符串，找 '.'、'%'、'/' 判断是哪种数；
//   2) switch 分四种情况；
//   3) 用 ArrChanged 反转输出整数部分 / 分子 / 百分数数字部分。
//   只改出错的地方，改动处都标了【修正】。
//   ------------------------------------------------------------------ */
//
//void ArrChanged(int arr[], int* len);
//
//int main()
//{
//	char s[501];
//	int len = 0, token = 0, arr[500] = { 0 }, arr0[500] = { 0 };
//
//	scanf("%s", s);
//	while (s[len] != '\0') { len++; }
//
//	for (int i = 0; i < len; i++)
//	{
//		if (s[i] == '.')
//			token = 1;
//		else if (s[i] == '%')
//			token = 2;
//		else if (s[i] == '/')
//			token = 3;
//		if (token)
//			break;
//	}
//
//	switch (token)
//	{
//	case 0:   
//	{
//		for (int i = 0; i < len; i++)
//			arr[i] = s[i] - '0';
//		ArrChanged(arr, &len);
//		break;
//	}
//	case 1:   
//	{
//		int sign = 1, len1 = 0, len2 = 0, start = 0;
//		for (int i = 0; i < len; i++)
//		{
//			if (s[i] == '.')
//			{
//				len1 = i++;        
//				len2 = len - i;     
//				sign = 0;
//			}
//			if (sign)
//				arr[i] = s[i] - '0';
//			else
//				arr0[i - len1 - 1] = s[i] - '0';  
//		}
//		len2 = len - len1 - 1;   
//		ArrChanged(arr, &len1); 
//		printf(".");
//		while (start < len2 && arr0[start] == 0)
//			start++;
//		len2 -= start;
//		ArrChanged(arr0 + start, &len2);
//		break;
//	}
//	case 2: 
//	{
//		s[len - 1] = '0';      
//		for (int i = 0; i < len; i++)
//			arr[i] = s[i] - '0';
//		ArrChanged(arr, &len);
//		printf("%%");         
//		break;
//	}
//	case 3:   
//	{
//		int sign = 1, len1 = 0, len2 = 0;
//
//		for (int i = 0; i < len; i++)
//		{
//			if (s[i] == '/')
//			{
//				len1 = i++;      
//				len2 = len - i;     
//				sign = 0;
//			}
//			if (sign)
//				arr[i] = s[i] - '0';              
//			else
//				arr0[i - len1 - 1] = s[i] - '0';  
//		}
//
//		len2 = len - len1 - 1; 
//
//		ArrChanged(arr, &len1); 
//		printf("/");
//		ArrChanged(arr0, &len2); 
//		break;
//	}
//	}
//}
//
//void ArrChanged(int arr[], int* len)
//{
//	while ((*len) > 0 && arr[(*len) - 1] == 0)
//		(*len)--;
//
//	if ((*len) == 0)
//		printf("0");
//	else
//		for (int i = (*len) - 1; i >= 0; i--)
//			printf("%d", arr[i]);
//}
