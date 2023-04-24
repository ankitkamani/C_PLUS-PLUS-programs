#include<stdio.h>
int main()
{
    int f,z;
    int ans;
    printf("Enter The Value Of F And Z:");
    scanf("%d%d",&f,&z);
    ans = f+z; // Addition
    printf("\n\tAddition Of F And Z is - %d",ans);
    ans = f-z; // Substraction
    printf("\n\n\tSubstraction Of F And Z is - %d",ans);
    ans = f*z; // Multiplication
    printf("\n\n\tMultiplication Of F And Z is - %d",ans);
    ans = f/z; // Division
    printf("\n\n\tDivisiopn Of F And Z is - %d",ans);
    ans = f*z; // Modulo
    printf("\n\n\tModulo Of F And Z is - %d",ans);
    ans = f++; // Incriment Of F
    printf("\n\n\tIncriment Of F is - %d",f);
    ans = z++; // Incriment Of Z
    printf("\n\n\tIncriment Of Z is - %d",z);
    ans = f--; // Decrement Of F
    printf("\n\n\tDecrement Of F is - %d",f);
    ans = z--; // Decrement Of Z 
    printf("\n\n\tDecrement Of Z is - %d",z);

    
}
