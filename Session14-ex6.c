#include <stdio.h>
#include <string.h>
int main() {
    char chuoi[100]; 
    int count = 0;  
    printf("Nhap chuoi: ");
    fgets(chuoi, 100, stdin);  
    for (int i = 0; i < strlen(chuoi); i++) {
        if ((chuoi[i] >= 'A' && chuoi[i] <= 'Z') || (chuoi[i] >= 'a' && chuoi[i] <= 'z')) {
           count++; 
        }
    }
    printf("So ki tu la chu cai trong chuoi la: %d\n", count);
    return 0;
}
