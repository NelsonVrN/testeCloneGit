#include <stdlib.h>
#include <stdio.h>

int main(){
    int idade;
    printf("Digite a idade do usuario");
    scanf("%i",&idade);
    idade -= 1;
    printf("idade do usuario menos 1:%i ",idade);
    idade += 1;
    printf("idade do usuario mais 1:%i",idade);


    return 0;
}
