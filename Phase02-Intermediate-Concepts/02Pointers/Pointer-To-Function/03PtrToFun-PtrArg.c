#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    void (*ptr)(int*, int*) = swap;
    int a = 10 , y = 3;
    printf("%d and %d\n",a,y);
    ptr(&a, &y);
    printf("%d and %d\n",a,y);
}
