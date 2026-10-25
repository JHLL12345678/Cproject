//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//typedef struct 
//{
//	char s[21];
//	int y, m, d,id;
//}Man;
//int cmp_Man(const void *a, const void* b)
//{
//	Man* x1 = (const Man*)a, * x2 = (const Man*)b;
//	if (x1->y != x2->y)
//		return (x1->y > x2->y) - (x1->y < x2->y);
//	if (x1->m != x2->m)
//		return (x1->m > x2->m) - (x1->m < x2->m);
//	if (x1->d != x2->d)
//		return (x1->d > x2->d) - (x1->d < x2->d);
//	return (x1->id < x2->id) - (x1->id > x2->id);
//}
//int main() 
//{
//	int N;
//	Man man[101];
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		man[i].id = 1 + i;
//		scanf("  %s", man[i].s);
//		scanf("%d %d %d", &man[i].y, &man[i].m, &man[i].d);
//	}
//	qsort(man,N,sizeof(man[0]),cmp_Man);
//	for (int i = 0; i < N; i++)
//		printf("%s\n", man[i].s);
//}