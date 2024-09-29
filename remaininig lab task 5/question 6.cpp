#include <stdio.h>
int countOnes(int n) {
    if (n == 0)
        return 0;
    return (n & 1) + countOnes(n >> 1);
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int result = countOnes(number);
    printf("Number of 1s in binary representation of %d is: %d\n", number, result);
    return 0;
}
