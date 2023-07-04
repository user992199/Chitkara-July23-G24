#include<stdio.h>
#define p1 "Jaskirat"
#define p2 "Tushar"
#define greet(p1, p2) \
	printf(“Hello “, #p1 “ and “, #p2 “\n”)
int main(){
	greet("Jas);
	return 0;
}