#include <stdio.h>
#include <string.h>
int main(){
	char chuoi[100];
	printf("Moi ban nhap chuoi: ");
	fgets(chuoi, 100, stdin);
	int count = 0;
	printf("Nhap ki tu bat ki trong chuoi: ");
	char value = getchar();
	for (int i=0;i < strlen(chuoi);i++){
		if (value == chuoi[i]){
			count++;
		}
	}
	printf("Ki tu %c xuat hien %d lan trong chuoi", value, count);
	return 0;
}