#include <stdio.h>

int main (){

    int cavalo = 1;
    int bispo = 1;
    int espaco;
    int rainha;

    printf ("\n***DESAFIO XADREZ***\n");
    printf("mov = movimento.\n");

    while (cavalo <= 5)
    {
        printf("%d mov cavalo -> !\n", cavalo);

        cavalo++;
    }
    
   for (bispo = 0; bispo <= 4; bispo++)
   {
     printf("%d mov bispo ↑, -> !\n", bispo + 1);
   }

   for (rainha = 1; rainha <=8; rainha++)
   {
        printf("%d mov rainha <- !\n", rainha);
   }
    
    return 0;
}