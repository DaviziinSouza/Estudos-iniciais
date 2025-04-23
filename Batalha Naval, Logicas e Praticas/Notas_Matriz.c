#include <stdio.h>

int main () {

    int index;

    char * nomesalunos [3][3] = {
        {"Aluno 0", "Pt: 30", "Mat: 40"},
        {"Aluno 1", "Pt: 60", "Mat: 70"},
        ("Aluno 2", "Pt: 80", "Mat: 90")
        
    };

    printf("Informe o aluno qeu deseja ver as notas.\n");
    printf("Para aluno 0, digite 0\n");
    printf("Para aluno 1, digite 1\n");
    printf("Para aluno 2, digite 2\n");
    scanf("%d", &index);
    printf("As notas do: %s, são: %s, %s\n", nomesalunos[index][0], nomesalunos[index][1], nomesalunos[index][2]);




    return 0;
    
}