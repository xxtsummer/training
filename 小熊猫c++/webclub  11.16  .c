#include<stdio.h>



int main(){
	int c[5];
	for(int i=0;i<5;i++){
		//TODO
	
		printf("%d\n",c[i]);
	}
	int b=0;
	for(int j=0;j<4;j++){
		//TODO
		for(int i=0;i<4-j;i++){
			//TODO
			
			if (c[i]>c[i+1]){
				b=c[i+1];
			    c[i+1]=c[i];
			    c[i]=b;
			}
		}	
		
	}
	for(int i=0;i<5;i++){
		printf("   %d\n",c[i]);
//TODO
	}
	
	
	
	return 0;
}
