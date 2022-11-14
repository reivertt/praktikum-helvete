#include<stdio.h>
#include<string.h>
#include<stdbool.h>

// struct udama buat data
struct deck{
    int power;
    char name[1000];
};

// untuk menukar belukar desukar tepubar
struct swap{
    int powow;
    char nawa[1000];
};

//kayaknya klo sarapan apa gt enak ya
int main(){
    int N;
    bool bobobo = true;
    char interfeis[100]; //bootleg switch case string ver

    scanf("%d", &N);
    struct deck card[N];
    
    for (int i = 0; i < N; i++){
        scanf("\n%[^\n]%*c", card[i].name);
        scanf("\n%d", &card[i].power);
        // printf("%d loop\n", i+1);
    }

    // printf("next stage\n");

    while(bobobo){
        scanf("%s", &interfeis);
        if(strcmp(interfeis, "SHOW") == 0) {
            for (int i = 0; i < N; i++) 
                printf("%s %d\n", card[i].name, card[i].power);
        }
        else if (strcmp(interfeis, "SWAP") == 0) {
            // printf("SWAPPING TIME BOIS\n");
            int p, q;
            scanf("%d %d", &p, &q);
            if (p < 0 || p > N-1 || q < 0 || q > N-1) printf("[Out of Bounds]\n");
            else if (p == q) printf("[Swap on Same Card]\n");
            else {
                struct deck swaap;
                swaap = card[p];
                card[p] = card[q];
                card[q] = swaap; 
            }
        }
        else if (strcmp(interfeis, "END") == 0) bobobo = false;
    }
}


