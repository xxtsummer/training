#include<stdio.h>

int main(){
	struct doctor {
		char name[20];
		int level;
		int friends_num;
		int service_date;

	};
	struct doctor b = { "°ßìµÊ¢ÏÄ",75,20,2020 };
	printf(" % s,% d,% d,% d", b.name,b.level,b.friends_num,b.service_date );

	return 0;
}