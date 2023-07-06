#include<stdio.h>
void print(int a){
	printf("%d\n", a);
}
struct student{
	int rn;
	float score;
};
void print_all(struct student st1){
	printf("%d %f\n", st1.rn, st1.score);
}
int main(){
	int b = 13;
	print(b);
	struct student st1;
	st1.rn = 488;
	st1.score = 56.73;
	print_all(st1);
	return 0;
}