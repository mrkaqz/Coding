#include <stdio.h>

main () {
	
	int num[5];
	int x,y,i,max,min;
	
	
	//Input 5 number
	printf("Please enter 5 number for sorting\n");
	for (i=0;i<5;i++) {
		scanf("%d",&num[i]);	
	}
	
	//sorting
	for (x=0;x<4;x++){
		for (y=x+1;y<5
		
		;y++){
		if(num[x]>num[y]){
			max = num[x];
			min = num[y];
		}else{
			max = num[y];
			min = num[x];
		}
		num[x] = min;
		num[y] = max;
		}
	}
	
	


	
	
	//Output
	
	printf("Sorted:");
	for (i=0;i<5;i++){
		printf("%d ",num[i]);
	}
	
}
