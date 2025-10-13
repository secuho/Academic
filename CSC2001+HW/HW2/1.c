#include <stdio.h>

int main(void) {

	int i=0, j=0;

	for (i=1; i<=7; i++) {
		if (1<i<=4) {
			for (j=1; j<=4-i; j++)
				printf(" ");
			printf("*");
			for (j=0; j<2i-1; j++)
				printf(" ");
			printf("*");
			for (j=1; j<=4-i; j++)
				printf(" ");
		} /* else if (i>4) {
			for (j=0; j<5-i
		
		
		} */
	
	
	
	}


return 0;
}
