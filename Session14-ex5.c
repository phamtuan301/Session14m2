#include <stdio.h>
#include <string.h>
int main() {
    char chuoi[100];  
    int count = 0;  
    int word = 0;  
    printf("Moi ban nhap chuoi: ");
    fgets(chuoi, 100, stdin); 
    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] != ' ') {
            if (word == 0) {
                count++;  
                word = 1;   
            }
        } else {
            word = 0;
        }
    }
    printf("So tu co trong chuoi la: %d\n", count);
    return 0;
}
