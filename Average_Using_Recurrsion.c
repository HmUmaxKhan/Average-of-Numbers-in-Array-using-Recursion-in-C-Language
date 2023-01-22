#include <stdio.h>

double average(int arr[], int size)//Function which is to be called
{
    if (size == 1)
    {
        return (double)arr[0];//Base Case
    }
    else
    {
        return (arr[size - 1] + average(arr, size - 1) * (size - 1)) / size;//Average of numbers
    }
}

int main(void)
{
    int Length;
    printf("Enter Array1 Length:\n");
//Taking input of length of array
    scanf("%d", &Length);

    int arr[Length];
    int num;
    printf("Enter the numbers:\n");
//Using for loop to take input of integers from the user
    for (int i = 0; i < Length; i++)
    {
        scanf("%d", &num);
        arr[i] = num;
    }

    int size = Length;
//Calling a function
    double result = average(arr, size);
    printf("The average of the elements in the array is %f\n", result);
    return 0;
}