#include <stdio.h>
#include <string.h>
int main(){
	char chuoi[]={'h','i','h','i','h','i','h','i','\0'};
	for (int i= strlen(chuoi);i >= 0;i--){
		printf("%c ", chuoi[i]);
	}
	return 0;
}