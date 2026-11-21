//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////题目背景
////以下为原题面，仅供参考 :
////给定一个数，请将该数各个位上数字反转得到一个新数。
////这次与 NOIp2011 普及组第一题不同的是：这个数可以是小数，分数，百分数，整数。整数反转是将所有数位对调；小数反转是把整数部分的数反转，再将小数部分的数反转，不交换整数部分与小数部分；分数反转是把分母的数反转，再把分子的数反转，不交换分子与分母；百分数的分子一定是整数，百分数只改变数字部分。整数新数也应满足整数的常见形式，即除非给定的原数为零，否则反转后得到的新数的最高位数字不应为零；小数新数的末尾不为 0（除非小数部分除了 0 没有别的数，那么只保留1个 0）；分数不约分，分子和分母都不是小数（约分滴童鞋抱歉了，不能过哦。输入数据保证分母不为 0），本次没有负数。
////题目描述
////给定一个数，请将该数各个位上数字反转得到一个新数。
////这次与 NOIp2011 普及组第一题不同的是：这个数可以是小数，分数，百分数，整数。
////整数反转是将所有数位对调。
////小数反转是把整数部分的数反转，再将小数部分的数反转，不交换整数部分与小数部分。
////分数反转是把分母的数反转，再把分子的数反转，不交换分子与分母。
////百分数的分子一定是整数，百分数只改变数字部分。
////输入格式
////一个实数 s
////输出格式
////一个实数，即 s 的反转数
//void ArrChanged(int arr[], int* len);
//int main()
//{
//	char s[501];
//	int len = 0, token = 0, arr[500] = { 0 }, arr0[500] = { 0 };
//	scanf("%s", s);
//	while (s[len] != '\0') { len++; }
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
//		int sign = 1, len1 = 0, len2 = 0;
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
//			{
//				arr0[len2 - 1] = s[i] - '0';
//				len2--;
//			}
//		}
//		len2 = len - len1;
//		ArrChanged(arr,&len1);
//		printf(".");
//		ArrChanged(arr0, &len2);
//		break;
//	}
//	case 2:
//	{
//		s[len - 1] = '0';
//		for (int i = 0; i < len; i++)
//			arr[i] = s[i] - '0';
//		ArrChanged(arr,&len);
//		printf("%%");
//		break;
//	}
//	case 3:
//	{
//		int sign = 1, len1 = 0, len2 = 0;
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
//			{
//				arr0[i-len1-1] = s[i] - '0';
//				len2++;
//			}
//		}
//		len2 = len - len1;
//		ArrChanged(arr ,&len1);
//		printf("/");
//		ArrChanged(arr0, &len2);
//		break;
//	}
//	}
//}
//void ArrChanged(int arr[], int* len)
//{
//	while (arr[(*len) - 1] == 0) { (*len)--; }
//	if ((*len) == 0)
//		printf("0");
//	else
//		for (int i = (*len) - 1; i >= 0; i--)
//			printf("%d", arr[i]);
//}