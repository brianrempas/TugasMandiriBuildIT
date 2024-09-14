#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num;
    
   

    scanf("%d",&num);
    
    
    if(num < 2){
        printf("BUKAN");
        return 0;
    } else if (num == 2){
        printf("PRIMA");
        return 0;
    } else if (num % 2 == 0){
        printf("BUKAN");
        return 0;
    }
    
    for(int i = 2; i <= sqrt(num); i+=2){
        if(num%i ==0){
            printf("BUKAN");
            return 0;
        }
    }
    
    printf("PRIMA");
    return 0;

}
