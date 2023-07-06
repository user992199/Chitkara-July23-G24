// #include<stdio.h>
// struct student{
// 	int roll_number;
// 	float score;
// 	struct course{
// 		char group_name;
// 		int course_code;
// 	};
// 	struct course c1, c2;
// }st1, st2;
// int main(){
// 	struct course c3;
// 	printf("%d\n", c3.course_code);
// 	st1.c1.course_code = 15;
// 	printf("%d\n", st1.c1.course_code);
// 	return 0;
// }
#include<stdio.h>
#include<string.h>
typedef struct course{
	char course_name[20];
	int course_code;
}cse;
struct student{
	int roll_number;
	float score;
	cse c1, c2;
}st1, st2;
int main(){
	struct course c3;
	printf("%d\n", c3.course_code);
	// strcpy
	// strcpy(target_string, copy_string);
	strcpy(st1.c1.course_name, "OOPs");
	st1.c1.course_code = 15;
	printf("%d\n", st1.c1.course_code);
	printf("%s\n", st1.c1.course_name);
	return 0;
}