#include <stdio.h>

void caesar (char cipher[], char shift);

int main() {

char tekst[]="XFO OXFA LK MBXOI EXOYLO U QEFP FP KLQ AOFII";
char shift=23;

printf("%s \n\n", tekst);
caesar(tekst,shift);
//printf("%s \n\n", tekst);

return 0;
}

void caesar (char cipher[], char shift) {

    int i = 0;
    char ch;

     for(i=0;cipher[i] != '\0';i++) {

        ch = cipher[i];

       if (cipher[i] >= 'A' && cipher[i] <= 'Z') {
            ch = ch - shift;

            if(ch < 'A'){
                ch = ch + 'Z' - 'A' + 1;
            }

            cipher[i] = ch;
       }

    }

    printf("\n\nWiadomosc: %s \n\n", cipher);
}
