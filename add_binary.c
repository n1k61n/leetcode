#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void reverse(char *str){
    
    // Initialize first and last pointers
    int first = 0;
    int last = strlen(str) - 1;
    char temp;

    // Swap characters till first and last meet
    while (first < last) {
      
        // Swap characters
        temp = str[first];
        str[first] = str[last];
        str[last] = temp;

        // Move pointers towards each other
        first++;
        last--;
    }
}


char* addBinary(char* a, char* b) {
    int lena = strlen(a);
    int lenb = strlen(b);
    int maxlen = (lena > lenb) ? lena : lenb;
    reverse(a);
    reverse(b);
    int i, diga, digb, total, carry = 0;
    char *res = malloc(maxlen+2);
    for (i  = 0; i < maxlen; i++){
        if (a[i] != '\0') 
            diga = (a[i] == '1') ? 1 : 0;
        else
            diga = 0;
        if (b[i] != '\0')
            digb = (b[i] == '1') ? 1 : 0;
        else
            digb = 0;
        total = diga + digb + carry;
        res[i] =  (total % 2) + '0';
        carry = total / 2;
    }
    if (carry == 1)
        res[i++] = '1';
    res[i] = '\0';
    reverse(res);
    return res;
}

int main()
{
    char a[] = "1";
    char b[] = "111";
    printf("%s\n", addBinary(a, b));
    return 0;
}