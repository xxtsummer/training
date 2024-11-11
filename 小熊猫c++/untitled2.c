#include<stdio.h>                      
int main()                             
{                                      
	int L,M;//L道路长度M代表区域数目    
	int i,initial,end,l=0,nb=0;       
	scanf("%d%d",&L,&M);                  
	int road[L+1]; //代表数轴的长度上的每一个节点                       
	for(i=0;i<=L;i++)                     
		road[i]=0;        //0表示节点上有树木                 
	for(i=0;i<M;i++){                     
		scanf("%d%d",&initial,&end);          
		for(l=initial;l<=end;l++)         
			road[l]=1;     //1表示该节点的树被砍伐了。                   
	}                                     
	for(i=0;i<L+1;i++){                 
		if(road[i]==0)                     
			nb++;  //计算有树木的节点的数量                           
	}                                  
	printf("%d",nb);                      
	return 0;                            
}
