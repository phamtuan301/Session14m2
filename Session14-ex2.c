#include <stdio.h>
#include <string.h>
int main(){
	char chuoi[]={'h','i','h','i','h','i','h','i','\0'};
	for (int i= 0;i < strlen(chuoi);i++){
		printf("%c ", chuoi[i]);
	}
	return 0;
}