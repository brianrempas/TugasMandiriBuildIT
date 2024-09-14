#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
    

int main() {
    bool isFind = false;
    int N = 0;
    scanf("%d", &N);
    int num[N];
    int smallest = 9999;
    for(int i=0; i<N; i++){
        scanf("%d", &num[i]);
    }
    int index = 0;
    for(int i=0; i<N; i++){ 
        for(int x=i; x<N; x++){
            if(num[x]<smallest){
                smallest = num[x]; 
                index = x;
                isFind = true;
            }
        }
        if(isFind == true){
            num[index] = num[i];
            num[i]=smallest;
            smallest= 9999;
        }
    }
    //1 2 3 4 5
    //i x : 1 1 : 2 2 (2)
    /* */
    for(int i=0; i<N; i++){
        printf("%d\n", num[i]);
    }    
    
    
    return 0;
}
