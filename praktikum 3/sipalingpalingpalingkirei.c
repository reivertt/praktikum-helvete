#include<stdio.h>
int josh(int n, int p) {
    p++;
    int hsl;
    if (n > 1) hsl = (josh(n-1, p) + p - 1) % n + 1;
    else hsl = 1;
    return hsl;
}

int main(){
    int dayz, shep;
    scanf("%d", &dayz);
    while (dayz--){
        int helper = 0;
        scanf("%d", &shep);
        printf("%d\n", josh(shep, helper));
    }
    return 0;
}

