#include <stdio.h>

int main() {
    int num_alunos = 4; 
    int count = 1;
    float nota, soma = 0.0, media;

    printf("Digite as notas dos %d alunos:\n", num_alunos);

    while (count <= num_alunos) {
        printf("Digite a nota do aluno n�mero %d: ", count);
        scanf("%f", &nota);
       
        soma += nota;
        count++;
    }

    media = soma / num_alunos;

    printf("M�dia da turma = %.2f\n", media);

    return 0;
}
