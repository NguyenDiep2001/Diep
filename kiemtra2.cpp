#include<stdio.h>

int main(){
	int a[20];
	for(int i=0;i<10;i++){
		printf("Nhap vao phan tu:\n",i);
		scanf("%d",&a[i]);
		}
	printf("Reverse array:\n");

	for(int i=9;i>=0;i--){
		printf("%3d",a[i]);
	}
	return 0;
}
