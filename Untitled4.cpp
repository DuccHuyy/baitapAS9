#include<stdio.h>
#include<math.h>
int chuvi(int a,int b,int c){
	return a +b +c;
}
int dientich(int a,int b,int c){
	float p = chuvi(a,b,c)/2.0;
	return sqrt(p*(p-a)*(p-b)*(p-c));
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
        printf("Chu vi:%d\n",chuvi(a,b,c));
		printf("Dien tich:%d",dientich(a,b,c));
}else{
	printf("Day khong phai 3 canh tam giac");
    }
    return 0;
}

