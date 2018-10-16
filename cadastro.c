/* AINDA FALTA CHECAR SE TA RODANDO E SE AS COISAS VAO CONTINUAR ASSIM OU MUDAR */

#include <stdio.h>

struct ficha {
    char *nome;
    int xp;
    char *descricao;
};


int main(void) {

    struct ficha FICHA;
    FILE *arduino;  // arquivo com lista de pessoas que sabem arduino
    FILE *mod3d;    // pessoas que sabem modelagem 3d
    FILE *ps;       // pessoas que sabem photoshop


    while (1) {

        // programa vai tentar procurar os arquivos, se não existir irá criar novos
        arduino = fopen("arduino.txt", "a");
        ps = fopen("photoshop.txt", "a");
        mod3d = fopen ("modelagem.txt", "a");

        // input de dados
        printf("Digite o seu nome: ");
        gets(FICHA.nome);
        printf("Digite uma descricao: ");
        gets(FICHA.descricao);

        // input arduino
        int check; // variavel que vai ser usada ao longo do código apenas para checar as repostas
        printf("Voce sabe arduino?(digite 1 para sim ou 0 para nao): ");
        scanf("%d", &check);
        if (check == 1) {
            fprintf(arduino, "User: %s\n", FICHA.nome);
        }else if (check != 1 && check != 0) {
            printf("RESPOSTA INVÁLIDA\n");
            continue;
        }

        // input photoshop
        printf("Voce sabe photoshop?(digite 1 para sim ou 0 para nao): ");
        scanf("%d", &check);
        if (check == 1) {
            fprintf(ps, "User: %s\n", FICHA.nome);
        }else if (check != 1 && check != 0) {
            printf("RESPOSTA INVÁLIDA\n");
            continue;
        }

        // input modelagem 3D
        printf("Voce sabe modelagem 3D?(digite 1 para sim ou 0 para nao): ");
        scanf("%d", &check);
        if (check == 1) {
            fprintf(mod3d, "User: %s\n", FICHA.nome);
        }else if (check != 1 && check != 0) {
            printf("RESPOSTA INVÁLIDA\n");
            continue;
        }

    }

    return 0;
}
