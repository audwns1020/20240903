#include <stdio.h>
#include "CStack.h"

void CStack::push()
{
	int value;

	printf("stack에 넣을 값을 입력해주세요 : ");
	scanf("%d", &value);
	stack_buff[top++] = value;
}

void CStack::pop()
{
	if (top > 0)
		printf("빠져나온값 : %d\n", stack_buff[--top]);
	else
		printf("stack 이 비어있습니다.\n");
}

void CStack::print_stack()
{
	printf("\n<stack 내부>\n");
	for (int i = 0; i < top; i++) {
		printf("| %d ", stack_buff[i]);
	}
	printf("\n\n");
}

void CStack::save_stack()
{
	FILE* fp;

	fp = fopen("StackValue.txt", "w");

	fprintf(fp, "%d\n", top);
	for (int i = 0; i < top; i++) {
		fprintf(fp, "%d  ", stack_buff[i]);
	}

	fclose(fp);
}

void CStack::load_stack()
{
	FILE* fp;

	fp = fopen("StackValue.txt", "r");

	if (fp != NULL) {
		fscanf(fp, "%d", &top);
		for (int i = 0; i < top; i++) {
			fscanf(fp, "%d", &stack_buff[i]);
		}

		fclose(fp);
	}
}