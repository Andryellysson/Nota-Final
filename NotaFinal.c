#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    float trab, aval1, exam, med;
    printf("Digite a nota do trabalho: \n");
    scanf("%f", &trab);
    printf("Digite a nota da primeira avaliacao: \n");
    scanf("%f", &aval1);
    printf("Digite a nota do exame: \n");
    scanf("%f", &exam);

    med = (trab*2 + aval1*3 + exam*5)/10;
    printf("Media: %.2f.\n", med);

    //8.0 ~ 10.0 = A
    if (med >= 8.0 && med <= 10.0){
        printf("Conceito A \n");
    }

    //7.0 ~ 8.0 = B
    if (med >= 7.0 && med < 8.0){
        printf("Conceito B \n");
    }

    //6.0 ~ 7.0 = C
    if (med >= 6.0 && med < 7.0){
        printf("Conceito C \n");
    } 

    //5.0 ~ 6.0 = D
    if (med >= 5.0 && med < 6.0){
        printf("Conceito D \n");
    }

    //0.0 ~ 5.0 = E
    if (med = 0.0 && med < 5.0 ){
        printf("Conceito E \n");
    }
    
    system("pause");

    return 0;
}