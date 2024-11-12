//#include <stdio.h>
//#include <time.h>
//
//int main() {
//	time_t start, end;
//	start = clock();
//
//	for (int x = 2; x <= 1000000; x++) {
//		int flag = 1;
//		for (int i = 2; i * i <= x + 1; i++) {
//			if (x % i == 0) {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag != 0) {
//			// 质数
//			printf("%d\n", x);
//		}
//	}
//
//	end = clock(); // 获取结束时间
//	printf("用了 %d 毫秒\n", (int)(end - start));
//return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define MAX_NUM 1000000
//int main() {
//    // 标记数组，初始都设为素数
//    char* is_prime = (char*)malloc((MAX_NUM + 1) * sizeof(char));
//    for (int i = 0; i <= MAX_NUM; i++) {
//        is_prime[i] = 1;
//    }
//    // 0和1不是素数
//    is_prime[0] = is_prime[1] = 0;
//    clock_t start_time = clock();
//    for (int i = 2; i * i <= MAX_NUM; i++) {
//        if (is_prime[i]) {
//            // 筛掉i的倍数
//            for (int j = i * i; j <= MAX_NUM; j += i) {
//                is_prime[j] = 0;
//            }
//        }
//    }
//    clock_t end_time = clock();
//    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
//    printf("计算时间：%f秒\n", elapsed_time);
//    // 可以在这里添加输出素数的代码，例如：
//    // for (int i = 0; i <= MAX_NUM; i++) {
//    //     if (is_prime[i]) {
//    //         printf("%d ", i);
//    //     }
//    // }
//    free(is_prime);
//    return 0;
//}



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM 1000000

int main() {
    // 用于标记是否为素数，初始假设全是素数（除0和1）
    char *is_prime = (char *)malloc((MAX_NUM + 1) * sizeof(char));
    for (int i = 0; i <= MAX_NUM; i++) {
        is_prime[i] = 1;
    }
    is_prime[0] = is_prime[1] = 0;

    clock_t start_time = clock();

    // 埃拉托斯特尼筛法核心部分
    for (int i = 2; i * i <= MAX_NUM; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX_NUM; j += i) {
                is_prime[j] = 0;
            }
        }
    }

 

    

    // 打印素数
    printf("0到100万内的素数：\n");
    for (int i = 0; i <= MAX_NUM; i++) {
        if (is_prime[i]) {
            printf("%d\n", i);
        }
    }
    
    clock_t end_time = clock();
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("计算时间：%f秒\n", elapsed_time);
    return 0;
}