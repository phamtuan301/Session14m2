#include <stdio.h>
#include <string.h>
int main(){
	int countChar = 0;
	int countNumber = 0;
	int countSpecial = 0;
	char chuoi[100];
	printf ("Nhap chuoi:");
	fgets(chuoi, 100, stdin);
	for (int i = 0; i < strlen(chuoi); i++){
		if ((chuoi[i]>'A' && chuoi[i]<'Z') || (chuoi[i]>'a' && chuoi[i]<'z')){
			countChar++;	
		}
		else if (chuoi[i]>='0' && chuoi[i]<='9'){
			countNumber++;
		}
		else{
			countSpecial++;
		}
	}
	printf("Mang co %d chu cai\n", countChar);
	printf("Mang co %d chu so\n", countNumber);
	printf("Mang co %d ki tu dac biet", countSpecial);
	return 0;
}