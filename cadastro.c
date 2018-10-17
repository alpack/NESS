#include <stdio.h>
#include <stdlib.h>

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
    FILE *carta; 

    Ficha *ficha;
    ficha = (Ficha *)malloc(sizeof(Ficha));

    int check;      // variavel que vai ser usada ao longo do código apenas para checar as repostas
    int quantidade; // Armazenara a quantidade de conhecimento do usuario
    char nome[24];  // Váriavel para armazenar o nome dos usuarios
    char descricao[1023];
    char letra;
    printf("passei das declarações de variaveis\n");

    // programa vai tentar procurar os arquivos, se não existir irá criar novos
    arduino = fopen("arduino.txt", "a");
    ps = fopen("photoshop.txt", "a");
    mod3d = fopen("modelagem.txt", "a");
    carta = fopen("carta.txt", "a");
    printf("passei dos arquivos\n");

    // input de dados
    printf("Digite o seu nome: ");
    for (int i = 0; i < sizeof(nome); i++)
    {
        scanf("%c", &letra);
        if (letra == '\n')
        {
            break;
        }
        else
        {
            nome[i] = letra;
        }
    }
    printf("Digite uma descricao: ");
    for (int i = 0; i < sizeof(descricao); i++)
    {
        scanf("%c", &letra);
        if (letra == '\n')
        {
            break;
        }
        else
        {
            descricao[i] = letra;
        }
    }

    fprintf(carta, "%s;%s\n", nome, descricao);

    // input arduino
    printf("Voce sabe arduino?(digite 1 para sim ou 0 para nao): ");
    scanf("%d", &check);

    if (check == 1)
    {
        printf("Numa escala de 0 a 5 o quanto você sabe: ");
        scanf("%d", &quantidade);
        fprintf(arduino, "%s;%d\n", nome, quantidade);
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
        fprintf(ps, "%s;%d\n", nome, quantidade);
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
        fprintf(mod3d, "%s;%d\n", nome, quantidade);
    }
    else if (check != 1 && check != 0)
    {
        printf("RESPOSTA INVÁLIDA\n");
    }

    return 0;
}

/* 
for(i = 0; sizeof(array); i++) {
    scanf("%c", &char);
    if(char == '\n') {
        break;
    }
    else{
        array[i] = char;
    }
}*/