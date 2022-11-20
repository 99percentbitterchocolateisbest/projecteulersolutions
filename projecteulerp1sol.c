/*find sum of all the multiples of 3 and 5 below 1000*/
#include <stdio.h>


int main(void){
	unsigned int n=0;

	for(unsigned int i =0; i < 1000; i+= 3){
	n+= i;
	}
	for(unsigned int i =0; i < 1000; i+= 3){
	if(i % 5 != 0){
		n+= i;
		}
	}
	printf("Result is: %u\n",n);
	return 0;
}
