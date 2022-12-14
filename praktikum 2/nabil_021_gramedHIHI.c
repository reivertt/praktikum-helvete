#include<stdio.h>
#include<math.h>
int main(){
    long long N, T, i; 
    scanf("%lld", &N);
    while (N--) {
        scanf("%lld", &T);
        int ree[10];
        for (i = 0; i < 10; i++){
            ree[i] = 'A';
            ree[i] += (T / (long long)pow(26,i)) % 26;   
            // printf("%d ", ree[i]); 
            printf("%c", ree[i]); 
        }
        printf("\n"); 
    }
}
        // int ree[10] = {65, 65, 65, 65, 65, 65, 65, 65, 65, 65};
        // 26 676 17576 456976 11881376 308915776
        // if (T < 26) ree[0] += T;
        // else if (T < 676) {
        //     ree[1] += (T / 26); ree[0] += (T % 26);
        // } else if (T < 17576) {
        //     ree[2] += (T / 676); ree[1] += ((T / 676) / 26); ree[0] += (T % 26);
        // }
        // printf("%c%c%c%c%c%c%c%c%c%c\n", ree[0], ree[1], ree[2], ree[3], ree[4], ree[5], ree[6], ree[7], ree[8], ree[9]);