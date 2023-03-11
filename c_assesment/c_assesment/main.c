//
//  main.c
//  c_assesment
//
//  Created by apple on 11/03/23.
//

#include <stdio.h>

int main()
{
    int choice, quantity, total_bill = 0, more;
    
    do
    {
        printf("\n\n\t\t BURGER KING ");
        printf("\n\tMENU:\n1. BURGER - 200\n2. PIZZA - 350\n3. FRENCH FRIES - 150\n4. COKE - 60\n");
        
        // Take input for food item choice
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        // Take input for food item quantity
        printf("\nEnter quantity: ");
        scanf("%d", &quantity);
        
        // Calculate the total bill for this item
        switch(choice)
        {
            case 1:
                total_bill += 200 * quantity;
                break;
            case 2:
                total_bill += 350 * quantity;
                break;
            case 3:
                total_bill += 150 * quantity;
                break;
            case 4:
                total_bill += 60 * quantity;
                break;
            default:
                printf("Invalid choice.\n");
        }
        
        // Ask the user if they want to select more items
        printf("\n Do you want to select more items? (1 for yes, 0 for no): ");
        scanf("%d", &more);
        
    } while(more);
    
    // Display the final bill
    printf("\n TOTAL BILL: %d\n", total_bill);
    
}

