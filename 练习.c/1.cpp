#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//




//int main(){
//	int line = 0;
//	while (line< 30000)
//	{
//		line++;
//		printf("Ð´´úÂë£º%d\n", line);
//}
//	if (line = 3000)
//		printf("Å£±ÆÁË");
//	return 0;
//}


int Add(int x, int y) {
	int z = 0;
	z = x + y;
	return z;
}
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	
//
//
//
//	return 0;
//}


//

//

int main() {
	int a = 0,b=3,c=5;

	int d = (a = b + 2, c = a - 4, b = c + 2);
	printf("%d\n%d\n", d,a);
	return 0;
}



