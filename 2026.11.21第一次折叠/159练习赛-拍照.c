//#include <stdio.h>
//#include <string.h>
//long long h[200005];
//int s[200005];
//int canL[200005];//左边标记
//int canR[200005];//右边标记
//
//void solve()
//{
//    int n;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//        scanf("%lld", h + i);
//    char c;
//    scanf("%c", &c);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%c", &c);
//        s[i] = (c == 'L' ? 1 : 0);
//    }
//    //开始从左到有历遍；
//    int max_ = 0, ansL = 0, ansR = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (h[i] > max_)
//        {
//            max_ = h[i];
//            canL[i] = 1;
//            ansL++;
//        }
//        else
//            canL[i] = 0;
//        //printf("%d ",canL[i]);
//    }
//    //printf("\n");//从右到左历遍标记可以拍到的;
//    max_ = 0;
//    for (int i = n - 1; i >= 0; i--)
//    {
//        if (h[i] > max_)
//        {
//            max_ = h[i];
//            canR[i] = 1;
//            ansR++;
//        }
//        else
//            canR[i] = 0;
//    }
//    //计算左右两边的人数,和操作前k个人
//    for (int i = 0; i < n; i++)
//    {
//        if (canL[i] == 1 && s[i] == 0)
//            ansL--;
//        if (canR[i] == 1 && s[i] == 1)
//            ansR--;
//        //printf("%d ", s[i]);
//    }
//    int sum = ansL + ansR, maxk = 0, temp = 0;
//    //for (int i = 0; i < n; i++){printf("%d ", canR[i]);}printf("\n");
//    for (int k = 1; k <= n; k++)
//    {
//        s[k - 1] = (s[k - 1] ? 0 : 1);//反转该值;
//        if (canL[k - 1] == 1 && s[k - 1] == 0)
//            ansL--;
//        else if (canL[k - 1] == 1 && s[k - 1] == 1)
//            ansL++;
//        if (canR[k - 1] == 1 && s[k - 1] == 1)
//            ansR--;
//        else if (canR[k - 1] == 1 && s[k - 1] == 0)
//            ansR++;
//        temp = ansR + ansL;
//        if (temp > sum)
//        {
//            sum = temp;
//            maxk = k;
//        }
//    }
//    printf("%d %d\n", sum, maxk);
//}
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    for (int i = 0; i < T; i++)
//        solve();
//}