#include <stdio.h>

void main() {
	/*int a = 101;
	int *b = &a;
	int **c = &b;
	printf("a的内容:%d\nb的内容:%d\nb指向的内容:%d\nb的地址:%d\nc的内容:%d\nc指向的内容:%d\nc的地址:%d\n", a, b, *b, &b, c, *c, &c);
	*/

	/*int a, b, *pa = &a, *pb = &b;
	scanf("%d", pa);
	scanf("%d", pb);
	if (*pa < *pb) {
		*pb = *pa + *pb;
		*pa = *pb - *pa;
		*pb = *pb - *pa;
	}
	printf("%d\n%d", a, b);*/

	/*int a, b, *pa = &a, *pb = &b;
	void swap2(int *a, int *b);
	scanf("%d%d", &*pa, &*pb);
	swap2(pa, pb);
	printf("%d\n%d", *pa, *pb);*/

	//指向函数的指针(*p)()
// 	int n = 8;
// 	float a[] = {1, 36, -18, 8.67 ,3.1415, 0, 77.0, -3};
// 	float max(float a[], int m);
// 	float (*p)();
// 	p = max;
// 	float result = (*p)(a, n);
// 	printf("%f", result);

// 	int a[5] = {2,77,8,5,-3};
// 	void printArray(int a[], int n);
// 	printArray(a, 5);

	char c[] = "computer";
	int n = 3;
// 	void charPointer(char c[], int n);
// 	charPointer(c, n);
	char *p = c;
	if (strlen(c) >= n) {
		p += n - 1;
	}
	for (int i = 0; i <= strlen(c) - n;i++) {
		printf("%c\n", *(p+i));
	}
}

//只改变形参
void swap1(int *a, int *b) {
	int *temp = NULL;
	temp = a;
	a = b;
	b = temp;
}

void swap2(int *a, int *b) {
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

float max(float a[], int n) {
	if (n < 0) {
		return;
	}
	float temp = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > temp) {
			temp = a[i];
		}
	}
	return temp;
}

void printArray(int a[], int n) {
	int *p = a;
	for (int i = 0; i < n; i++){
		printf("%d\n", *(p + i));
	}
	putchar('\n');
	for (int i = 0; i < n; i++) {
		printf("%d\n", *(a + i));
	}
}

void charPointer(char c[], int n) {
	char *p = c;
	if (strlen(c) >= n) {
		p += n - 1;
	}
	for (; p != '\0'; p++) {
		printf(*p);
	}
	
}