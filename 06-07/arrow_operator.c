#include<stdio.h>
typedef struct strudent{
	int rn;
	float score;
	struct student * friend;

} stu;
int main(){
	stu st1, st2;
	stu * stptr = &st1;
	stptr -> rn = 15;
	stptr -> score = 34;
	printf("%d %d\n", st1.rn, stptr -> rn);
	printf("%f %f\n", st1.score, stptr -> score);
	stptr -> friend = &st2;
	st2.rn = 17;
	printf("%d\n", st2.rn);
	printf("%d %d\n", &st2, stptr -> friend);
	return 0;
} 