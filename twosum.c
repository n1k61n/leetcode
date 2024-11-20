#include <stdio.h>
#include <stdlib.h>
#include "leetcode.h"


struct HASHMAP{
    int value;
    int index;
};

typedef struct HASHMAP hashmap;


int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    hashmap *ht = malloc(numsSize * sizeof(hashmap));
    ht = NULL;
    int ans;
    for(int i = 0; i < numsSize; i++){
        ans = target - nums[i];
        if (ht != NULL && ans == ht[ans].value){
            int *ret = malloc(2* sizeof(int));
            ret[0] = i;
            ret[1] = ht[ans].index;
            return ret;
        }
        ht[nums[i]].value = nums[i];
        ht[nums[i]].index = i;
    }
    return NULL;
}