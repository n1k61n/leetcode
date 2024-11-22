#include <stdio.h>
#include <limits.h>

int reverse(int x){
    signed long int res = 0;
    while(x){
        res = res * 10 + x % 10;
        x = x / 10;
    }
    return (res < INT_MAX && res > INT_MIN) ? res : 0;
}