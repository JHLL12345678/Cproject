//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//typedef struct
//{
//	int id, ch, math, en,score;
//}Stu;
//int cmp_stu(const void* a, const void* b) 
//{
//	Stu* x = (const Stu*)a, * y = (const Stu*)b;
//	if (x->score != y->score)
//		return (x->score < y->score) - (x->score > y->score);
//	if (x->ch != y->ch)
//		return (x->ch < y->ch) - (x->ch > y->ch);
//	return (x->id > y->id) - (x->id < y->id);
//}
//int main() 
//{
//	int N;
//	Stu stu[300];
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)//不要第一个
//	{
//		stu[i].id = i+1;
//		scanf("%d %d %d", &stu[i].ch, &stu[i].math, &stu[i].en);
//		stu[i].score = stu[i].ch+stu[i].math + stu[i].en;
//	}
//	qsort(stu, N, sizeof(stu[0]), cmp_stu);
//	for (int i = 0; i < 5; i++)
//		printf("%d %d\n", stu[i].id, stu[i].score);
//}
