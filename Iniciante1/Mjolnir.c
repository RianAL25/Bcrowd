#include <stdio.h>
#include <string.h>
 
int main() {
 
    int c,n;
    scanf("%d",&c);
    char nome[6],saida[c];

    for(int i=0; i<c; i++){
        scanf("%s",nome);
        scanf("%d",&n);
        if(strcmp("Thor",nome)==0){
            saida[i]='Y';
            continue;
        }
        saida[i]='N';
    }

    for(int i=0; i<c; i++){
        printf("%c\n",saida[i]);
    }
 
    return 0;
}