#include<stdio.h>
#include<string.h>
int main() {
	char arr1[] = "abc";
	char arr2[] = {'a','b','c','c++','\0'};
	printf("%s", arr2);
	int x = strlen(arr2);
	printf("\n%d", x);
	return 0;
}