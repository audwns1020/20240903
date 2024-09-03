// ť ����2
#include <stdio.h> // 1/3 ������

#define MAXSIZE 10		// ť�� ũ��

int queue[MAXSIZE];
int front, rear;

void init_queue()
{
	front = rear = 0;
	printf("QUEUE SIZE is %d\n\n", MAXSIZE);
}

void clear_queue()
{
	front = rear;
	printf("	QUEUE's Clear Succeeded\n");
}

int enqueue(int val)
{
	if ((rear + 1) % MAXSIZE == front) {	// ť�� �� á���� Ȯ��
		printf("	QUEUE Overflow.\n");
		return -1;
	}

	queue[rear] = val;				// rear�� ť�� �� ������ ������̹Ƿ� �ٷ� ����
	rear = ++rear % MAXSIZE;		// rear�� ���� ��������� ����
	return val;
}

int dequeue()
{
	int i;

	if (front == rear) {		// ť�� ��� �ִ��� Ȯ��
		printf("	QUEUE Underflow.\n");
		return (-1);
	}

	i = queue[front];	// front�� ���� ������
	front = ++front % MAXSIZE;		// front�� ���� ������ ��ҷ�
	return i;
}

void print_queue()		// 2/3 ������
{
	int i;
	printf("\n QUEUE From Front------> To Rear \n");
	for (i = front; i != rear; i = ++i % MAXSIZE)
		printf("%-6d", queue[i]);
	printf("\n\n");
}

void save_queue()
{
	FILE* fp;
	int i;

	fp = fopen("QueueValue.txt", "w");

	fprintf(fp, "%d %d\n", front, rear);
	for (i = front; i != rear; i = ++i % MAXSIZE)
		fprintf(fp, "%d  ", queue[i]);

	fclose(fp);
}

void load_queue()
{
	FILE* fp;
	int i;

	fp = fopen("QueueValue.txt", "r");

	if (fp != NULL) {
		fscanf(fp, "%d %d", &front, &rear);

		for (i = front; i != rear; i = ++i % MAXSIZE)
			fscanf(fp, "%d", &queue[i]);

		fclose(fp);
	}
}

int main()
{
	int i, value, choice;
	bool while_flag = true;

	init_queue();

	load_queue();

	while (while_flag) {
		printf("1. enqueue\n2. dequeue\n3. clear\n: ");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			printf("\nenqueue �� ���� �Է����ּ���: ");
			scanf("%d", &value);
			enqueue(value);
			break;
		case 2:
			i = dequeue();
			printf("\ndequeue �� �� : %d\n", i);
			break;
		case 3:
			clear_queue();
			break;
		default:
			while_flag = false;
			break;
		}
			print_queue();
	}
	save_queue();

	return 0;
}