#include<stdio.h>
struct student{
	int roll_number;
	float score;
}st4, st5, st_arr[20];
int main(){
	struct student st1, st2;
	// syntax
	// variable_name.member_name;
	st1.roll_number = 10;
	st1.score = 50.5;
	printf("%d  %f\n",st1.roll_number, st1.score);
	struct student st3 = {15, 73.3};
	printf("%d  %f\n",st3.roll_number, st3.score);
	printf("%d  %f\n",st5.roll_number, st5.score);
	return 0;
}