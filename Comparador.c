#include <stdio.h>

int main (void)
{
    int a, b;
    
    printf("digite número: ");
    scanf("%i" ,&a);
    
    printf("digite número: ");
    scanf("%i" ,&b);
    
   
    if (a>b) {
    printf ("O maior é: %i", a);
        
    } else if(b>a)
    printf ("Esse é maior: %i ", b);
   
    else {
    printf ("Números iguais");}
   
}
