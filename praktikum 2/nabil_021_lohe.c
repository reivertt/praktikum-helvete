#include<stdio.h>
#include<string.h>

int main(){
    char inpud[1000]; int a;
    while (scanf("%s", &inpud) != EOF){
        for (int a = strlen(inpud); a >= 0; a--) printf("%c", inpud[a]); printf("\n");
    }
}