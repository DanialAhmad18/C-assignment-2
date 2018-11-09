//Danial Ahmad
//BSCS-8B
//CMS : 249912


#include <stdio.h>

int factorial(int num) //Defining function to calculate factorial
{
    int a;
    int factorial = 1;
    for(a = 1; a <= num ; a++)
    {
        factorial = factorial * a; //Formula for the factorial
    }
    return factorial; //returing the value
}

int c(int n , int k) //Defining function to calculate combinations
{
    int a = factorial(n);
    int b = factorial(k);
    int c = factorial(n-k);

    return a/(b*c); //Calculating the combination and returning the value
}

int main()
{
    int b, rows = 0;
    int n, k = 0;
    printf("Enter the number of rows you want : ");
    scanf_s("%d",&rows);
    for(n = 0; n < rows; n++) //For first triangle involving combinations
    {
        for(b = 1; b <= rows-n;b++)
        {
            printf("  ");
        }
        for(k = 0; k <= n; k++)
        {
            printf("c(%d,%d) ",n,k);
        }
        printf("\n");
    }
    for(n = 0; n < rows; n++) //For second triangle
    {
        for(b = 1; b <= rows-n;b++)
        {
            printf(" ");
        }
        for(k = 0; k <= n; k++)
        {
            printf("%d ",c(n, k));
        }
        printf("\n");
    }
    getch();
    return 0;
}
