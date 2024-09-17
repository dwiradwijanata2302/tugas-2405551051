#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;  
    printf("input data anda; ");
    scanf("%d", &num);
    int array[num];
    printf("Input bilangan pada list: ");
    for(int i = 0; i < num; i++){
     scanf("%d", &array[i]);
     getchar();
    }

    for(int k = 0; k < num; k++){
        for(int e = 0; e < num; e++){
            if (array[e] > array[e +1]){
                int temp = array [e];
                array[e] = array[e + 1];
                array [e + 1] = temp;
            }
        }
    }
    printf("\nHasil : \n");
    for(int c = 0; c < num; c++){
        printf("%d\n", array[c]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
