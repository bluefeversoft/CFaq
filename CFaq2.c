#include "stdio.h"

int main() {
	int i,j; // for looping

	int OneDArray[12] = {
		1,2,3,4,5,6,7,8,9,10,11,12
	};	
	printf("\nOneDArray: \n");
	for(i = 0; i < 12; ++i) {
		printf("OneDArray[i:%d]=%4d\n",i,OneDArray[i]);
	}	
	
	int TwoDArray[4][3] = {
		{ 1,2,3 },  // TwoDArray[0][2]==3
		{ 4,5,6 },  // TwoDArray[1][0]==4
		{ 7,8,9 },  // TwoDArray[2][1]==1
		{ 10,11,12 }// TwoDArray[3][2]==12
	};
	
	// TwoDArray[i][j]
	
	for(i = 0; i < 4; ++i) {
		for(j = 0; j < 3; ++j) {
			printf("TwoDArray[i:%d][j:%d]=%4d\n",i,j,TwoDArray[i][j]);
		}
	}
	
	return 0;
}




