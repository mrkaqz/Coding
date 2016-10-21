#include <stdio.h>
#include <string.h>

main () {
	
	char big[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
	char small[] = "abcdefghijklmnopqrstuvwxyz ";
	char text[80]; 
	int i,j,check,err=0;
	
	printf("Please enter any word: ");
	gets(text);
	
	for (i=0;i<strlen(text);i++){
		
		check=0;
		
		for(j=0;j<strlen(small);j++){
			if(text[i]==small[j]){
				check=1;
				}
			if(text[i]==big[j]){
				check=1;
				}
		}
		if (check==0){
			err++;
		}
	}
		
	if(err<=0){
	
	//covert to uppercase
	printf("\nConvert to Uppercase: ");
	
	for (i=0;i<=strlen(text);i++){
		for (j=0;j<=strlen(small);j++){
			if(text[i]==small[j]){
				text[i]=big[j];
			}
		}
		printf("%c",text[i]);
	}
	
	}else{
		printf("\nError, please enter only A-Z,a-z\n");
	}
}
