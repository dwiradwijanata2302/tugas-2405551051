#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);
    if(num <= 1){
        printf("BUKAN");
        return 0;
    }
    
    for(int i = 2; i<num; i++){
        if(num % i == 0){
            printf("BUKAN");
            return 0;
        }
    }
    printf("PRIMA");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}