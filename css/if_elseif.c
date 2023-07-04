#include <stdio.h>
#include <conio.h>
main()
{
    int a;
    printf("Enter no : ");
    scanf("%d", &a);

    if (a == 1)
    {
        printf("One");
    }
    else if (a == 2)
    {
        printf("Two");
    }
    else if (a == 3)
    {
        printf("Three");
    }
    else
    {
        printf("Invalid no");
    }
}