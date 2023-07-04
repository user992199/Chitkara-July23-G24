#include<stdio.h>
// syntax
// #define macro_name 3.14
#define pi 3.14 + 1
#define print_hello printf("hello\n")
#define print_x(x) printf("%f\n", x)
#define square_x(x) x*x
int main(){
	// 24 = 25; // this will give error
	int r = 7;
	// float pi = 3.14 + 1;
	float ans = 2 * pi * r;
	printf("%f\n", ans);
	float area = pi * r * r;
	print_x(area);
	print_hello;
	float sq_r = square_x(r);
	print_x(sq_r);
	return 0;
}