#include "leetcode.h"

int lengthOfLongestSubstring(char* s) {
    char map[255] = {0};
    char *l = s, *r = s;
    int max = 0, cur = 0;
    while (*r != 0) {
        while (map[*r]) {
            map[*l++] = 0;
            cur--;
        }
        map[*r++] = 1;
        cur++;
        max =  (cur > max) ? cur : max;
    }
    return max;
}
