#include<stdio.h>
int main() {
	int l, m, u, v, num = 0;
	scanf("%d %d", &l, &m);
	int tree[l + 1];
	for (int i = 0;i <= l;i++) {
		tree[i] = 1;//TODO
	}
	for (int i = 0;i < m;i++) {
		scanf("%d %d", &u, &v);
		for (u;u <= v;u++) {
			tree[u] = 0;//TODO
		}
	}
	for (int i = 0;i <= l;i++) {
		//TODO
		if (tree[i] == 1)//TODO
			num++;
	}
	printf("%d", num);


	return 0;
}