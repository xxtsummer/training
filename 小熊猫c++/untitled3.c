#include <stdio.h>

int main() {
	double num1, num2, result;
	char operation;
	
	// 提示用户输入第一个数字
	printf("请输入第一个数字: ");
	scanf("%lf", &num1);  // 读取double类型的输入
	
	// 提示用户输入第二个数字
	printf("请输入第二个数字: ");
	scanf("%lf", &num2);
	
	// 提示用户选择操作（+ 或 -）
	printf("请输入操作（+ 或 -或/）: ");
	scanf(" %c", &operation);  // 读取一个字符，注意前面的空格以跳过前导空白
	
	// 根据用户输入的操作进行计算
	if (operation == '+') {
		result = num1 + num2;
		printf("结果: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
	} else if (operation == '-') {
		result = num1 - num2;
		printf("结果: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
	} else {
		result=(float)num1/(float)num2;
		printf("结果：%.2lf/%.2lf=%.2lf\n",num1,num2,result);
	}
	
	return 0;
}
