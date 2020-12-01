#include <stdio.h>

int main(){

int n;
int nmaior = 0;
int nmenor = 2147483647;

printf("Digite 10 números:\n");

for(int i = 0; i < 10; i++){
    scanf("%d", & n);

    if(n > nmaior){
        nmaior = n;
    }
    if(n < nmenor){
        nmenor = n;
    }

}
    printf("O maior número é:%d\nO menor número é:%d\n", nmaior, nmenor);

    return 0;
}