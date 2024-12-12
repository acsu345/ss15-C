#include <stdio.h>
#include <string.h>
 
int main(){
	char text[]="Hello my email is phuchb24@gmail.com";
	int size = strlen(text);
	int countAlpha=0;
	int countNumber=0; 
	for (int i = 0 ; i< size ; i++){
		if (text[i]>='a'&&text[i]<='z'||text[i]>='A'&&text[i]<= 'Z'){
			countAlpha++; 
		}
		if (text[i]>='0'&&text[i]<='9'){
			countNumber++; 
		} 
	}
	int countKiTuDacBiet= 0;
	countKiTuDacBiet = size - countAlpha - countNumber; 
	printf("So ky tu la chu cai la :%d\n",countAlpha);
	printf("So ky tu la chu so la: %d\n", countNumber); 
	printf("So ky tu dac biet la: %d\n", countKiTuDacBiet); 
	return 0; 
} 
