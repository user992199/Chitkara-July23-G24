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
	return 0;
}