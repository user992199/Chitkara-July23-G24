#include<stdio.h>
typedef struct student{
	int rn;
	float s;
}stu;
void sort_arc_to_score(stu sa[], int n){
	// bubble sort
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-i-1; j++){
			if(sa[j].s < sa[j+1].s){
				stu temp = sa[j];
				sa[j] = sa[j+1];
				sa[j+1] = temp;
			}
		}
	}
}
void print_ranks(stu sa[], int n){
	for(int i = 0; i < n; i++){
		printf("Rank %d: %d == %f\n", i+1, sa[i].rn, sa[i].s);
	}
}
int main(){
	stu s_arr[5];
	int n = sizeof(s_arr)/sizeof(s_arr[0]);
	for(int i = 0; i < n; i++){
		s_arr[i].rn = i+1;
	}
	s_arr[0].s = 10.5;
	s_arr[1].s = 13;
	s_arr[2].s = 8.5;
	s_arr[3].s = 8;
	s_arr[4].s = 9.5;
	sort_arc_to_score(s_arr, n);
	print_ranks(s_arr, n);
	return 0;
}