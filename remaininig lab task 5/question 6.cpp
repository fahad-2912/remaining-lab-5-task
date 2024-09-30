#include <stdio.h>

int countOnes(int a) {
    int count = 0;
    count += (a & 1);
    count += (a >> 1) & 1;
    count += (a >> 2) & 1;
    count += (a >> 3) & 1;
    count += (a >> 4) & 1;
    count += (a >> 5) & 1;
    count += (a >> 6) & 1;
    count += (a >> 7) & 1;
    count += (a >> 8) & 1;
    count += (a >> 9) & 1;
    count += (a >> 10) & 1;
    count += (a >> 11) & 1;
    return count;
}
    int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int result = countOnes(number);
    printf("Number of 1s in binary representation of %d is: %d\n", number, result);
    return 0;
}
