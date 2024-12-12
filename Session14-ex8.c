#include <stdio.h>
int main() {
    char chuoi[100];  
    printf("Moi ban nhap chuoi: ");
    fgets(chuoi, 100, stdin);  
    int i = 0;
    while (chuoi[i] != '\0') {
        if (i == 0 || chuoi[i-1] == ' ') {
            if (chuoi[i] >= 'a' && chuoi[i] <= 'z') {
                chuoi[i] = chuoi[i] - 32;  
            }
        }
        i++;
    }
    printf("Chuoi sau khi in hoa ki tu dau cac tu la: %s", chuoi);
    return 0;
}
