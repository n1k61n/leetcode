#include <stdbool.h>
#define max(a, b)  (a) > (b) ? (a) : (b)

bool canJump(int* nums, int numsSize) {
    int  maxReachable = 0;
    for (int i = 0; i < numsSize; i++){
        if (i > maxReachable)
            return false;
        maxReachable = max(maxReachable, i + nums[i]);
    }
    return true;
}