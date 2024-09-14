#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>



int main() {    
    char string1[100];
    char string2[100];

    
    scanf("%s", string1);
    scanf("%s", string2);
   
    if(strcmp(string1, string2) == 0){
        printf("IDENTIK");
    } else if(strcasecmp(string1, string2) == 0) {
        printf("MIRIP");
    } else {
        printf("BERBEDA");
    }



    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    return 0;
}
