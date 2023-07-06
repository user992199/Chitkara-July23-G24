// 439 ka laptop monday tak aa jayega
// 527	
#include<stdio.h>
typedef struct student{
	int roll_number;
	float score;
}stu;
int main(){
	stu st1;
	struct student st2;
	printf("%d %d\n", st1.roll_number, st2.roll_number);
	return 0;
}