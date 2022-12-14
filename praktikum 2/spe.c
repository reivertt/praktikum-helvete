//ambil huruf unik dari input
#include<stdio.h>
#include<string.h>


int main(){
    char reee[100];
    scanf("%s", &reee);
    for (int i = 0; i < strlen(reee); i++) {
        int a = reee[i];
        if (a == 120) printf("6");
        else if (a == 119) printf("2");
        else if (a == 103) printf("8");
        else if (a == 104 || a == 114) printf("3");
        else if (a == 102 || a == 114) printf("4");
        else if (a == 102 || a == 105) printf("5");
        else if (a == 111 || a == 110) printf("1");
        else if (a == 105 || a == 110) printf("9");
        else if (a == 115 || a == 118) printf("7");
    }
}


/*
two             w 119
six             x 120
eight           g 103
three           h 104 r 114
four            f 102 r 114
five            f 102 i 105
one             o 111 n 110
nine            i 105 n 110
ten             t 116 n 110
seven           s 115 v 118

*/