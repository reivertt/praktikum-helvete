#include<stdio.h>
#include<math.h>

typedef unsigned long long ull;

ull modurexp(ull a, ull b, ull c, ull d){
    ull hsl = 1;
    if (c > 1) a = modurexp(a, b, c-1, d);
    while (b){
        if (b & 1) hsl = (a * hsl) % d;
        a = (a * a)%d;
        b >>= 1;
    }
    return hsl;
}


int main(){
    int X, Y, Z, N;
    scanf("%d %d %d %d", &X, &Y, &Z, &N);
    if (X == 0) printf("0");
    else if (X == 1 || Y == 0) printf("1");
    else if (Y == 1 || Z == 0) printf("%d", X % N + 1);
    else printf("%llu", modurexp(X,Y,Z,N) + 1); 
    return 0;
}