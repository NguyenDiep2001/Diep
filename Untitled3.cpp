#include<stdio.h>
#include<string.h>
//tim chuoi s2 trong chuoi s1

	
	

int main(){
	char s1[20],s2[20];
	printf("nhap chuoi s1:\n");
	scanf("%s",s1);
	printf("nhap chuoi s2:\n");
	scanf("%s",s2);
	printf("chuoi s1 sau khi nhap la:%s\n",s1);
	printf("chuoi s2 sau khi nhap la:%s\n",s2);
	if (strstr(s1,s2) != NULL){
	printf("chuoi s1 chua chuoi s2");
	}else{
		printf("chuoi s1 khong chua chuoi s2");
	}
}
