#include "stdio.h"
#include "string.h"

int main() {

	printf("\nProgram Start.....\n\n");	
	
	char userInput[64];
	int num = 0;
	char temp;
	size_t length = 0;
	int index = 0;
	int flag = 0;
	while( num == 0 ) {
	
		length = 0;
		flag = 0;
		num = 0;
		
		printf("Please enter a number 1 to 99:");		
		fgets(userInput, 63, stdin);
		length = strlen(userInput);
		
		if( length < 2 || length > 3) {
			printf("Invalid strlen()\n");
			continue;			
		}

		length--;
		
		for(index = 0; index < length; ++index) {
			if(userInput[index] < '0' || userInput[index] > '9') {
				flag = 1;
				break;
			}
		}
		
		if( flag) {
			printf("Invalid character\n");
			continue;			
		}
		
		if( sscanf(userInput, "%d", &num) != 1) {
			printf("Invalid sscanf()\n");
			continue;
		}
				
		if( num < 1 || num > 99) {
			printf("Invalid range\n");
			continue;
		}
		
		printf("Number OK:%d\n",num);
	}
		
	printf("\nProgram Quit.....\n");
	
	return 0;
}