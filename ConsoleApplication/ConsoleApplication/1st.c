#include <stdio.h>

#define MaxSize 100

//���Ա�˳��洢����
typedef struct {
	int data[MaxSize];
	int length;
}List;


void main() {
	/*int a = 101;
	int *b = &a;
	int **c = &b;
	printf("a������:%d\nb������:%d\nbָ�������:%d\nb�ĵ�ַ:%d\nc������:%d\ncָ�������:%d\nc�ĵ�ַ:%d\n", a, b, *b, &b, c, *c, &c);
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