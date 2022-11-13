#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct ip {
    char adr[200], ip[200];
};

int main(){
    long long a, b;
    scanf("%lld %lld", &a, &b);
    struct ip lel[a];
    for (int i = 0; i < a; i++){
        scanf("%s %s", lel[i].adr, lel[i].ip);
    } 

    char comp[100];
    while(b--){
        bool justice = false;
        scanf("%s", comp);
        for (int i = 0; i < a; i++){
            if (strcmp(comp, lel[i].adr) == 0) {
                printf("%s Berhasil Di Blokir.\n", lel[i].ip);
                justice = true;
            }
        }
        if (justice == false) printf("Alamat Tidak Ditemukan...\n");
    }
}