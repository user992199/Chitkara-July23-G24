#include<stdio.h>
#define pi 3.14
// #define print(x) printf("%f\n", x)
#if !defined(pi) && !defined(print)
	#define pi 4.14
	#define print(x) printf("%f\n", x)
#else
	#define pi 3.14
#endif
int main(){
	print(pi);
	return 0;
}