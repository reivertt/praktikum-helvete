#include<stdio.h>
int main(){
    long long N; 
    scanf("Jumlah Test Data : %lld", &N);
    //if (N <= 1000000000000000 && N >= 0){
        if ((N % 5) == 0){
            printf("Epsilon");
        } else if ((N % 5) != 0){
            if ((N % 5) == 1){
                printf("Alpha");
            } else if ((N % 5) == 2){
                printf("Beta");
            } else if ((N % 5) == 3){
                printf("Gamma");
            } else if ((N % 5) == 4){
                printf("Theta");
            }
        }
    //}
}