#include<stdio.h>

int main(){
	int a[10];
	scanf("%d %d %d %d %d %d %d %d %d %d",&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&a[10]);
	
	int hight=0;
	scanf("%d",&hight);
	hight=hight+30;
	int x=0;
	for(int i=1;i<=10;i++){
		//TODO
		int b;
		b=a[i];
		if (b<=hight)
			x=x+1;
	}
	printf("%d",x);
	

	return 0;
}
