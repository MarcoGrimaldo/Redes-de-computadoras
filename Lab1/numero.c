#include<stdio.h>
#include <stdlib.h>

int verificaN(int au);
unsigned char verificaC(unsigned char bu);
    
int main()
{
    int a;
    unsigned char b,c,op;
    
    system("clear");
    printf("\nHola Nidia! :)\n\n");
    
    printf("\nIngrese Numero\n>");
    scanf("%d",&a);
    
    if(verificaN(a) == 1)
    {
        printf("\nEl numero es par\n");
    }
    else
    {
        printf("\nEl numero es impar\n");
    }
        
    
    printf("\nIngrese Letra\n>");
    scanf("%s",&b);
    
    c = verificaC(b);
    
    printf("\n\nLa letra %c tiene %d bits jeje",b,c);
    
    printf("\n\nDesea hacerlo de nuevo?\n");
    printf("[0] NO\n[1] SI\n>");
    scanf("%d",&op);
    
    if(op)
        main();
    else
        exit(0);
}

int verificaN(int au)
{
    if(au & 1)
        return 0;
    else
        return 1;
}

unsigned char verificaC(unsigned char bu)
{
    unsigned char i = 0;
    unsigned char cont = 0;
    
    for(i = 128 ; i >= 1 ; i = i >> 1)
    {
        if(bu & i)
            cont++;
    }
    
    return cont;
}
