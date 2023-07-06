#include<stdio.h>
typedef struct strudent{
	int rn;
	float score;
} stu;
int main(){
	int a;
	printf("%d\n", &a);
	stu st1;
	printf("%d\n", &st1);
	stu * stptr = &st1, *stptr2 = &st1;
	printf("%d\n", stptr);
	printf("%d\n", stptr2);
	return 0;
} 