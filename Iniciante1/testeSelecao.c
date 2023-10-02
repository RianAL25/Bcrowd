#include <stdio.h>
 
int main() {
 
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int x=c+d, y=a+b, z=a%2;

    if(b>c && d>a){
        if(x>y){
            if(c>0 && d>0){
                if(z==0){
                    printf("Valores aceitos\n");
                }else{
                    printf("Valores nao aceitos\n");
                }
            }else{
                printf("Valores nao aceitos\n");
            }
        }else{
            printf("Valores nao aceitos\n");
        }
    }else{
        printf("Valores nao aceitos\n");
    }
 
    return 0;
}