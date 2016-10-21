#include <stdio.h>
#include <string.h>

main () {
	char data[10] = "1234567890";
	
	strcpy(data,"0987654321");
	
	printf("Data is %s", data);
}
