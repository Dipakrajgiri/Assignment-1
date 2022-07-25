#include <stdio.h>

int main()
{
    int a;
    int arr[] = {5, 6, 7, 8, 9};
    printf("enter a number");
    scanf("%d", &a);
    for (int i = 0; i < 5; i++)
    {

        if (arr[i] == a)
        {
            printf("Number found \n");
            return 0;
        }
    }

    printf("not found \n");

    return 0;
}