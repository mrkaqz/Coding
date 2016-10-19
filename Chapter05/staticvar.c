#include <stdio.h>

printVar (){
	
	auto int a = 0;
	static int b = 0;
	
	a++;b++;
	
	printf ("a = %d , b = %d\n",a,b);
}

main () {
	int i;
	for (i=0;i<5;i++){
		printVar();
	}
}
