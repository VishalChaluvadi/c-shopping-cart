#include <stdio.h>

int main()
 {
    char item[50];
    float price, subtotal = 0.0, discount, gst, total;
    int quantity;
    int choice;

    while (1)
	 {
        printf("\n===== SHOPPING CART MENU =====\n");
        printf("1. Add Item\n");
        printf("2. View Bill\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
                printf("\nEnter item name: ");
                scanf(" %[^\n]", item);

                printf("Enter price: ");
                scanf("%f", &price);

                printf("Enter quantity: ");
                scanf("%d", &quantity);

                subtotal += price * quantity;
                printf("Item added to cart \n");
                break;

            case 2:
                discount = subtotal * 0.10;
                gst = (subtotal - discount) * 0.18; 
                total = (subtotal - discount) + gst;

                printf("\n-------- BILL --------\n");
                printf("Subtotal   : $%.2f\n", subtotal);
                printf("Discount   : $%.2f\n", discount);
                printf("GST (18%%)  : $%.2f\n", gst);
                printf("----------------------\n");
                printf("TOTAL      : $%.2f\n", total);
                break;

            case 3:
                printf("\nThank you for shopping!\n");
                return 0;

            default:
                printf("\nInvalid choice Try again.\n");
        }
    }
}
