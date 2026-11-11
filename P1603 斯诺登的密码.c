//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//int cmp_int(const void*a,const void *b) 
//{
//	int x = *(const int*)a, y = *(const int*)b;
//	return (x < y) - (x > y);
//}
//int main() 
//{
//	char s[][15] = { "zero","one","two","three","four","five","six" ,"seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen", "sixteen" ,"seventeen", "eighteen", "nineteen", "twenty" ,"a","both","another", "first", "second", "third" };
//	char str[11];
//	int arr[100],pos=0;
//	while (scanf("%s", str) != EOF)
//	{
//		if (str[0] == '.')
//			break;
//		int len = 0,token=0;
//		while (str[len] != '\0')
//			len++;
//		for (int i = 0; i < 27; i++)
//		{
//			int len0 = 0;
//			if (s[i][0] == str[0]) 
//			{
//				token = 1,len0=0;
//				while (s[i][len0] != '\0')
//					len0++;
//				for (int j = 0; s[i][j] != '\0'; j++)
//					if (s[i][j] != str[j]||len!=len0)
//					{
//						token = 0;
//						break;
//					}
//				if (token)
//				{
//					int t=i,x;
//					if (t == 21||t==23||t==24)
//						t =1;
//					if (t == 22 || t == 25)
//						t = 2;
//					if (t == 26)
//						t = 3;
//					x = (t * t) % 100;
//					arr[pos] = x;
//					pos ++;
//				}
//			}
//		}
//	}
//	qsort(arr,pos,sizeof(arr[0]),cmp_int);
//	while (arr[pos-1] == 0)
//		pos--;
//	if (pos == 0)
//		printf("0");
//	for (int i = pos-1; i >=0 ; i--)
//	{
//		if (i != pos - 1&&arr[i]<10)
//			printf("0");
//		printf("%d", arr[i]);
//	}
//	return 0;
//}