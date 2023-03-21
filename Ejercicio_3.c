#include <stdio.h>
#include <math.h>
 
int main()
{
    int i;
    int inicio,final;
    long int factorial;

    factorial = 1;
 
    printf("Ingrese el iniio del rango\n");
    scanf("%d",&inicio);
    printf("Ingrese el final delrango\n");
    scanf("%d",&final);
    
    if (inicio>=0&&final>=0&&final>=inicio)
    {
        printf("No\tSquare\tCube\tSquare Root\t\tFactorial\n");
        
        for(i=inicio;i<=final;i++)
        {
            printf("%3d \t %4d \t %4d \t %3.2f ",i,(i*i),(i*i*i),sqrt((double)i));

            for (int j = 1; j <= i; ++j)
            {
                factorial = factorial * j;
            }
            printf("\t %20ld \n", factorial);
            factorial = 1;
        }
    }
    else
        printf("\nINVALIDO\n");
     
    return 0;
}
