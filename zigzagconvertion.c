#include <stdlib.h>
#include <string.h>



char* convert(char* s, int numRows) {
    int index=0;
    int i=0;
    int temp=0;
    int length=strlen(s);
    if(numRows==1){
        return s;
    }
    char* res = (char*)malloc((length+1) * sizeof(char));
    res[0]=s[0];
    int res_iter=1;
    int cont=1;
    int even=0;
    while(cont<length){
        temp=i;
        if(index==0){
            i=i+(numRows-1-index)*2;
        }
        else if(index==numRows-1){
            i=i+(numRows-1)*2;
        }
        else if(even%2==0){
               i=i+(numRows-1-index)*2; 
               even++;
        }
        else{
            i=i+index*2;
            even++;
        }
        
        
        if(i<length){
            res[res_iter]=s[i];
            cont++;
            res_iter++;
        }
        else{
            index++;
            i=index;
            res[res_iter]=s[i];
            cont++;
            res_iter++;
            even=0;

        }

    }
    
    res[length]='\0';
    return res;
}