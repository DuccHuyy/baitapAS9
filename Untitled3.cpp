#include <stdio.h>
int chuvi(int a,int b,int c){
	return a + b + c;
}
int main(){
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	printf("Nhap c=");
	scanf("%d",&c);
	if(a+b>c && a+c>b && b+c>a){
		printf("Day la tam giac co chu vi:%d \n",chuvi(a,b,c));
	}else{
		printf("Day khong phai 3 canh tam giac");
	}
	return 0;
}
