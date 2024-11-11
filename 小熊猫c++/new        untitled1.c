#include<stdio.h>
#include<math.h>
//void print_1_to_n(int n){}	
int main(){
	int fact(int x){
		if (x==0){
			return 1;
		}
		
		return fact(x-1)*x;
	}
	int a=0;
	scanf_s("%d",&a);
	//printf_s("%d",fact(a));
	int f(int i){
		if(i==1||i==2){
			return 1;
		}
		else
			return f(i-1)+f(i-2);
	}
	printf("%d",f(a));
	return 0;
}
