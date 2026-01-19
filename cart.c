#include <stdio.h>
#include <string.h>

int main() 
{
    char item[50];
    float price, subtotal, discount, gst, total;
    int quantity;
    char currency = '$';

    printf("Enter item name: ");
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = '\0';

    printf("Enter price per item: ");
    scanf("%f", &price);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    subtotal = price * quantity;
    discount = subtotal * 0.10; 
    subtotal -= discount;
    gst = subtotal * 0.18;
    total = subtotal + gst;

    printf("\n------ BILL ------\n");
    printf("Item       : %s\n", item);
    printf("Quantity   : %d\n", quantity);
    printf("Discount   : $%.2f\n", discount);
    printf("GST (18%%)  : $%.2f\n", gst);
    printf("------------------\n");
    printf("TOTAL      : $%.2f\n", total);

    return 0;
}

