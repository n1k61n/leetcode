#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int *checkPalindrome(char *s, int left, int right){
    int *ret = malloc(sizeof(int) * 2);
    while(left >= 0 && right < strlen(s) && s[left] == s[right]){
        left--;
        right++;
    }
    ret[0] = left+1;
    ret[1] = right-1;
    return ret;
}


char *copy(char *s, int l, int r){
    char *ret = malloc(sizeof(char) * (r - l + 1));
    int i, j;
    for( i = 0, j = l; j  <= r; i++, j++)
        ret[i] = s[j];
    ret[i] = '\0';
    return ret;
}



char* longestPalindrome(char* s) {
    int len = strlen(s);
    int l, r;
    int maxl, maxr, max = 0;
    int *ret;
    int gap1, gap2;
    int maxgap = 0;
    char *ans;
    for(int i = 0 ; i < len; i++){
        ret = checkPalindrome(s, i, i);
        gap1 = ret[1]-ret[0];
        if (gap1 > maxgap){
            maxgap = gap1;
            ans = copy(s, ret[0], ret[1]); 
        }
        ret = checkPalindrome(s, i, i+1);
        gap2 = ret[1]-ret[0];
        if (gap2 > maxgap){
            maxgap = gap2;
            ans = copy(s, ret[0], ret[1]); 
        }

    }

    return ans;

}
