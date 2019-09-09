#include "stdio.h"
#include "string.h"
#include "ctype.h"

int main() {

	printf("\nProgram Start.....\n\n");	
	
	char userInput[64];
	double num = 0;
	char temp;
	int index = 0;
	size_t length;
	int flag = 0;
	int periodCount = 0;
	
	while( num == 0 ) {
	
		periodCount = 0;
		flag = 0;
		num = 0;
		length = 0;
		
		printf("Please enter a number 0 to 101:");		
		fgets(userInput, 63, stdin);
		
		length = strlen(userInput);
		length--;
		
		for(index = 0; index < length; ++index) {
			if(userInput[index] == '.') {
				periodCount++;
			} else if( !isdigit(userInput[index]) ) {
				flag = 1;
				break;
			}
		}
		
		if(flag == 1 || periodCount > 1) {
			printf("Invalid input\n");
			continue;
		}
		
		if( sscanf(userInput, "%lf", &num) != 1) {
			printf("Invalid sscanf()\n");
			continue;
		}
				
		if( num < 0 || num > 101) {
			printf("Invalid range\n");
			continue;
		}
		
		printf("Number OK:%f\n",num);
	}
		
	printf("\nProgram Quit.....\n");
	
	return 0;
}