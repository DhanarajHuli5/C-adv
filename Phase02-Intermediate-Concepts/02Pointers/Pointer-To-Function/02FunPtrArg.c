//Passing function pointers as arguments
#include <stdio.h>

int square(int a) {
    return a * a;
}

int cube(int a) {
    return a * a * a;
}

int conditionalSum(int a, int b, int(*ope)(int)){
    return ope(a) + ope(b);
}

int main(){
    int result = conditionalSum(2, 3, square);
    printf("Result: %d\n", result);
    result = conditionalSum(2, 3, cube);
    printf("Result: %d\n", result);
}
