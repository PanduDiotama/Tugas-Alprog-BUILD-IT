#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(long long j){

    if(j <= 1){
    
    return 0;
    }
    
    if(j == 2 || j == 3){
    
    return 1;
    }
    
    if(j % 2 ==0 || j % 3 == 0){
    
    return 0;
    }
    
    for(long long i = 5; i * i <= j; i++){
        if(j % i == 0 || j % (i + 2) == 0)
    
    return 0;
    }
    
    return 1;
}


int main() {
    long long j;
    scanf("%lld", &j);
    
    if(isPrime(j)){
        printf("PRIMA\n");
    } 
    
    else{
        printf("BUKAN\n");
    }
       
    return 0;
}