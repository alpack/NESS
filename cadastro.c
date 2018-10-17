#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ficha
{
    char *descricao[1023];
    char *nome[30];
    int xp;

} Ficha;

int main(void)
{
    FILE *arduino; // arquivo com lista de pessoas que sabem arduino
    FILE *mod3d;   // pessoas que sabem modelagem 3d
    FILE *ps;      // pessoas que sabem photoshop

    Ficha *ficha;
    ficha = (Ficha *)malloc(sizeof(Ficha));

    int check;      // variavel que vai ser usada ao longo do código apenas para checar as repostas
    int quantidade; // Armazenara a quantidade de conhecimento do usuario
    char nome[24];  // Váriavel para armazenar o nome dos usuarios
    char descricao[1023];

    // programa vai tentar procurar os arquivos, se não existir irá criar novos
    arduino = fopen("arduino.txt", "a");
    ps = fopen("photoshop.txt", "a");
    mod3d = fopen("modelagem.txt", "a");

    // input de dados
    printf("Digite o seu nome: ");
    strcat("%s", nome);
    printf("Digite uma descricao: ");
    strcat("%s", descricao);

    strncpy(nome, *ficha->nome, 24);
    strncpy(descricao, *ficha->descricao, 1023);

    // input arduino
    printf("Voce sabe arduino?(digite 1 para sim ou 0 para nao): ");
    scanf("%d", &check);

    if (check == 1)
    {
        printf("Numa escala de 0 a 5 o quanto você sabe: ");
        scanf("%d", &quantidade);
        fprintf(arduino, "%s;%d", nome, quantidade);
    }
    else if (check != 1 && check != 0)
    {
        printf("RESPOSTA INVÁLIDA\n");
    }

    // input photoshop
    printf("Voce sabe photoshop?(digite 1 para sim ou 0 para nao): ");
    scanf("%d", &check);
    if (check == 1)
    {
        printf("Numa escala de 0 a 5 o quanto você sabe: ");
        scanf("%d", &quantidade);
        fprintf(ps, "%s;%d", nome, quantidade);
    }
    else if (check != 1 && check != 0)
    {
        printf("RESPOSTA INVÁLIDA\n");
    }

    // input modelagem 3D
    printf("Voce sabe modelagem 3D?(digite 1 para sim ou 0 para nao): ");
    scanf("%d", &check);
    if (check == 1)
    {
        printf("Numa escala de 0 a 5 o quanto você sabe: ");
        scanf("%d", &quantidade);
        fprintf(mod3d, "%s;%d", nome, quantidade);
    }
    else if (check != 1 && check != 0)
    {
        printf("RESPOSTA INVÁLIDA\n");
    }

    return 0;
}
