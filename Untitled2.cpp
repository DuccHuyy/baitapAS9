#include<stdio.h>
int tinhtong(int n){
    if(n == 0){
    return 0;
    }else{
    return n%10 +tinhtong(n/10);
    }
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tong cac chu so n: %d", tinhtong(n));
}
