#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    time_t t1;
    int numero_principal,numero_secundario,i;
    srand((unsigned)time(&t1));
    numero_principal=5+rand()%(20+1-5);
    printf("\t\tGenerando %d Numeros\n",numero_principal);

    
    for(i=1;i<=numero_principal;i++){
        numero_secundario=1+rand()%(30+1-1);
        printf("\n%d\t",numero_secundario);
        for(int j=1;j<=numero_secundario;j++){
        
            printf("$");
        }
    }
    return 0;
}
