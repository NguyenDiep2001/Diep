#include<stdio.h>
#include<math.h>


void tinh_tong(int a,int b){
	int c;
	c =a+b;
	printf("tong cua hai so la : %d\n",c);
}
void tinh_hieu(int a,int b){
	int x;
	x=a-b;
	printf("hieu cua hai so la : %d\n",x);
}
void tinh_tich(int a,int b){
	int z;
	z=a*b;
	printf("thuong cua hai so la : %d\n",z);
}
void tinh_thuong(int a,int b){
	int v;
	v=a/b;
	printf("thuong cua hai so la : %d\n",v);
}




int main(){
	int a,b;
	printf("nhap a:\n");
	scanf("%d",&a);
	printf("nhap b:\n");
	scanf("%d",&b);
	tinh_tong(a,b);
	tinh_hieu(a,b);
	tinh_tich(a,b);
	tinh_thuong(a,b);
	
	return 0;
}
