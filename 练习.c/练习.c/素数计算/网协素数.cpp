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
//			// ����
//			printf("%d\n", x);
//		}
//	}
//
//	end = clock(); // ��ȡ����ʱ��
//	printf("���� %d ����\n", (int)(end - start));
//return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define MAX_NUM 1000000
//int main() {
//    // ������飬��ʼ����Ϊ����
//    char* is_prime = (char*)malloc((MAX_NUM + 1) * sizeof(char));
//    for (int i = 0; i <= MAX_NUM; i++) {
//        is_prime[i] = 1;
//    }
//    // 0��1��������
//    is_prime[0] = is_prime[1] = 0;
//    clock_t start_time = clock();
//    for (int i = 2; i * i <= MAX_NUM; i++) {
//        if (is_prime[i]) {
//            // ɸ��i�ı���
//            for (int j = i * i; j <= MAX_NUM; j += i) {
//                is_prime[j] = 0;
//            }
//        }
//    }
//    clock_t end_time = clock();
//    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
//    printf("����ʱ�䣺%f��\n", elapsed_time);
//    // ���������������������Ĵ��룬���磺
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
    // ���ڱ���Ƿ�Ϊ��������ʼ����ȫ����������0��1��
    char *is_prime = (char *)malloc((MAX_NUM + 1) * sizeof(char));
    for (int i = 0; i <= MAX_NUM; i++) {
        is_prime[i] = 1;
    }
    is_prime[0] = is_prime[1] = 0;

    clock_t start_time = clock();

    // ������˹����ɸ�����Ĳ���
    for (int i = 2; i * i <= MAX_NUM; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX_NUM; j += i) {
                is_prime[j] = 0;
            }
        }
    }

 

    

    // ��ӡ����
    printf("0��100���ڵ�������\n");
    for (int i = 0; i <= MAX_NUM; i++) {
        if (is_prime[i]) {
            printf("%d\n", i);
        }
    }
    
    clock_t end_time = clock();
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("����ʱ�䣺%f��\n", elapsed_time);
    return 0;
}