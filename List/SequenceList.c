#include <stdio.h>
#include <string.h>

#define MaxSize 5

typedef int ElemType;
//线性表顺序存储类型
typedef struct {
	ElemType data[MaxSize];
	int length;
}List;

//初始化(建立空的顺序表)
List *MakeEmpty() {
	List *pList;
	pList = (List *)malloc(sizeof(List));
	pList->length = -1;
	return pList;
}

//按值查找
int Find(List *pList, int a) {
	int position = -1;
	for (int i = 0; i <= pList->length; i++){
		if (a == pList->data[i]){
			position = i + 1;
			break;
		}
	}
	return position;
}

//插入
int insert(List *p, int n, int num) {
	if (n <= 0 || n > p->length + 1) {
		printf("非法数字!\n");
		return 0;
	}
	for (int i = p->length - 1; i >= n -1 ; i--) {
		p->data[i + 1] = p->data[i];
	}
	p->data[n-1] = num;
	++p->length;
	return 1;
}

//删除
int delete(List *p, int n) {
	if (n <= 0 || n >= p->length + 1) {
		printf("非法数字!");
		return 0;
	}
	for (int i = n; i < p->length; i++) {
		p->data[i - 1] = p->data[i];
	}
	p->length--;
	return 1;
}

//void main() {
//	List *MakeEmpty();
//	List *pList = MakeEmpty();
//	pList->length = 10;
//	int temp[] = {6, 7, -11, 90, 0};
//	memcpy(pList->data, temp, sizeof(temp));
//// 	for (int i = 0; i < pList->length; i++)
//// 	{
//// 		pList->data[i] = i + 1;
//// 	}
//	//int Find(List *pList, int a);
//	//printf("%d\n", Find(pList, 1));
//// 	int insert(List *p, int n, int num);
//// 	insert(pList, 1, 999);
//	int delete(List *p, int n);
//	delete(pList, 3);
//	for (int i = 0; i < pList->length; i++) {
//		printf("%d,", pList->data[i]);
//		if (i == pList->length - 1) {
//			putchar('\n');
//		}
//	}
//	printf("%d\n", pList->length);
//}