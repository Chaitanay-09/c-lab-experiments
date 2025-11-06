#include <stdio.h>

int main() {
    int intArr[3] = {10, 20, 30};
    float floatArr[3] = {1.1, 2.2, 3.3};
    char charArr[3] = {'A', 'B', 'C'};

    int *pInt = intArr;
    float *pFloat = floatArr;
    char *pChar = charArr;

    printf("=== Initial Values ===\n");
    printf("pInt points to: %p -> %d\n", pInt, *pInt);
    printf("pFloat points to: %p -> %.1f\n", pFloat, *pFloat);
    printf("pChar points to: %p -> %c\n", pChar, *pChar);

    pInt++;
    pFloat++;
    pChar++;

    printf("\n=== After Increment ===\n");
    printf("pInt points to: %p -> %d\n", pInt, *pInt);
    printf("pFloat points to: %p -> %.1f\n", pFloat, *pFloat);
    printf("pChar points to: %p -> %c\n", pChar, *pChar);

    pInt--;
    pFloat--;
    pChar--;

    printf("\n=== After Decrement (Back to Original) ===\n");
    printf("pInt points to: %p -> %d\n", pInt, *pInt);
    printf("pFloat points to: %p -> %.1f\n", pFloat, *pFloat);
    printf("pChar points to: %p -> %c\n", pChar, *pChar);

    return 0;
}
