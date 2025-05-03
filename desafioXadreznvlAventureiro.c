#include <stdio.h>

int main (){

    int torre = 1;
    int bispo = 1;
    int espaco;
    int rainha;
    int cavalo = 1;
    
    printf ("\n***DESAFIO XADREZ***\n");
    printf("mov = movimento.\n");

    while (torre <= 5)
    {
        printf("%d mov torre -> !\n", torre);

        torre++;
    }
    
   for (bispo = 0; bispo <= 4; bispo++)
   {
     printf("%d mov bispo ↑, -> !\n", bispo + 1);
   }

   for (rainha = 1; rainha <=8; rainha++)
   {
        printf("%d mov rainha <- !\n", rainha);
   }


   while (cavalo--)
   {
     for (int i = 0; i < 2; i++) {
        printf("mov cavalo ↑ !\n");
     }
        printf("mov cavalo -> !\n");
   }
    
    return 0;
}