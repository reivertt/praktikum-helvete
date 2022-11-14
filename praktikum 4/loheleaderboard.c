#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool lol = false;
int L = 2;

typedef struct ledbord{
    char aidi[100], uname[100];
    int win, tie, lose, total; 
} lb;

void sortings(lb *w, int q){
    lb temp;
    // while(L--){
        for (int i = 0; i < q - 1; i++){
            for (int j = 0; j < q - 1 - i; j++){
                if (w[j].total < w[j+1].total){
                    temp = w[j];
                    w[j] = w[j+1];
                    w[j+1] = temp;
                }
                // if (lol == true && (w[j].total == w[j+1].total) && strcmp(w[j].uname, w[j+1].uname) < 0){
                else if ((w[j].total == w[j+1].total) && (strcmp(w[j].uname, w[j+1].uname) > 0)){
                    temp = w[j];
                    w[j] = w[j+1];
                    w[j+1] = temp;
                }
            }
        }
        lol = true;
    // }
}

// void sortingc(lb *f, int k){
//     lb sem;
//     for (int j = 0; j < k - 1; j++){
//         for (int i = 0; i < k - 1; i++){
//             if (f[i].total == f[i+1].total){
//                 for (int y = 0; y < k - 1 - i; y++){
//                     if (f[i].uname[y] == f[i+1].uname[y]) continue;
//                     else if (f[i].uname[y] < f[i+1].uname[y]) break;
//                     else if (f[i].uname[y] > f[i+1].uname[y]){
//                         sem = f[i];                
//                         f[i] = f[i+1];
//                         f[i+1] = sem;
//                     }
//                 }
//             }
//         }
//     }
// }

int main(){
    int N;
    scanf("%d", &N);
    lb plb[N];
    for (int i = 0; i < N; i++){
        scanf("%s %s %d %d %d", plb[i].aidi, plb[i].uname, &plb[i].win, &plb[i].tie, &plb[i].lose);
        plb[i].total = plb[i].win*30 + plb[i].tie*10 - plb[i].lose*20;
    }
    
    sortings(plb,N);

    for (int j = 0; j < N; j++){
        printf("%s %s %d %d %d %d\n", plb[j].aidi, plb[j].uname, plb[j].win, plb[j].tie, plb[j].lose, plb[j].total);
    }
    return 0;
}