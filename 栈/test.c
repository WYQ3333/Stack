#include"stack.h"
void test()
{
	Stack s;
	int size = 0;
	StackInit(&s);
	StackPush(&s, 1);//��ջ
	StackPush(&s, 2);
	StackPush(&s, 3);
	StackPush(&s, 4);
	StackPush(&s, 5);
	StackPrint(&s);
	printf("\n");
	StackPop(&s);
	printf("ջ��Ԫ��Ϊ��%d \n", StackTop(&s));
	printf("ջ��Ԫ�ظ���Ϊ��%d \n",StackSize(&s));
	StackIsEmpty(&s);
	StackPrint(&s);
}

int main()
{
	test();
	system("pause");
	return 0;
}