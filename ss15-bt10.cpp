#include <stdio.h>
#include <string.h>
 
int main(){
	char str[50]="hello world";
	int count=0;
	int length=strlen(str); 
	char word[50]; 
	int a=0; 
	int number[50]={0}; 
	word[a]=str[0] ; 
	for(int i=1;i<length;i++){
		int flag=-1; 
		for(int j=0;j<=a;j++){
			if(word[j]==str[i]){
				flag=1; 
				break; 
			} 
		} 
		if(flag!=1){
				a++; 
				word[a]=str[i];
			} 
	} 
	for (int i = 0; i < length; i++) {
        for (int j = 0; j <= a; j++) {
            if (str[i] == word[j]) {
                number[j]++;
                break;
            }
        }
    }
    for (int i = 0; i <= a; i++) {
        printf("ki tu '%c' xuat hien %d lan\n", word[i], number[i]);
    }
	return 0; 
} 
