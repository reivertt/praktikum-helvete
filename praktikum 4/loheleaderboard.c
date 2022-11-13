#include<stdio.h>

typedef struct ledbord{
    char aidi[100], uname[100];
    int win, tie, lose, total; 
} lb;

void sorting(lb *w, int q){
    lb temp;
    for (int i = 0; i < q - 1; i++){
        for (int j = 0; j < q - 1 - i; j++){
            if (w[j].total < w[j+1].total){
                temp = w[j];
                w[j] = w[j+1];
                w[j+1] = temp;
            }
        }
    }
}

int main(){
    int N;
    scanf("%d", &N);
    lb plb[N];
    for (int i = 0; i < N; i++){
        scanf("%s %s %d %d %d", plb[i].aidi, plb[i].uname, &plb[i].win, &plb[i].tie, &plb[i].lose);
        plb[i].total = plb[i].win*30 + plb[i].tie*10 - plb[i].lose*20;
    }
    
    sorting(plb,N);

    for (int j = 0; j < N; j++){
        printf("%s %s %d %d %d %d\n", plb[j].aidi, plb[j].uname, plb[j].win, plb[j].tie, plb[j].lose, plb[j].total);
    }
    return 0;
}