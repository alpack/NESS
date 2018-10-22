#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 1024 //tamanho máximo de string
#define MAX_NAME 121  //tamanho máximo do nome

typedef struct ficha
{
    char *descricao[MAX_SIZE];
    char *nome[MAX_NAME];
    int xp;

} Ficha;

// tentar futuramente mesclar com o menu
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
    char nome[MAX_NAME];  // Váriavel para armazenar o nome dos usuarios
    char descricao[MAX_SIZE];
    char letra;

    // programa vai tentar procurar os arquivos, se não existir irá criar novos
    arduino = fopen("arduino.txt", "a");
    ps = fopen("photoshop.txt", "a");
    mod3d = fopen("modelagem.txt", "a");
    carta = fopen("carta.txt", "a");

    // input de dados
    printf("Digite o seu nome: "); // input de nome
    fflush(stdin);
    fgets(nome, MAX_NAME, stdin);
    int len = strlen(nome); // tirando o \n do final do input
    if (len > 0 && nome[len - 1] == '\n')
        nome[len - 1] = '\0';
    printf("Digite uma descricao: "); // input de uma descrição
    fflush(stdin);
    fgets(descricao, MAX_SIZE, stdin);
    len = strlen(descricao); // tirando o \n do final do input
    if (len > 0 && descricao[len - 1] == '\n')
        descricao[len - 1] = '\0';

    fprintf(carta, "%s;%s\n", nome, descricao);

// ------------------> parte acima futuramente será subtituida pelo menu <----------------------------- //

    // input arduino
    printf("Voce sabe arduino?(digite 1 para sim ou 0 para nao): ");
    scanf("%d", &check);

    if (check == 1)
    {
        printf("Numa escala de 0 a 5 o quanto você sabe: ");
        scanf("%d", &quantidade);
        fprintf(arduino, "Nome: %s ;Nível: %d\n", nome, quantidade); // mudar depois "Nível"
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
        fprintf(ps, "Nome: %s/Nível: %d\n", nome, quantidade); // mudar depois "Nível"
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
        fprintf(mod3d, "Nome: %s/Nível: %d\n", nome, quantidade); // mudar depois "Nível"
    }
    else if (check != 1 && check != 0)
    {
        printf("RESPOSTA INVÁLIDA\n");
    }

    printf("Cadastrado!\n");

    return 0;
}
