#include <stdio.h>

#define MaxSize 100

//���Ա�˳��洢����
typedef struct {
	int data[MaxSize];
	int length;
}List;

List *MakeEmpty() {
	List *pList;
	pList = (List *)malloc(sizeof(List));
	pList->length = -1;
	return pList;
}