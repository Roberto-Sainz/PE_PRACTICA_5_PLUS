#include <stdio.h>
int checkLeapYear(int year)
{
    if( (year % 400==0)||(year%4==0 && year%100!=0) )
        return 1;
    else
        return 0;
}
 
int main()
{
    int i,n,n2;

    printf("Ingrese el inicio del rango:\n");
    scanf("%d",&n2);
 
    printf("Ingrese el final del rango:\n");
    scanf("%d",&n);
 
    printf("Leap years from %d to %d:\n",n2,n);
    for(i=n2;i<=n;i++)
    {
        if(checkLeapYear(i))
            printf("%d\t",i);
    }     
    return 0;
}
