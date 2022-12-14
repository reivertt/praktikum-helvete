#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char inpud[50];
    int N;
    long long sus = 0; 
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
    // while (token != NULL){
        // printf("%s ", token);
        scanf("%s", &inpud);
        char *token = strtok(inpud, "."); //PL
        char *name = strtok(NULL, ".");
        char *stat = strtok(NULL, ".");
        int aa = atoi(stat);
        char *hp = strtok(NULL, ".");
        int bb = atoi(hp);

        if (aa % 5 == 0) {
            printf("%s %d\n", name, bb);
            sus += bb;
        }
    }
    printf("TOTAL SCORE: %lld", sus);
    return 0;
}
//PL.BUFFA.243.2550