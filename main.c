#include<stdio.h>
#include<string.h>

char* reversePrefix(char* s, int k) {

   char aux;
   int j = 1;

   for(int i=0;i<k/2;i++) {
    aux = s[i];
    s[i] = s[k-j];
    s[k-j] = aux;
    j++;
   }
    return s;
}


int main(int argc, char const *argv[]) {
    
    char string[50];
    int k = 4; 

    printf("Digite a string que quer inverter: \n");
    scanf("%49[^\n]", string);

    reversePrefix(string,k);

    printf("%s", string);

    return 0;
}
