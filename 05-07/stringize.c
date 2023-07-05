#include<stdio.h>
#define make_string(x) #x
int main(){
	int a = 10 + 5;
	// printf(hello);
	printf(make_string(a));
	return 0;
}