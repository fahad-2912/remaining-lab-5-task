 
#include <stdio.h>

int main() {
    float purchaseAmount;
    int hasMembership;
    
    printf("Enter purchase amount: ");
    scanf("%f", &purchaseAmount);
    
    printf("Enter membership status (1 for member, 0 for non-member): ");
    scanf("%d", &hasMembership);
    
    float discount = (purchaseAmount > 100 && hasMembership) ? 0.1 * purchaseAmount : 0;

    printf("Discount: $%.2f\n", discount);
    
    return 0;
}

