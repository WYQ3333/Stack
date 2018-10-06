#include"stack.h"
void test()
{
	Stack s;
	int size = 0;
	StackInit(&s);
	StackPush(&s, 1);//入栈
	StackPush(&s, 2);
	StackPush(&s, 3);
	StackPush(&s, 4);
	StackPush(&s, 5);
	StackPrint(&s);
	printf("\n");
	StackPop(&s);
	printf("栈顶元素为：%d \n", StackTop(&s));
	printf("栈中元素个数为：%d \n",StackSize(&s));
	StackIsEmpty(&s);
	StackPrint(&s);
}

int main()
{
	test();
	system("pause");
	return 0;
}