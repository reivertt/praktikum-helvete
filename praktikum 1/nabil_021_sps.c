#include<stdio.h>
int main(){
    int M, N;
    scanf("%d %d", &M, &N);
    if (M >= 1 && M <= 1000000000 && N >= 2 && N <= 100000){
        if ((M % (N + 1)) == 0){
            printf("abeng");
        } else {
            printf("bahresi");
        }
    } 
}