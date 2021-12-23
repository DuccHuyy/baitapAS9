#include <stdio.h>

int BCNN(int a,int b){
	if(a==0 || b==0 ){
		return a + b;
	}
	while(a != b){
		if(a >b){
			a -= b;
		}else{
			b -= a;
		}
	}
	return a || b;
}
int main(){
	int a,b;
	printf("Nhap a=");
    scanf("%d",&a);
    printf("Nhap b=");
    scanf("%d",&b);
    int s = a*b / BCNN(a ,b);
    printf("Boi chung nho nhat la: %d",s);
}

