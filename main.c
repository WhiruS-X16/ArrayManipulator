#include <stdio.h>
#include "array_operations.h"

int main()
{
    int option, size, op, del;
    printf("-------------ArrayManipulator-------------\n\n");
    user_size(&size);

    int arr[size];
    array(arr, size);
    do
    {
        printf("\n\nArray Operations :\n1. Check Prime Number\n2. Reverse Array\n3. Change Array Order\n4. Add Element\n5. Sum of all element in array\n6. Delete Element\n"
               "7. Check Repeated Element\n8. Display\n0. Exit\n");
        printf("Enter Option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            check_prime(arr, size);
            break;
        case 2:
            reverse(arr, size);
            break;
        case 3:
            arrange(&op, arr, size);
            break;
        case 4:
            add_element(arr, &size, MAX_SIZE);
            break;
        case 5:
            sum_array(arr, size);
            break;
        case 6:
            delete_element(arr, &size, &del);
            break;
        case 7:
            check_same_element(arr, size);
            break;
        case 8:
            print_array(arr, size);
            break;
        case 0:
            printf("\n\nThank You.");
            break;
        default:
            printf("\nInvalid option.\nPlease enter a number between 1 and 5.\n");
            break;
        }
    } while (option != 0);
    return 0;
}