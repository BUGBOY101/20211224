// 数据结构复习1-线性表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#define	_CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
typedef int elemtype;
typedef struct Lnode {
	elemtype data;
	struct Lnode* next;
}Lnode, * Linklist;
void InitList(Linklist& L) {
	L = (Lnode*)malloc(sizeof(Lnode));
	L->next = NULL;
}
void CreateList(Linklist& L) {

}
void InsertList(Linklist& L, int i, elemtype e) {
	int j = 0;
	Linklist p = L->next;
	while (p && j < i - 1) {
		p = p->next;
		j++;
	}
	Linklist q;
	q->data = e;
	q->next = p->next;
	p->next = q;
}
void DeleteList(Linklist& L, int i, elemtype& e) {
	int j = 0;
	Linklist p, q;
	p = L->next;
	while (p && j < i - 1) {
		p = p->next;
	}
	q = p->next;
	e = q->data;
	p->next = q->next;
	free(q);
}

//#include<iostream>
//using namespace std;
//#define MAX 10000
//#define INIT 10
//typedef int elemtype;
//typedef struct {
//	elemtype* elem;
//	int length;
//	int listsize;
//}Sqlist;
//void InitSqlist(Sqlist& L, int n) {
//	//L.elem = new elemtype;
//	L.elem = (elemtype*)malloc(MAX * sizeof(int));
//	if (!L.elem) {
//		cout << "内存分配失败" << endl;
//		return;
//	}
//	L.length = n;
//	L.listsize = MAX;
//	for (int i = 0; i < n; i++) {
//		cin >> L.elem[i];
//	}
//}
//void InsertSqlist(Sqlist& L, int i, elemtype e) {
//	if (i <1 || i > L.length + 1) {
//		cout << "插入位置不合理" << endl;
//		return;
//	}
//	if (L.length >= L.listsize) {
//		L.elem = (elemtype*)realloc(L.elem, (MAX + INIT) * sizeof(elemtype));
//		if (!L.elem) {
//			cout << "内存分配失败" << endl;
//			return;
//		}
//		L.listsize += INIT;
//	}
//	int j;
//	for (j = L.length - 1; j >= i - 1; j--)
//		L.elem[j + 1] = L.elem[j];
//	L.elem[i - 1] = e;
//	L.length++;
//}
//void DeleteSqlist(Sqlist& L, int i, elemtype& e) {
//	if (i < 1 || i > L.length) {
//		cout << "删除位置不合理" << endl;
//		return;
//	}
//	e = L.elem[i - 1];
//	int j;
//	for (j = i; j <= L.length - 1; j++) {
//		L.elem[j - 1] = L.elem[j];
//	}
//	L.length--;
//}
//void print(Sqlist L) {
//	for (int i = 0; i < L.length; i++)
//		cout << L.elem[i] << " ";
//	cout << endl;
//}
//int main() {
//	Sqlist L;
//	int n, i;
//	cin >> n;
//	InitSqlist(L, n);
//	InsertSqlist(L, 2, 0);
//	print(L);
//	DeleteSqlist(L, 2, i);
//	print(L);
//	cout << i << endl;
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
