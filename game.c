//jogo da velha simples em C
#include <stdio.h>
#include <stdlib.h>

//protótipo das funções
void desenha_jogo();
void limpa_jogo();
void marca_jogo();
void troca_marca();
void preenche_tabuleiro();
void jogar();
void confere_vitoria();

//tabuleiro, coordenadas, controle e marca
char tabuleiro[3][3];
int l, c, fim_de_jogo = 0;
char marca = 'X';

int main(int argc, char **argv){
    
    preenche_tabuleiro();
    jogar();
    
    return 0;
    }

//preenche o tabuleiro com espaços pelo design
void preenche_tabuleiro(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            tabuleiro[i][j] = ' ';
            }
        }
    }

//exibe o tabuleiro a cada rodada
void desenha_jogo(){
    printf("\n%s", "   1     2     3\n");
    printf("\n%s  %c  %s  %c  %s  %c  %s %s\n", "|", tabuleiro[0][0], "|", tabuleiro[0][1], "|", tabuleiro[0][2], "|", "1");
    printf("----------------------\n");
    printf("\n%s  %c  %s  %c  %s  %c  %s %s\n", "|", tabuleiro[1][0], "|", tabuleiro[1][1], "|", tabuleiro[1][2], "|", "2");
    printf("----------------------\n");
    printf("\n%s  %c  %s  %c  %s  %c  %s %s\n", "|", tabuleiro[2][0], "|", tabuleiro[2][1], "|", tabuleiro[2][2], "|", "3");
    printf("----------------------\n");
    }

//marca no tabuleiro onde o jogador indicar as coordenadas
void marca_jogo(){
    printf("Escolha uma linha: ");
    scanf("%d", &l);
    printf("Escolha uma coluna: ");
    scanf("%d", &c);
    if(tabuleiro[l-1][c-1] == ' '){
    tabuleiro[l-1][c-1] = marca;
    }
    troca_marca();
    limpa_jogo();
    desenha_jogo();
}
    
//limpa a tela com espacos
void limpa_jogo(){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    }

//troca a marca para o outro jogador 
void troca_marca(){
    if(marca == 'X'){
        marca = 'O';
    }else if(marca == 'O'){
        marca = 'X';
    }
    }

//inicia o jogo
void jogar(){
    desenha_jogo();
    while(fim_de_jogo == 0){
       marca_jogo();
       confere_vitoria();
        }
    }

//confere a cada rodada para exibir o resultado
void confere_vitoria(){
    if(tabuleiro[0][0] == 'X' && tabuleiro[0][1] == 'X' && tabuleiro[0][2] == 'X'){
        printf( "X venceu!\n");
        fim_de_jogo = 1; 
    }else if(tabuleiro[1][0] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[1][2] == 'X'){
        fim_de_jogo = 1;
        printf("X venceu!\n");
    }else if(tabuleiro[2][0] == 'X' && tabuleiro[2][1] == 'X' && tabuleiro[2][2] == 'X'){
        fim_de_jogo = 1;
        printf("X venceu!\n");
    }else if(tabuleiro[0][0] == 'X' && tabuleiro[1][0] == 'X' && tabuleiro[2][0] == 'X'){
        fim_de_jogo = 1;
        printf("X venceu!\n");
    }else if(tabuleiro[0][1] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][1] == 'X'){
        fim_de_jogo = 1;
        printf("X venceu!\n");
    }else if(tabuleiro[0][2] == 'X' && tabuleiro[1][2] == 'X' && tabuleiro[2][2] == 'X'){
        fim_de_jogo = 1;
        printf("X venceu!\n");
    }else if(tabuleiro[0][0] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][2] == 'X'){
        fim_de_jogo = 1;
        printf("X venceu!\n");
    }else if(tabuleiro[0][2] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][0] == 'X'){
        fim_de_jogo = 1;
        printf("X venceu!\n");
    }else if(tabuleiro[0][0] == 'O' && tabuleiro[0][1] == 'O' && tabuleiro[0][2] == 'O'){
        fim_de_jogo = 1;
        printf("O venceu!\n"); 
    }else if(tabuleiro[1][0] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[1][2] == 'O'){
        fim_de_jogo = 1;
        printf("O venceu!\n");
    }else if(tabuleiro[2][0] == 'O' && tabuleiro[2][1] == 'O' && tabuleiro[2][2] == 'O'){
        fim_de_jogo = 1;
        printf("O venceu!\n");
    }else if(tabuleiro[0][0] == 'O' && tabuleiro[1][0] == 'O' && tabuleiro[2][0] == 'O'){
        fim_de_jogo = 1;
        printf("O venceu!\n");
    }else if(tabuleiro[0][1] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][1] == 'O'){
        fim_de_jogo = 1;
        printf("O venceu!\n");
    }else if(tabuleiro[0][2] == 'O' && tabuleiro[1][2] == 'O' && tabuleiro[2][2] == 'O'){
        fim_de_jogo = 1;
        printf("O venceu!\n");
    }else if(tabuleiro[0][0] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][2] == 'O'){
        fim_de_jogo = 1;
        printf("O venceu!\n");
    }else if(tabuleiro[0][2] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][0] == 'O'){
        fim_de_jogo = 1;
        printf("O venceu!\n");
    }else if(
            tabuleiro[0][0] != ' ' && tabuleiro[0][1] != ' ' && tabuleiro[0][2] != ' ' &&
            tabuleiro[1][0] != ' ' && tabuleiro[1][1] != ' ' && tabuleiro[1][2] != ' ' &&
            tabuleiro[2][0] != ' ' && tabuleiro[2][1] != ' ' && tabuleiro[2][2] != ' ' &&
            fim_de_jogo == 0
            ){
        fim_de_jogo = 1;
        printf("Velha!\n");
    }  
}
