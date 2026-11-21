//#include <stdlib.h>
//#include <string.h>
////想法和思路
////枚举每一个点统计以偶数还是奇数扩散的字串能达到最大值
//char* longestPalindrome(char* s) {
//    int len = 0;
//    while (s[len] != '\0') len++;
//
//    if (len == 0) {
//        char* res = (char*)malloc(1);
//        res[0] = '\0';
//        return res;
//    }
//    int start = 0, maxLen = 1; 
//    for (int i = 0; i < len; i++) {
//        int l = i, r = i;
//        while (l >= 0 && r < len && s[l] == s[r]) {
//            if (r - l + 1 > maxLen) {
//                maxLen = r - l + 1;
//                start = l;
//            }
//            l--; r++;
//        }
//        l = i; r = i + 1;
//        while (l >= 0 && r < len && s[l] == s[r]) {
//            if (r - l + 1 > maxLen) {
//                maxLen = r - l + 1;
//                start = l;
//            }
//            l--; r++;
//        }
//    }
//
//    char* res = (char*)malloc(maxLen + 1);
//    for (int k = 0; k < maxLen; k++) res[k] = s[start + k];
//    res[maxLen] = '\0';
//    return res;
//}