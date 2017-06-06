#include <stdio.h>

#define MaxSize 100

//线性表顺序存储类型
typedef struct {
	int data[MaxSize];
	int length;
}List;


void main() {
	/*int a = 101;
	int *b = &a;
	int **c = &b;
	printf("a的内容:%d\nb的内容:%d\nb指向的内容:%d\nb的地址:%d\nc的内容:%d\nc指向的内容:%d\nc的地址:%d\n", a, b, *b, &b, c, *c, &c);
	*/
	int a, b, *pa = &a, *pb = &b;
	scanf("%d", pa);
	scanf("%d", pb);
	if (*pa < *pb) {
		*pb = *pa + *pb;
		*pa = *pb - *pa;
		*pb = *pb - *pa;
	}
	printf("%d\n%d", a, b);
}