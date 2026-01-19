#include <stdio.h>
#include <string.h>

int main() 
{


    char item[50];
    float price;
    int quantity;
    char currency = '$';
    float total;

    printf("What item would you like to buy? : ");
    fgets(item, sizeof(item), stdin);

    item[strcspn(item, "\n")] = '\0';

    printf("How much is the item each? : ");
    scanf("%f", &price);

    printf("How many would you like to buy? : ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\n----- BILL -----\n");
    printf("Item      : %s\n", item);
    printf("Quantity  : %d\n", quantity);
    printf("Total     : %c%.2f\n", currency, total);

    return 0;
}

