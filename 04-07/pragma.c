#include<stdio.h>
#pragma startup f1
#pragma exit f1
#define print printf("This is pragma\n");
void f1(){
	print;
}
void f2(){
	print;
}
int main(){

	printf("THis is main\n");
	return 0;
}