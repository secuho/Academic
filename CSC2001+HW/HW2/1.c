#include <stdio.h>

void draw(int i);

int main() {

	for (int i=1; i<=4; i++)
		draw (i);

	for (int i=3; i>=1; i--)
		draw (i);

}


void draw(int i) {

	for (int j=1; j<=4-i; j++)
		printf(" ");
	
	if (i==1)
		printf("*");
	else {
		printf("*");
		for (int k=1; k<=(2*i-3); k++)
			printf(" ");
		printf("*");
	}

	for (int p=1; p<=4-i; p++)
		printf(" ");
	
	printf("\n");

return;
}
