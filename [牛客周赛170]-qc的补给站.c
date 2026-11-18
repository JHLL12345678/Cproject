#include<stdio.h>
#include<stdlib.h>
typedef struct {
    long long l;
    long long r;
}Person;
int cmp(const void* a, const void* b)
{
    Person* p1 = (Person*)a;
    Person* p2 = (Person*)b;
    if (p1->l > p2->l)
    {
        return -1;
    }
    if (p1->l < p2->l)
    {
        return 1;
    }
    return 0;
}
Person a[200005];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        long long d;
        scanf("%lld", &d);
        a[i - 1].l = i - d + 1;//能接触到的箱子的左边界5 2 1 3 1 2
        a[i - 1].r = i + d - 1;//能接触到的箱子的右边界
    }
    qsort(a, n, sizeof(Person), cmp);//从大到小
    long long ans = 0;
    long long min = n;
    int p = 0;
    for (long long i = n; i >= 1; i--)//从n开始枚举点作为左端点
    {
        while (p<n && a[p].l>i)//p是右端点枚举过来
        {
            if (a[p].r < min)//如果右端点小于最小值
            {
                min = a[p].r;
            }
            p++;
        }
        if (min >= i)
        {
            ans += (min - i + 1);
        }
    }
    printf("%lld\n", ans);
    return 0;
}
