#include <stdio.h>
#include "array_operations.h"

void user_size(int *size)
{
    printf("Enter size of array: ");
    scanf("%d", size);
    printf("\n");
}

void array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
}

void print_array(int arr[], int size)
{
    if(size==0)    printf("Array is empty.");
    for (int i = 0; i < size; i++)    printf("%d ", arr[i]);
    printf("\n");
}

void descending(int arr[], int size)
{
    int des;
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[i - j] < arr[i])
            {
                des = arr[i - j];
                arr[i - j] = arr[i];
                arr[i] = des;
            }
        }
    }
    printf("Array order changed in descending order.\n");
}

void ascending(int arr[], int size)
{
    int asc;
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[i - j] > arr[i])
            {
                asc = arr[i - j];
                arr[i - j] = arr[i];
                arr[i] = asc;
            }
        }
    }
    printf("Array order changed in ascending order.\n");
}

void arrange(int *op, int arr[], int size)
{
    printf("In which way\n1. Ascending\n2. Descending\nEnter option: ");
    scanf("%d", op);
    if (*op == 1)    ascending(arr, size);
    else if (*op == 2)    descending(arr, size);
    else
    {
        printf("Invalid input");
        arrange(op, arr, size);
    }
    printf("\n");
}

void check_prime(int arr[], int size)
{
    int num;
    printf("Prime numbers in array are: ");
    for (int i = 0; i < size; i++)
    {
        num = arr[i];
        int flag = 1;
        if (num < 2)    flag = 0;
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)    printf("%d ", num);
    }
    printf("\n");
}

void reverse(int arr[], int size)
{
    int i = 0;
    int t_size = size;
    int temp;
    while (i < t_size / 2)
    {
        temp = arr[i];
        arr[i] = arr[t_size - 1];
        arr[t_size - 1] = temp;
        i++;
        t_size--;
    }
    printf("Array is reversed.\n");
}

void add_element(int arr[], int *size, int max_size)
{
    if (*size < max_size)
    {
        int add;
        printf("Enter the element : ");
        scanf("%d", &add);
        arr[*size] = add;
        (*size)++;
    }
    else    printf("Array is at maximum size. Cannot add more elements.\n");
}

void sum_array(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)    sum += arr[i];
    printf("Sum of all element in array is %d.", sum);
}

void delete_element(int arr[], int *size, int *del)
{
    printf("Enter element to delete: ");
    scanf("%d", del);
    for (int i = 0; i < *size; i++)
    {
        if (*del == arr[i])
        {
            for (int j = i; j < *size - 1; j++)    arr[j] = arr[j + 1];
            (*size)--;
            i--;
        }
    }
    printf("Delete Successful.");
}

void check_same_element(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        int check = arr[i];
        for (int j = 0; j < size; j++)
        {
            if (check == arr[j])    count++;
        }
        printf("%d is repeated %d times\n", check, count);
    }
}
