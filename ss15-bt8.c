#include <stdio.h>
#include <string.h>
/*
	Khai bao va gan gia tri cho mot chuoi bat ki
	Viet hoa chu cai dau trong chuoi  
*/
int main(){
	char text[]="xin chao tat ca moi nguoi";
	int size = strlen(text);
	for(int i = 0 ; i < size ; i++){
		if (i==0 || text[i-1]==' '){
			if(text[i]>= 'a' && text[i]<='z'){
				text[i]= toupper(text[i]); 
			} 
		} 
	}
	printf("%s", text);
	
	return 0;  
} 
