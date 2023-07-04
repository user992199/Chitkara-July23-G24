#include<stdio.h>
// #define pi 3.14
#ifndef pi
	#error Pi not declared
#endif
#define print(x) printf("%f\n", x)
int main(){
	print(pi);
	return 0;
}