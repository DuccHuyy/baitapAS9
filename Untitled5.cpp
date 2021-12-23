#include<stdio.h>

int UCLN(int a,int b){
	if(a==0 || b==0){
		return a + b;
	}
	while(a!=b){
		if(a>b){
			a -= b;
		}else{
			b -= a;
		}
	}
	return a || b;
}
int main(){
	int a , b;
	printf("Nhap a=");
    scanf("%d",&a);
    printf("Nhap b=");
    scanf("%d",&b);
    int ULCN = UCLN(a,b);
    printf("Uoc chung lon nhat la: %d",UCLN(a,b));
}
