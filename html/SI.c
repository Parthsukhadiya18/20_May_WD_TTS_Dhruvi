#include <stdio.h>
#include <conio.h>
main()
{
    int principle, time, rate, interest;
    printf("Enter the principle");
    scanf("%d", &principle);

    printf("Enter the time");
    scanf("%d", &time);

    printf("Enter the rate");
    scanf("%d", &rate);

    interest = principle * rate * time / 100;
    printf("Simple Interest is : %d", interest);

    getch();
}