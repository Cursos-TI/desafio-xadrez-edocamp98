#include <stdio.h>
// Recursivas
    // Movimento do Bispo
    void bishopmove(){
        printf("O bispo se moverá 5 casas diagonais: \n");
                for (int i = 1; i <= 5; i++){
                    printf("Movimento diagonal %d: ", i);
                    printf("Cima, ");
                        for (int j = 1; j <=5; j++){
                            printf("Direita\n");

                        }
                        
                }
            }
    // Movimento da Torre
    void towermove(){
        printf("A torre se moverá 5 casas para a direita: \n");
        int t = 1;
        while (t <= 5){
            printf("Direita\n");
            t++;

        }
    
    }

    //Movimento da Rainha
    void queenmove(){
        printf("A rainha se moverá 8 casas para esquerda: \n");
        int q = 1;
        while (q <= 8){
            printf("Esquerda\n");
            q++;
        }
    }
    //Movimento do Cavalo
    void horsemove(){
        int c = 1;
        printf("O cavalo se moverá em L uma vez: \n");
        while (c < 3){
            printf("Cima\n");
            c++;
        } if (c == 3){
            printf("Direita");

        }
    }

int main() {
    // Variáveis declaradas
    int peca;

    // Switch pra entrada de qual movimento executar
    printf("Escolha qual peça deseja mover:\n");
    printf("[ 1 ] Bispo\n");
    printf("[ 2 ] Torre\n");
    printf("[ 3 ] Rainha\n");
    printf("[ 4 ] Cavalo\n");
    scanf("%d", &peca);

    switch (peca)
    {
    case 1:
        bishopmove();
        break;

    case 2:
        towermove();
        break;

   case 3:
        queenmove();
        break;
   case 4:
        horsemove();
        
        
    default:
        break;
    }
    
        
        
return 0;

}



