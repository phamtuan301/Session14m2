#include <stdio.h>
#include <string.h>
int main() {
    char str[100];  
    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);  
    printf("Chuoi ban vua nhap la: %s\n", str);
    printf("Do dai chuoi ban nhap la: %d\n", strlen(str));   
    return 0;
}
