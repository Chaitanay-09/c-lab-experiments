#include <stdio.h>

int main() {
    int a = 10;
    float b = 25.5;

    int *p1 = &a;      
    float *p2 = &b;    

    printf("Value of a = %d\n", a);
    printf("Value of b = %.2f\n", b);

    printf("Address of a = %p\n", &a);
    printf("Address of b = %p\n", &b);

    printf("Value pointed by p1 = %d\n", *p1);
    printf("Value pointed by p2 = %.2f\n", *p2);

    printf("Address stored in p1 = %p\n", p1);
    printf("Address stored in p2 = %p\n", p2);

    return 0;
}
