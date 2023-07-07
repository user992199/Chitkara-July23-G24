#include<stdio.h>
typedef struct array{
	int arr[10];
	int n;
}arr;
// void update(int arr[], int n){
// 	for(int i = 0; i < n; i++){
// 		arr[i] += 10;
// 	}
// }
void print_struct(arr a1){
	for(int i = 0; i < a1.n; i++){
		printf("%d ", a1.arr[i]);;
	}printf("\n");
}
void pass_by_value(arr a1){
	for(int i = 0; i < a1.n; i++){
		a1.arr[i] += 10;
	}
	printf("Inside func: ");
	print_struct(a1);
}
int main(){
	// int arr[] = {1, 2, 3, 4, 5};
	// int n = sizeof(arr)/sizeof(arr[0]);
	// update(arr, n);
	// for(int i = 0; i < n; i++){
	// 	printf("%d ", arr[i]);
	// }
	arr a1;
	a1.n = 10;
	for(int i = 0; i < a1.n; i++){
		a1.arr[i] = i+1;
	}
	printf("inside main: ");
	print_struct(a1);
	pass_by_value(a1);
	printf("inside main: ");
	print_struct(a1);
	return 0;
}