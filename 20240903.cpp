// �Լ�2 ����1
//#include <stdio.h>
//
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//
//int main()
//{
//	printf("����� �����?\n");
//	printf("%c%c%c%c%c\n", getA(), getP(), getP(), getL(), getE());
//
//	return 0;
//}

// �Լ�2 ����2
//#include <stdio.h>
//
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//char getT() { return 'T'; }
//
//int main()
//{	
//	printf("������ �����?\n");
//	printf("%c%c%c%c\n", getL(), getE(), getF(), getT());
//
//	return 0;
//}

// �Լ�3
//#include <stdio.h>
//
//void makeHamburg(int count)
//{
//	printf("�ܹ��� %d�� ���Խ��ϴ�.\n", count);
//}
//
//int main()
//{
//	int ham_count;
//	printf("�ܹ��� �� �� �ֹ��Ͻðڽ��ϱ�?\n");
//	scanf("%d", &ham_count);
//	makeHamburg(ham_count);
//
//	return 0;
//}

//#include <stdio.h>
//
//void print_Number();
//void print_Number2(int num);
//void print_Number4_charB(int num, char b);
//void print_characterX(char x);
//
//int main()
//{
//	print_Number();
//	print_Number2(2);
//	print_Number4_charB(4, 'b');
//	print_characterX('x');
//
//	return 0;
//}
//
//void print_Number()
//{
//	printf("Number\n");
//}
//
//void print_Number2(int num)
//{
//	printf("Number : %d\n", num);
//}
//
//void print_Number4_charB(int num, char b)
//{
//	printf("Number : %d, character : %c\n", num, b);
//}
//
//void print_characterX(char x)
//{
//	printf("character : %c\n", x);
//}

//#include <stdio.h>
//
//char rightType(char type)
//{
//	if (type != 'A' && type != 'B') {
//		printf("�ֹ��� �� ���� �ܹ����Դϴ�.\n");
//		return 'C';
//	}
//	return type;
//}
//
//void makeHamburg(char type, int count)
//{
//	if (type == 'A') {
//		printf("AŸ�� �ܹ��� ");
//	}
//	else {
//		printf("BŸ�� �ܹ��� ");
//	}
//	printf("%d�� ���Խ��ϴ�.\n", count);
//}
//
//int main()
//{
//	char ham_type;
//	int ham_count;
//
//	printf("���Ÿ�� �ܹ��Ÿ� ");
//	printf("�ֹ��Ͻðڽ��ϱ�?(AorB)\n");
//	scanf("%c", &ham_type);
//
//	if (rightType(ham_type) == 'C') {
//		return 0;
//	}
//	printf("�ܹ��� �� �� �ֹ��Ͻðڽ��ϱ�?\n");
//	scanf("%d", &ham_count);
//	makeHamburg(ham_type, ham_count);
//
//	return 0;
//}

//#include <stdio.h>
//
//int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}
//
//int main()
//{
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	printf("��� : %d\n", data1);
//	
//	return 0;
//}

// �Լ�3 ����1
//#include <stdio.h>
//
//int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}
//
//int sub_number(int num1, int num2)
//{
//	int retVal = num1 - num2;
//	return retVal;
//}
//
//int mul_number(int num1, int num2)
//{
//	int retVal = num1 * num2;
//	return retVal;
//}
//
//int divi_number(int num1, int num2)
//{
//	int retVal = num1 / num2;
//	return retVal;
//}
//
//int main()
//{
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	int data2 = sub_number(a, b);
//	int data3 = mul_number(a, b);
//	int data4 = divi_number(a, b);
//
//	printf("���� ��� : %d\n", data1);
//	printf("���� ��� : %d\n", data2);
//	printf("���� ��� : %d\n", data3);
//	printf("������ ��� : %d\n", data4);
//
//	return 0;
//}

//#include <stdio.h>
//
//int minus(int n)
//{
//	if (n <= 1) return -1;
//	return minus(n - 1) - 1;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", minus(n));
//
//	return 0;
//}

//#include <stdio.h>
//
//void printNumber(int n)
//{
//	if (n <= 0) return;
//	printf("%d ", n);
//	printNumber(n - 1);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printNumber(n);
//
//	return 0;
//}

// ���ȣ��
//#include <stdio.h>
//
//int fibonacci(int n)
//{
//	printf("%d ", n);
//	if (n <= 2) return 1;
//	printf("(%d)\n", n);
//	return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("\n%d\n", fibonacci(n));
//
//	return 0;
//}

// ���ȣ�� ����1
//#include <stdio.h>
//
//int add_function(int n)
//{
//	if (n <= 1) return 1;
//	return add_function(n - 1) + n;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("1 ~ %d������ ���� %d�Դϴ�.", n, add_function(n));
//
//	return 0;
//}

// ����ü
//#include <stdio.h>
//
//struct BYTE {
//	char a;
//	char b;
//};
//
//int main()
//{
//	struct BYTE a;
//	a.a = 10;
//	a.b = 20;
//	printf("%d %d", a.a, a.b);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct student {
//	int id;
//	char* name;
//	float aver;
//};
//
//int main()
//{
//	struct student s = { 1, (char*)"�̻�", 90.5 };
//
//	printf("���̵� : %d\n", s.id);
//	printf("�̸� : %s\n", s.name);
//	printf("����� : %.1f\n", s.aver);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct GUN {
//	char name[10];
//	float bullet_type;
//	bool scope;
//	bool muzzle;
//	bool handgrip;
//	bool magazine;
//	bool tactical_stock;
//	int magazine_size;
//};
//
//int main()
//{
//	struct GUN M416 = { "M416", 5.56, true, true, true, true, true, 30 };
//
//	printf("ȭ��� : %s\n", M416.name);
//	printf("ź ���� : %.2lf\n", M416.bullet_type);
//	printf("���������� : %s", M416.scope ? "true" : "false");
//
//	return 0;
//}

//#include <stdio.h>
//
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//
//struct VIP_PERSON {
//	char grade;			// ����� S A B C D
//	char personCode;	// ���ڵ�
//	char mileage;		// ���ϸ���
//};
//
//int main()
//{
//	int sizedummy = sizeof(__dummy__);
//	int sizevip = sizeof(VIP_PERSON);
//	printf("���� ũ�� : %d\n", sizedummy);
//	printf("VIP���� ũ�� : %d\n", sizevip);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//
//struct VIP_PERSON {
//	char grade;			// ����� S A B C D
//	char personCode;	// ���ڵ�
//	char mileage;		// ���ϸ���
//};
//
//int main()
//{
//	VIP_PERSON lee_sam;
//	printf("�� ����� �Է��ϼ���\n");
//	while (true) {
//		scanf("  %c", &lee_sam.grade);
//		if (lee_sam.grade == 'S' || 'A' <= lee_sam.grade && lee_sam.grade <= 'D')
//			break;
//	}
//	int tmp;
//	printf("�� �ڵ带 �Է��ϼ���\n");
//	scanf("%d", &tmp);
//	lee_sam.personCode = (char)tmp;
//	printf("���ϸ����� �Է��ϼ���\n");
//	scanf("%d", &tmp);
//	lee_sam.mileage = (char)tmp;
//	printf("%c %d %d\n", lee_sam.grade, lee_sam.personCode, lee_sam.mileage);
//
//	return 0;
//}

// ����ü ����1
//#include <stdio.h>
//
//struct __dummy1__ {
//	float data_0;
//	char data_1;
//};
//
//struct __dummy2__ {
//	char data_0;
//	char data_1;
//	char data_2;
//	char data_3;
//	char data_4;
//	char data_5;
//	char data_6;
//	char data_7;
//};
//
//int main()
//{
//	int sizedummy1 = sizeof(__dummy1__);
//	int sizedummy2 = sizeof(__dummy2__);
//	printf("���� ũ�� : dummy1 = %d, dummy2 = %d\n", sizedummy1, sizedummy2);
//
//	return 0;
//}

// ����ü ����2
//#include <stdio.h>
//
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//
//int main()
//{
//	struct __dummy__ dummy;
//
//	printf("���� ���� �Ǽ� ������� ���� �Է��ϼ���.>> ");
//	scanf("%d %c %f", &dummy.data_0, &dummy.data_1, &dummy.data_2);
//
//	printf("%d %c %f", dummy.data_0, dummy.data_1, dummy.data_2);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	short pt;
//	scanf("%hd", &pt);
//	printf("�� : %hd\n", pt);
//
//	return 0;
//}

//#include <stdio.h>
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//
//	return pt1;
//}
//
//int main()
//{
//	short pt;
//	pt = getDefaultData();
//	printf("�� : %hd\n", pt);
//
//	return 0;
//}

//#include <stdio.h>
//
//short getDefaultData();
//void printData(short pt2);
//
//int main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//
//	return 0;
//}
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//
//	return pt1;
//}
//
//void printData(short pt2)
//{
//	printf("�� : %hd\n", pt2);
//}

// ���� 2-1
//#include <stdio.h>
//
//short getDefaultData();
//void printData(short pt2);
//
//int main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//
//	pt = pt + 5;
//	printData(pt);
//
//	return 0;
//}
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//
//	return pt1;
//}
//
//void printData(short pt2)
//{
//	printf("�� : %hd\n", pt2);
//}

// ���� 2-2
//#include <stdio.h>
//
//short getDefaultData();
//short add_5(short pt);
//void printData(short pt2);
//
//int main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//
//	pt = add_5(pt);
//	printData(pt);
//
//	return 0;
//}
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//
//	return pt1;
//}
//
//short add_5(short pt)
//{
//	pt = pt + 5;
//
//	return pt;
//}
//
//void printData(short pt2)
//{
//	printf("�� : %hd\n", pt2);
//}

// ���� 2-3 **�߿�**
//#include <stdio.h>
//
//struct POINT {
//	short x, y;
//};
//
//POINT getDefaultData();
//POINT add_5(POINT pt);
//void printData(POINT pt2);
//
//int main()
//{
//	POINT pt;
//	pt = getDefaultData();
//	printData(pt);
//
//	pt = add_5(pt);
//	printData(pt);
//
//	return 0;
//}
//
//POINT getDefaultData()
//{
//	POINT pt1;
//	scanf("%hd %hd", &pt1.x, &pt1.y);
//
//	return pt1;
//}
//
//POINT add_5(POINT pt2)
//{
//	pt2.x += 5;
//	pt2.y += 5;
//
//	return pt2;
//}
//
//void printData(POINT pt3)
//{
//	printf("x �� : %hd / y �� : %hd\n", pt3.x, pt3.y);
//}

// �迭
//#include <stdio.h>
//
//int main()
//{
//	char arr[3];
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[4];
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char alpah[4] = { 'a', 'b', 'c', 'd' };
//	printf("%c%c%c%c\n", alpah[0], alpah[1], alpah[2], alpah[3]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num[3] = { 3, 6, 9 };
//	printf("num�� �ȿ� ����ִ� ");
//	printf("1��° ���ڴ�? %d\n", num[1]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num[3] = { 3, 6, 9 };
//
//	printf("%d��°�� %d ����\n", 0, num[0]);
//	printf("%d��°�� %d ����\n", 1, num[1]);
//	printf("%d��°�� %d ����\n", 2, num[2]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num[3] = { 3, 6, 9 };
//	int k = 0;
//
//	printf("%d��°�� %d ����\n", k, num[k]);	k++;
//	printf("%d��°�� %d ����\n", k, num[k]);	k++;
//	printf("%d��°�� %d ����\n", k, num[k]);	k++;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num[3] = { 3, 6, 9 };
//	for (int k = 0; k < 3; k++) {
//		printf("%d��°�� %d ����\n", k, num[k]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[3];
//	for (int i = 0; i < 3; i++) {
//		scanf("%d", &arr[i]);
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}

// �迭 ����1
//#include <stdio.h>
//
//int main()
//{
//	int num[5];
//
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &num[i]);
//	}
//	printf("\n\n");
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", num[i]);
//	}
//
//	return 0;
//}

// �迭 ����2
//#include <stdio.h>
//
//int main()
//{
//	int num[10];
//	int input;
//
//	printf("���� 10���� �Է����ּ���.\n");
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &num[i]);
//	}
//
//	int flag = 1;
//	while (flag) {
//		printf("���� �ϳ��� �Է����ּ���. ���� �Է��� 10���� ���� �� �ϳ��� �����մϴ�.\n");
//		scanf("%d", &input);
//
//		for (int i = 0; i < 10; i++) {
//			if (input == num[i]) {
//				printf("exist\n");
//				flag = 0;
//			}
//		}
//	}
//
//	return 0;
//}

// swap�� �߸��� ����
//#include <stdio.h>
//
//int main()
//{
//	int left = 3, right = 5;
//	left = right;
//	right = left;
//	printf("left = %d, ", left);
//	printf("right = %d\n", right);
//
//	return 0;
//}

// swap�� �ùٸ� ����1
//#include <stdio.h>
//
//int main()
//{
//	int left = 3, right = 5;
//	int temp;
//	temp = left;
//	left = right;
//	right = temp;
//	printf("left = %d, ", left);
//	printf("right = %d\n", right);
//
//	return 0;
//}

// swap�� �ùٸ� ����2
//#include <stdio.h>
//
//int main()
//{
//	int num[2] = { 10, 3 };
//	int temp;
//	temp = num[0];
//	num[0] = num[1];
//	num[1] = temp;
//	printf("num[0] = %d, ", num[0]);
//	printf("num[1] = %d\n", num[1]);
//
//	return 0;
//}

// ���� ����1
//#include <stdio.h>
//
//void swap(int &x, int &y);
//
//int main()
//{
//	int num[4] = { 4, 3, 1, 2 };
//
//	swap(num[0], num[2]);
//	swap(num[1], num[3]);
//	swap(num[2], num[3]);
//
//	printf("������������ ������ ��� : ");
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//
//	return 0;
//}
//
//void swap(int &x, int &y)
//{
//	int temp;
//
//	temp = x;
//	x = y;
//	y = temp;
//}

// ���� ����2
//#include <stdio.h>
//
//int main()
//{
//	int num[4];
//	int temp;
//
//	printf("������ �� �� ���� �Է��ϼ���.\n");
//	for (int i = 0; i < 4; i++) {
//		scanf("%d", &num[i]);
//	}
//	
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3 - i; j++) {
//			if (num[j] > num[j + 1]) {
//				temp = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = temp;
//			}
//		}
//	}
//
//	printf("������������ ������ ��� : ");
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//
//	return 0;
//}

// 1���� �迭, if��
//#include <stdio.h>
// �� ���� �߿� ���� ū ��
//int main()
//{
//	int one = 1, two = 2;
//	int max = 0;
//
//	if (one > two) max = one;
//	else
//		max = two;
//
//	printf("max = %d\n", max);
//
//	return 0;
//}

//#include <stdio.h>
// �� ���� �߿� ���� ū ��
//int main()
//{	// �� �ٲ㼭 �����غ���
//	int one = 1, two = 3, three = 2;
//	int max = 0;
//
//	if (one > two) {
//		if (one > three)
//			max = one;
//		else
//			max = three;
//	}
//	else {
//		if (two > three)
//			max = two;
//		else
//			max = three;
//	}
//	printf("max = %d\n", max);
//
//	return 0;
//}

//#include <stdio.h>
//// N�� ���� �߿� ���� ū ��
//int main()
//{	// array(=�迭)�� ���ڷ� arr�̳� a�� ���
//	int arr[3] = { 1, 3, 2 };
//	int max = arr[0];
//
//	for (int i = 1; i < 3; i++) {
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//
//	return 0;
//}

// 1���� �迭, if�� ����1
//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 1, 3, 6, 4, 2 };
//	int max = arr[0];
//	int min = arr[0];
//	int sum = arr[0];
//	double avg = 0;
//
//	for (int i = 1; i < 5; i++) {
//		if (max < arr[i])
//			max = arr[i];
//		if (min > arr[i])
//			min = arr[i];
//
//		sum += arr[i];
//	}
//
//	avg = (double)sum / 5;
//
//	printf("�ִ밪 : %d\n", max);
//	printf("�ּҰ� : %d\n", min);
//	printf("���� : %d\n", sum);
//	printf("��� : %.2lf\n", avg);
//
//	return 0;
//}

// 1���� �迭 ����2
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1, 1, 4, 5, 6, 2, 3, 3, 4, 1 };
//	int num[7] = {};	// 0��° �ε����� ���� �ʰ�, 1-6��° �ε����� ��
//
//	// * num�� �ε����� arr[i]�� �����ν�, �ֻ��� ���� ���� Ƚ���� ������Ŵ (if���� �� �ʿ� X)
//	for (int i = 0; i < 10; i++) {
//		num[arr[i]] += 1;
//	}
//
//	printf("�� �ֻ��� ���� ���� Ƚ��\n");
//	for (int i = 1; i <= 6; i++) {
//		printf("%d : %d��\n", i, num[i]);
//	}
//
//	return 0;
//}

// 2���� �迭
//#include <stdio.h>
//
//int main()
//{
//	char arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr2d[5][4] = {
//	   // [0] [1] [2] [3]
//		{ 662, 7, 4, 74 },		// arr2d[0]
//		{ 8, 396, 299, 95 },	// arr2d[1]
//		{ 66, 73, 86, 0 },		// arr2d[2]
//		{ 116, 26, 586, 42 },	// arr2d[3]
//		{ 84, 7, 41, 11 }		// arr2d[4]
//	};
//
//	// 2���� �迭�� ��Ҹ� �ϳ��� ���
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%3d ", arr2d[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 2���� �迭 ����1
//#include <stdio.h>
//
//int main()
//{
//	int arr[3][3] = {
//		{ 2, 4, 6 },
//		{ 8, 10, 12 },
//		{ 14, 16, 18 }
//	};
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%3d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	const int m = 4;
//	const int n = 3;
//	long data[m][n];
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data[i][j] = i + j;
//		}
//	}
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%3d ", data[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 2���� �迭 ����2
//#include <stdio.h>
//
//int main()
//{
//	const int m = 5;
//	const int n = 5;
//	long data[m][n];
//	int num = 1;
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data[i][j] = num;
//			num += 1;
//		}
//	}
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%3d ", data[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 2���� �迭 ����3
//#include <stdio.h>
//
//int main()
//{
//	const int m = 5;
//	const int n = 5;
//	long data[m][n];
//	int num = 1;
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data[i][j] = num;
//			num += 1;
//		}
//	}
//
//	for (int i = m - 1; i >= 0; i--) {
//		for (int j = n - 1; j >= 0; j--) {
//			printf("%3d ", data[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 2���� �迭 ����4
//#include <stdio.h>
//
//int main()
//{
//	const int m = 5;
//	const int n = 5;
//	long data[m][n];
//	long data2[m * n];
//	int num = 1;
//	int str = 0;
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data[i][j] = num;
//			num += 1;
//		}
//	}
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data2[str] = data[i][j];
//			str++;
//		}
//	}
//
//	for (int i = 0; i < m * n; i++) {
//		printf("%3d ", data2[i]);
//	}
//
//	return 0;
//}

// 2���� �迭 ����5
//#include <stdio.h>
//
//int main()
//{
//	int n;
//	int arr[10] = {};
//	char arr2[10][10] = {};
//
//	printf("10 �̸��� ���� n�� �Է��ϰ� n����ŭ�� ���ڸ� �Է��ϼ���.>> ");
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < arr[i]; j++) {
//			arr2[j][i] = '*';
//		}
//	}
//
//	// *** 5-4 �߿� ***
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			if (arr2[i][j] == 0)
//				printf(" ");
//			else
//				printf("%c", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 2���� �迭 ����6
// ** ó������ �� �����Ϸ����� ����, �ϳ��� �������� �ϸ鼭 ����� ���� �Ŀ�, ���� �� �ִ� �κ� ���̸鼭 �����ϴ� ���� �߿� **
//#include <stdio.h>
//
//int main()
//{
//	const int n = 5;		// ���� n�� �ٲ㵵 5x5�� �ƴ϶� nxn�� ����� �� ����
//	long arr[n][n] = {};
//	int num = 1;
//	int x = -1, y = 0;
//	int count = n;
//	int index = 1;
//
//	while (true) {
//		// �ݺ��� ����, 2���� �迭�� �ε����� ���� �ٸ� ������ �����ϴ� ���� �߿�
//		for (int i = 0; i < count; i++) {
//			x += index;
//			arr[y][x] = num;
//			num++;
//		}
//		if (--count == 0)
//			break;
//
//		for (int i = 0; i < count; i++) {
//			y += index;
//			arr[y][x] = num;
//			num++;
//		}
//		// ** �߿� **
//		index = -index;
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// ������
//#include <stdio.h>
//
//int main()
//{
//	int b = 100;
//	int* pB = &b;
//
//	printf("b = %d\n", b);
//	printf("b = %x\n", &b);
//	printf("b = %d\n", *pB);
//	printf("b = %x\n", pB);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char a = 'A';
//	char* pA = &a;
//
//	int b = 100;
//	int* pB = &b;
//
//	double c = 3.14;
//	double* pC = &c;
//
//	printf("pA�� ũ�� : %d byte\n", sizeof(pA));
//	printf("pB�� ũ�� : %d byte\n", sizeof(pB));
//	printf("pC�� ũ�� : %d byte\n", sizeof(pC));
//
//	printf("*pA�� ũ�� : %d byte\n", sizeof(*pA));
//	printf("*pB�� ũ�� : %d byte\n", sizeof(*pB));
//	printf("*pC�� ũ�� : %d byte\n", sizeof(*pC));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[] = "programming";
//	char* ptr1, * ptr2;
//
//	ptr1 = &str[0];
//	ptr2 = &str[7];
//
//	printf("�� ������ ���� ���� %d �Դϴ�.\n", ptr2 - ptr1);
//
//	printf("%x\n", ptr1 + 1);
//	printf("%c\n", *(ptr1 + 1));
//
//	printf("%x\n", ptr1 + 3);
//	printf("%c\n", *(ptr1 + 3));
//
//	return 0;
//}

// ������ ����
//#include <stdio.h>
//
//int main()
//{
//	int* numPtr;
//	int num1 = 10;
//	int num2 = 20;
//
//	numPtr = &num1;
//	printf("%d\n", *numPtr);
//
//	numPtr = &num2;
//	printf("%d\n", *numPtr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number[2] = { 1, 2 };
//	void* p = number;
//
//	// ** void �����ͷ� �����Ͽ����� (int*)���� ĳ�����������.
//	printf("%d\n", *(int*)p);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int fibonacci[5] = { 3, 5, 8, 13, 21 };
//	int* ptrFibo;
//	ptrFibo = fibonacci;
//
//	int* ptrFibo1 = &fibonacci[1];
//	int* ptrFibo4 = fibonacci + 4;
//	printf("> %d - %d", *ptrFibo4, *ptrFibo1);
//	// 4�������� 1������ ���ٴ� �ǹ� 4 - 1 = 3
//	printf(" >> %d\n", ptrFibo4 - ptrFibo1);
//
//	printf("%d ", ptrFibo[1]);
//	printf("%d ", ptrFibo1[0]);
//	printf("%d ", ptrFibo4[-1]);
//
//	return 0;
//}

// ������ ����
//#include <stdio.h>
//
//int main()
//{
//	int numArr[5] = { 11, 22, 33, 44, 55 };
//	int* numPtrA;
//	void* ptr;
//
//	numPtrA = &numArr[2];
//	ptr = numArr;
//
//	printf("%d\n", *(numPtrA - 1));		// 1. numPtrA ����Ͽ� 22���
//	printf("%d\n", *((int*)ptr + 4));	// 2. ptr ����Ͽ� 55���
//
//	return 0;
//}

// ������ ����1
//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = {};
//	int* ptr;
//
//	printf("������ �� 5���� �Է��ϼ���.\n");
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	ptr = arr;
//
//	ptr = ptr + 2;
//
//	printf("%d\n", *ptr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 2, 4, 6, 8, 10 };
//	int* p = &arr[0];
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", *p++);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	int* p = arr[0];
//	for (int i = 0; i < 6; i++) {
//		printf("%d ", *p++);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num[4] = { 1, 2, 3, 4 };
//	int* pt = num;					// ������ pt�� �迭�� 1��° ��Ҹ� ����Ŵ = 1
//	pt++;							// ������ pt�� �迭�� 2��° ��Ҹ� ����Ŵ = 2
//	*pt++ = 5;						// ������ pt�� �迭�� 2��° ��Ҹ� 5�� �ٲٰ� 3��° ��Ҹ� ����Ŵ
//	*pt++ = 10;						// ������ pt�� �迭�� 3��° ��Ҹ� 10���� �ٲٰ� 4��° ��Ҹ� ����Ŵ
//	pt--;							// ������ pt�� �迭�� 4��° ��ҿ��� 3��° ��Ҹ� ����Ŵ
//	*pt++ += 20;					// ������ pt�� �迭�� 3��° ��ҿ� 20�� ���� ��, 4��° ��Ҹ� ����Ŵ
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//	// ��� ���� ���������� 1 5 30 4�� ��µ�.
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
	// �ѱ��� �⺻������ 2����Ʈ���ε�, ������ ptr�� 7��° ��� ���ķ� ����ؾ���.
	// ������ ���ķ� ����� �ؾ��ϳ�, �����̽���(����)�� ?�� ����ϰ� �� ���ķδ� ��� ���ڰ� ��µ�.
//	char str[] = "������ ��� : ���ʺ��� ������ ������ �� �� ���� ��Ȳ�� ���������� �̸��� ��.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", ptr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[] = "������ ��� : ��� �� ������ ������ ��忡���� �ƹ��� �پ ����̶� ��⿡�� �̱� �� ���ٴ� ���� ����.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", str);
//	str[15] = 'a';				// ��� ������ ������ 15��° ���. ������ 'a'�� �ٲ�.
//	str[23] = 'b';				// '��' �̶�� ���ڰ� 23, 24��° ��Ҹ� ��ƸԴµ�, 23��° ��Ҹ� b�� �ٲ�.
//	str[25] = 'c';				// '��' �̶�� ���ڿ��� 24��° ��Ұ� ���µ�, 25��° ���(����)�� c�� �ٲٰ�,
//	printf("%s\n\n", ptr);		// ���� 24��° ��ҿ� �������� c�� ��µ��� �ʰ� ?�� ��µ�.
//
//	return 0;
//}

// �����͸� �̿��� �迭 ����1
//#include <stdio.h>
//
//int main()
//{
//	int num = 1;
//	int arr[100] = {};
//
//	for (int i = 0; i < 100; i++) {
//		arr[i] = num;
//		num++;
//	}
//
//	int* ptr = &arr[99];
//
//	for (int i = 99; i >= 0; i--) {
//		printf("%3d ", *ptr);
//		ptr--;
//	}
//
//	return 0;
//}

// �����͸� �̿��� �迭 ����2
//#include <stdio.h>
//
//int main()
//{
//	const int index = 100;
//	int num = 1;
//	int arr[index] = {};
//
//	for (int i = 0; i < index; i++) {
//		arr[i] = num;
//		num++;
//	}
//
//	int* ptr = &arr[index / 2];
//
//	// �� ���ķδ� arr �迭 ���� ����.
//	// ** �߿� **
//	for ( ; *ptr != index / 2; ptr++) {
//		printf("%3d ", *ptr);
//		if (*ptr == index) {
//			ptr -= index;
//		}
//	}
//
//	return 0;
//}

// string �Լ�
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "memmove can be very useful......";
//	// 'v' ��ġ���� 11����Ʈ ��ŭ�� 'very useful'�� 'u' ��ġ���� 11����Ʈ ��ŭ �����Ѵ�.
//	// ��� : memmove can be very useful.
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//struct mydata
//{
//	int a;
//	char b[25];
//};
//
//int main()
//{
//	char buf[5];
//	memset(buf, '1', 5);
//	printf("%s\n", buf);
//
//	// 0x00 = NULL
//	buf[4] = 0x00;
//	printf("%s\n", buf);
//
//	struct mydata data;
//	memset((void*)&data, 0x00, sizeof(data));
//	data.b[0] = 'k';
//	printf("%d - %s\n", data.a, data.b);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char* ptr1 = (char*)"coding";
//	char* ptr2 = (char*)"coding";
//	char* ptr3 = (char*)"coding.ne.kr";
//	char* ptr4 = (char*)"ne.kr";
//	char* ptr5 = (char*)"abcd";
//
//	// ������ strlen��ŭ ���ذ�.
//	printf("%s with %s = %d\n", ptr1, ptr2, memcmp(ptr1, ptr2, strlen(ptr1)));
//
//	printf("%s with %s (ptr1 size) = %d\n", ptr1, ptr3, memcmp(ptr1, ptr3, strlen(ptr1)));
//
//	printf("%s with %s (ptr3 size) = %d\n", ptr1, ptr3, memcmp(ptr1, ptr3, strlen(ptr3)));
//
//	printf("%s with %s = %d\n", ptr1, ptr4, memcmp(ptr1, ptr4, strlen(ptr1)));
//
//	printf("%s with %s (ptr1 size) = %d\n", ptr1, ptr5, memcmp(ptr1, ptr5, strlen(ptr1)));
//
//	printf("%s with %s (ptr5 size) = %d\n", ptr1, ptr5, memcmp(ptr1, ptr5, strlen(ptr5)));
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int src_data[10] = { 0, 1, 2, 3, 4, 5 };
//	int dst_data[10] = { 10, 20, 30, 40, 50 };
//	// src_data�� ���� 4��(32����Ʈ)�� dst_data ���� 4���� �����Ѵ�.
//	memcpy(dst_data, src_data, sizeof(int) * 4);
//
//	printf("%d %d %d %d %d\n", src_data[0], src_data[1], src_data[2], src_data[3], src_data[4]);
//
//	// ��� : 0 1 2 3 50
//	printf("%d %d %d %d %d\n", dst_data[0], dst_data[1], dst_data[2], dst_data[3], dst_data[4]);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[20] = "coding";
//
//	strcat(str, ".ne.kr");
//	printf("%s\n", str);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[10];
//
//	scanf("%s", str);
//
//	printf("�Է��� ���ڿ� : %s\n", str);
//	printf("���ڿ��� ���� : %d\n", strlen(str));
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "This is a sample string";
//	char* pch;
//	printf("Looking for the 's' character in \"%s\"...\n", str);
//
//	pch = strchr(str, 's');
//
//	// 4, 7, 11, 18����Ʈ �ڸ��� s�� ����.
//	// pch�� ó���� &str[3] ����, str�� &str[0] ������.
//	// pch - str + 1�� �ϰ� �Ǹ� 4�� ����.
//	// �׷��� �� ��, pch�� pch + 1, �� &str[4] ��ġ���� �����ؼ� 's'�� ã��.
//	// �� �۾��� pch�� NULL�� ������ �ݺ�.
//	// �׷��� �Ǹ� �� 's'�� ��ġ�� ����ϰ� pch�� NULL�̸� �ݺ����� ���������� ����.
//	while (pch != NULL) {
//		printf("found at %d\n", pch - str + 1);
//		pch = strchr(pch + 1, 's');
//	}
//	
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//
//	// pch�� &str[10] ����
//	pch = strstr(str, "simple");
//	// 'sample'�� pch ��ġ���� 6����Ʈ��ŭ ����.
//	// 'simple' -> 'sample'
//	strncpy(pch, "sample", 6);
//
//	printf("%s\n", str);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	const char* str1 = "LPUX";
//	const char* str2 = "HINUX";
//	const char* str3 = "SOLARIS";
//
//	// str1�� ù ��° ���� 'L'�� str2�� ù ��° ���� 'H'���� ũ�Ƿ� 1�� ����
//	printf("s1[%-7s], s2[%-7s] => ret = [%2d]\n", str1, str2, strcmp(str1, str2));
//
//	// str2�� ù ��° ���� 'H'�� str3�� ù ��° ���� 'S'���� �����Ƿ� -1�� ����
//	printf("s2[%-7s], s3[%-7s] => ret = [%2d]\n", str2, str3, strcmp(str2, str3));
//
//	// str3�� ù ��° ���� 'S'�� str1�� ù ��° ���� 'L'���� ũ�Ƿ� 1�� ����
//	printf("s3[%-7s], s1[%-7s] => ret = [%2d]\n", str3, str1, strcmp(str3, str1));
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char buf[25];
//
//	strcpy(buf, "hello world");
//	printf("%s\n", buf);
//	// ���ڿ� �迭 buf�� 'hello world'�� ����� ��, 'www w'�� buf�� 5����Ʈ��ŭ ������.
//	strncpy(buf, "www world", 5);
//	printf("%s\n", buf);
//
//	return 0;
//}

// string �Լ� ����1
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char buff[100];
//	char search;
//	char* q;
//
//	printf("���ڿ��� �Է����ּ���>> ");
//	// gets_s�� ���� ó������ ���ֹǷ�
//	gets_s(buff);
//
//	while (true) {
//		printf("�˻��� ���ڸ� �Է����ּ���(���� : 0)>> ");
//		// %c �տ� ������ ó�����־�� ��.
//		scanf(" %c", &search);
//
//		q = strchr(buff, search);
//
//		if (search == '0') {
//			printf("\n���� �˻� ���α׷��� �����մϴ�.\n");
//			break;
//		}
//		if (q != NULL) {
//			printf("\n�˻��� ���ڰ� ���ڿ��� �ֽ��ϴ�!\n");
//			while (q != NULL) {
//				printf("%d��°�� �˻��� ���ڰ� �ֽ��ϴ�.\n", q - buff + 1);
//				q = strchr(q + 1, search);
//			}
//			printf("\n");
//		}
//		else {
//			printf("\n�˻��� ���ڰ� ���ڿ��� �����ϴ�...��.��\n\n");
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int parsing(char* String, int* data)
//{
//	char* p;
//	int cnt;
//
//	cnt = 0;
//	// strtok�� �̿��ؼ� String ���ڿ��� _ �� ����
//	p = strtok(String, "_");
//	
//	while (p) {
//		// atoi�� �̿��ؼ� ���е� ���ڹ��ڿ��� ������ ��ȯ
//		data[cnt++] = atoi(p);
//		// strtok�� �̿��ؼ� String ���ڿ� ����ؼ� _ �� ����
//		p = strtok(NULL, "_");
//	}
//
//	return cnt;
//}
//
//int main()
//{
//	char String[] = "101_102_103_104_105";
//	int data[10];
//	int cnt, i;
//
//	cnt = parsing(String, data);
//
//	for (int i = 0; i < cnt; i++) {
//		printf("%d\n", data[i]);
//	}
//
//	return 0;
//}

// ���� �������� �ݺ��� ���� ����
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int parsing(char* String, int* data)
//{
//	char* p;
//	int cnt;
//
//	cnt = 0;
//	// strtok�� �̿��ؼ� String ���ڿ��� _ �� ����
//	p = strtok(String, "_");
//
//	data[cnt++] = atoi(p);
//	p = strtok(NULL, "_");
//
//	data[cnt++] = atoi(p);
//	p = strtok(NULL, "_");
//
//	data[cnt++] = atoi(p);
//	p = strtok(NULL, "_");
//
//	data[cnt++] = atoi(p);
//	p = strtok(NULL, "_");
//
//	data[cnt++] = atoi(p);
//	p = strtok(NULL, "_");
//
//	return cnt;
//}
//
//int main()
//{
//	char String[] = "101_102_103_104_105";
//	int data[10];
//	int cnt, i;
//
//	cnt = parsing(String, data);
//
//	for (int i = 0; i < cnt; i++) {
//		printf("%d\n", data[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int integer = 123;
//	char character = 'c';
//	char string[] = "hello, world";
//	int* pointer = &integer;
//	double pi = 3.141592;
//	char buf[100];
//
//	// sprintf�� 'integer : (decimal) %d (octal) %o \n'�� �迭�� �����ϰ� �����.
//	// ��, ������ sprintf�� �ٸ� ���� �����ϰ� �Ǹ� ������. (+ �Ǵ� ���� X)
//	sprintf(buf, "integer : (decimal) %d (octal) %o \n", integer, integer);
//	printf("%s \n", buf);
//
//	sprintf(buf, "characer : %c \n", character);
//	printf("%s \n", buf);
//
//	sprintf(buf, "string : %s \n", string);
//	printf("%s \n", buf);
//
//	sprintf(buf, "pointer addr : %p \n", pointer);
//	printf("%s \n", buf);
//
//	sprintf(buf, "floating point : %e // %f \n", pi, pi);
//	printf("%s \n", buf);
//
//	sprintf(buf, "percent symbol : %% \n");
//	printf("%s \n", buf);
//
//	return 0;
//}

// string �Լ� ����2
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char parsing(char* String, int* data)
//{
//	char* p;
//	char oper;
//	
//	// strtok�� �̿��ؼ� String ���ڿ��� �������� ����
//	p = strtok(String, " ");	// p = 3
//	data[0] = atoi(p);
//
//	p = strtok(NULL, " ");		// p = *
//	oper = *p;
//
//	p = strtok(NULL, " ");		// p = 2
//	data[1] = atoi(p);
//
//	p = strtok(NULL, " ");		// p = '='
//
//	p = strtok(NULL, " ");		// p = 5
//	data[2] = atoi(p);
//
//	return oper;
//}
//
//int main()
//{
//	char String[100];
//	int data[3];
//
//	printf("������� �Է��ϼ���>> ");
//	gets_s(String);
//
//	char oper = parsing(String, data);
//
//	int result = 0;
//	switch (oper) {
//	case '+': result = data[0] + data[1]; break;
//	case '-': result = data[0] - data[1]; break;
//	case '*': result = data[0] * data[1]; break;
//	case '/': result = data[0] / data[1]; break;
//	case '%': result = data[0] % data[1]; break;
//	}
//
//	if (data[2] == result)
//		printf("���Դϴ�.\n");
//	else
//		printf("%d %c %d �� %d�Դϴ�.\n", data[0], oper, data[1], result);
//
//
//	return 0;
//}

// ���� 6174�� ����
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void find_Kaprekar(char* num)
//{
//	int max, min;
//	int cnt = 0;
//	char temp;
//
//	// ���ѹݺ� (6174�� ã�� ������)
//	while (strcmp(num, "6174") != 0) {
//		// �ִ밪 ã�� �ڵ�
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < 3 - i; j++) {
//				if (num[j] < num[j + 1]) {
//					temp = num[j];
//					num[j] = num[j + 1];
//					num[j + 1] = temp;
//				}
//			}
//		}
//		max = atoi(num);
//
//		// �ּҰ� ã�� �ڵ� (�ִ밪���� �����⸸ �ϸ� ��)
//		for (int i = 0; i < 4 / 2; i++) {
//			temp = num[i];
//			num[i] = num[3 - i];
//			num[3 - i] = temp;
//		}
//		min = atoi(num);
//
//		// ���� �ϴ� �ڵ�
//		// %d�� �ϰԵ� ���, ���� 25�� ���� ��� 0025�� �迭�� ����Ǵ� ���� �ƴ�.
//		// ���� �ڸ����� �� �޸𸮿� 0�� ä���ֱ� ���� %04d�� ����� ��.
//		sprintf(num, "%04d", max - min);
//		cnt++;
//	}
//
//	printf("%d\n", cnt);
//
//	return;
//}
//
//int main()
//{
//	char num[5];
//
//	gets_s(num);
//
//	find_Kaprekar(num);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct GM {
//	int no;
//	char name[10];
//	int part;
//	int salary;
//};
//
//struct COMPANY {
//	GM gms[5];
//	int gmCount = 0;
//};
//
//COMPANY HireGM_once(COMPANY gameCo)
//{
//	gameCo.gms[gameCo.gmCount].no = gameCo.gmCount + 1;
//
//	printf("GM �̸���? : ");
//	scanf("%s", gameCo.gms[gameCo.gmCount].name);
//
//	printf("GM �μ���? : ");
//	scanf("%d", &gameCo.gms[gameCo.gmCount].part);
//
//	printf("GM ������? : ");
//	scanf("%d", &gameCo.gms[gameCo.gmCount].salary);
//	
//	gameCo.gmCount++;
//
//	return gameCo;
//};
//
//int main()
//{
//	printf("������ ����غ���!\n");
//	COMPANY gameCo;
//
//	printf("���� GM���� ����ұ�?\n");
//	while (1) {
//		gameCo = HireGM_once(gameCo);
//		printf("�� ����ұ�?(y/n) : ");
//		char ch;
//		do {
//			ch = getchar();
//		} while (ch != 'y' && ch != 'n');
//		if (ch == 'n') break;
//	}
//	printf("GM %d���� �̾Ҵ�!\n", gameCo.gmCount);
//
//	return 0;
//}

// ���Ǳ� ���α׷�
//#include <stdio.h>
//
//struct BEVERAGE
//{
//	int price;
//	int stock;
//	char name[20];
//};
//
//int main()
//{
//	const int N = 6;
//	int money = 0, input_money = 0;
//	BEVERAGE beverages[N] = {
//		{800, 4, "��ټ�"}, {100, 1, "000"}, {1000, 2, "��īĿ��"}, {1200, 4, "��ī������Ʈ"}, {1500, 3, "�������"}, {1500, 5, "��ī�ݶ�"}
//	};
//
//	printf("<<�������Ǳ�!>>\n");
//
//	while (true) {
//		for (int i = 0; i < N; i++) {
//			printf("%d.[%6s] %4d�� (%d������)\n", (i + 1), beverages[i].name, beverages[i].price, beverages[i].stock);
//		}
//		printf("%d.�Ž����� ��ȯ\n", N + 1);
//		printf("%d.�ݾ� ����\n\n", N + 2);
//		printf("���Ǳ⿡ ���Ե� �� : %d��\n\n", money);
//
//		int choice;
//		printf("���Ͻô� �޴��� �������ּ��� : ");
//		scanf("%d", &choice);
//
//		if (choice < 1 || choice > N + 2) {
//			printf("�߸��� �޴��Դϴ�.\n\n");
//			continue;
//		}
//
//		if (choice == N + 1) {
//			printf("�Ž����� %d���� ���Խ��ϴ�.\n", money);
//			break;
//		}
//
//		if (choice == N + 2) {
//			printf("\n�󸶸� �����ðڽ��ϱ�? : ");
//			scanf("%d", &input_money);
//			printf("\n");
//			money += input_money;
//			continue;
//		}
//
//		choice--;
//
//		if (beverages[choice].stock == 0) {
//			printf("��� �����մϴ�.\n\n");
//			continue;
//		}
//
//		if (money < beverages[choice].price) {
//			printf("�ݾ��� �����մϴ�.\n\n");
//			continue;
//		}
//
//		printf("%s��(��) ���Խ��ϴ�.\n\n", beverages[choice].name);
//		money -= beverages[choice].price;
//		beverages[choice].stock--;
//	}
//
//	return 0;
//}

// �����Ҵ� malloc
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* iptr = (int *)malloc(sizeof(int));
//	char* cptr = (char *)malloc(sizeof(char));
//	double* dptr = (double*)malloc(sizeof(double));
//
//	*iptr = 5;
//	*cptr = 'a';
//	*dptr = 3.5;
//
//	printf("%d, %c, %lf\n", *iptr, *cptr, *dptr);
//
//	free(iptr);
//	free(cptr);
//	free(dptr);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int arr_1[5];		// �迭 ����
//	int* arr_2;			// �ּ� ���� ����
//	int i;
//
//	for (i = 0; i < 5; i++) {
//		arr_1[i] = i + 1;		// �迭�� �� ����
//	}
//
//	// �޸� �Ҵ�, �迭�� ũ�⸸ŭ �Ҵ��ϱ� ���� 5�� ����
//	arr_2 = (int*)malloc(sizeof(int) * 5);
//
//	for (i = 0; i < 5; i++) {
//		arr_2[i] = arr_1[i];
//		printf("%d ", arr_2[i]);
//	}
//
//	free(arr_2);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int i, j;
//	int nRow = 5, nCol = 4;
//	int** aNum;
//
//	// ���� �Ҵ��ϱ�
//	aNum = (int**)malloc(nRow * sizeof(int*));
//	for (i = 0; i < nRow; ++i) {
//		aNum[i] = (int*)malloc(nCol * sizeof(int));
//		for (j = 0; j < nCol; ++j) aNum[i][j] = i * 10 + j;
//	}
//
//	// ��� ����ϱ�
//	for (i = 0; i < nRow; ++i)
//	{
//		for (j = 0; j < nCol; ++j) printf("%02d ", aNum[i][j]);
//		printf("\n");
//	}
//
//	// �Ҵ� �����ϱ�
//	for (i = 0; i < nRow; ++i) free(aNum[i]);
//	free(aNum);
//
//	return 0;
//}

// �����Ҵ� malloc ����1
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int i, j;
//	int nRow = 5, nCol = 4;
//	int** aNum;
//
//	// ���� �Ҵ��ϱ�
//	// new�� ������ ������ ��. (�� �״�� ��� ���� ������ []�� ������ ��.)
//	aNum = new int*[nRow];
//	for (i = 0; i < nRow; ++i) {
//		aNum[i] = new int[nCol];
//		for (j = 0; j < nCol; ++j) aNum[i][j] = i * 10 + j;
//	}
//
//	// ��� ����ϱ�
//	for (i = 0; i < nRow; ++i)
//	{
//		for (j = 0; j < nCol; ++j) printf("%02d ", aNum[i][j]);
//		printf("\n");
//	}
//
//	// �Ҵ� �����ϱ�
//	// free���� delete�θ� �ٲٸ� ��.
//	for (i = 0; i < nRow; ++i) delete(aNum[i]);
//	delete(aNum);
//
//	return 0;
//}

// �����Ҵ� malloc ����2
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int i;
//	int* Num;
//
//	Num = (int*)malloc(10 * sizeof(int));
//	
//	for (i = 0; i < 10; i++) {
//		Num[i] = rand() % 10 + 1;
//	}
//
//	for (i = 0; i < 10; i++) {
//		printf("%d ", Num[i]);
//	}
//	printf("\n");
//
//	free(Num);
//
//	return 0;
//}

// ���� + ����1
//#include <stdio.h>		// scanf�� printf�� ���� ���� stdio �Լ� ����
//#include <stdlib.h>		/// �����Լ� rand()�� �����Ҵ��� ���� ���� stdlib �Լ� ����
//#include <time.h>		// time �Լ��� ����
//
//void func_sort(int* pNum, int N);	// �ݵ�� ����ο� ���ƾ���(�����Լ�)
//void func_swap(int& a, int& b);		// ���� ������ �ٲ��ִ� �Լ�
//
//int main()
//{
//	// ������ ���� N�� ������ ������ ���� pNum ����
//	int N, * pNum;
//
//	scanf("%d", &N);	// �迭 ũ�⸦ �޾ƿ´�.
//	// �޾ƿ� ����ŭ �����Ҵ��Ͽ� ũ�⸦ ��´�.
//	pNum = (int*)malloc(sizeof(int) * N);
//
//	// rand �Լ��� �����ش�.
//	srand((unsigned int)time(NULL));
//
//	// �����Ҵ��� pNum�� �������� �Է¹��� ���� �ְ� ������ִ� �ڵ�
//	printf("<�������� �Է¹��� �� ���>\n");
//	for (int i = 0; i < N; ++i) {	/// N���� �ݺ���Ŵ
//		
//		*(pNum + i) = (rand() % N) + 1;// 1���� �Է¹��� ���� ���ǰ��� ������ �迭 pNum�� ���� ����
//		printf("%2d ", pNum[i]);	// �������� �Է¹��� �� ��� ��� 
//	}
//	// rand �Լ��� ����� ���� �� 32000
//
//	func_sort(pNum, N);	// �����Լ� ȣ���Ͽ� ���ڵ��� ����
//
//	// �ռ� �������� �Է¹��� ���� ������������ �����Ͽ� ������ִ� �ڵ�
//	printf("\n<�������� ���ĵ� �� ���>\n");
//	for (int i = 0; i < N; ++i) {	/// N���� �ݺ���Ŵ
//		printf("%2d ", pNum[i]);	// ������������ ������ ���� ��� ���
//		// ���� 10���� ���� �� �ٹٲ�
//		if (i % 10 == 9) printf("\n");
//	}
//	// �����Ҵ� ����
//	free(pNum);
//
//	return 0; // 0�� ��ȯ�ϸ� ���� �Լ� ����
//}
//
//// �Լ������
//void func_sort(int* pNum, int N)
//{
//	// bubble sort
//	for (int i = 0; i < N; ++i) {	/// N���� �ݺ���Ŵ
//		for (int j = i; j < N; ++j) {	/// N - i���� �ݺ���Ŵ
//// �Լ��� �����ڵ尡 ������ ��츸 { } ���� ����.
//			// � ���ڰ� �� ū�� �Ǵ��� ���� ������ �ٲپ�
//			// ������������ ������
//			if (pNum[i] > pNum[j])
//				// �� ū ���ڰ� �ִٸ� swap �Լ��� ȣ���Ͽ� ���� ������ �ٲ�
//				func_swap(pNum[i], pNum[j]);
//		}
//	}
//}
//
//// �Ű������� ���� ������ �ּҸ� ���� a, b�� ���۷��� ������ ����� ���� a, b�� ������
//void func_swap(int& a, int& b)
//{
//	// a�� b�� ���� ������ �ٲ��ִ� �ڵ�
//	int temp = a;	// ������ ���� temp�� a�� �ӽ÷� ����
//	a = b;			// ������ ���� a�� b�� ����
//	b = temp;		// �ռ� a�� �����ߴ� temp�� b�� ����
//}

// ����2 + ����3
//#include <stdio.h>		// scanf�� printf�� ���� ���� stdio �Լ� ����
//#include <stdlib.h>		/// �����Լ� rand()�� �����Ҵ��� ���� ���� stdlib �Լ� ����
//#include <time.h>		// time �Լ��� ����
//
//struct DATA {
//	// ������ ���� N�� ������ ������ ���� pNum ����
//	int N, * pNum;
//};
//
//void func_sort(DATA *d);	// �ݵ�� ����ο� ���ƾ���(�����Լ�)
//
//// �Ű������� ���� ������ �ּҸ� ���� a, b�� ���۷��� ������ ����� ���� a, b�� ������
//void func_swap(int& a, int& b)
//{
//	// a�� b�� ���� ������ �ٲ��ִ� �ڵ�
//	int temp = a;	// ������ ���� temp�� a�� �ӽ÷� ����
//	a = b;			// ������ ���� a�� b�� ����
//	b = temp;		// �ռ� a�� �����ߴ� temp�� b�� ����
//}
//
//int main()
//{
//	DATA data;
//
//	scanf("%d", &data.N);	// �迭 ũ�⸦ �޾ƿ´�.
//	// �޾ƿ� ����ŭ �����Ҵ��Ͽ� ũ�⸦ ��´�.
//	data.pNum = (int*)malloc(sizeof(int) * data.N);
//
//	// rand �Լ��� �����ش�.
//	srand((unsigned int)time(NULL));
//
//	// �����Ҵ��� pNum�� �������� �Է¹��� ���� �ְ� ������ִ� �ڵ�
//	printf("<�������� �Է¹��� �� ���>\n");
//	for (int i = 0; i < data.N; ++i) {	/// N���� �ݺ���Ŵ
//
//		*(data.pNum + i) = (rand() % data.N) + 1;// 1���� �Է¹��� ���� ���ǰ��� ������ �迭 pNum�� ���� ����
//		printf("%2d ", data.pNum[i]);	// �������� �Է¹��� �� ��� ��� 
//	}
//	// rand �Լ��� ����� ���� �� 32000
//
//	func_sort(&data);	// �����Լ� ȣ���Ͽ� ���ڵ��� ����
//
//	// �ռ� �������� �Է¹��� ���� ������������ �����Ͽ� ������ִ� �ڵ�
//	printf("\n<�������� ���ĵ� �� ���>\n");
//	for (int i = 0; i < data.N; ++i) {	/// N���� �ݺ���Ŵ
//		printf("%2d ", data.pNum[i]);	// ������������ ������ ���� ��� ���
//		// ���� 10���� ���� �� �ٹٲ�
//		if (i % 10 == 9) printf("\n");
//	}
//	// �����Ҵ� ����
//	free(data.pNum);
//
//	return 0; // 0�� ��ȯ�ϸ� ���� �Լ� ����
//}
//
//// �Լ������
//void func_sort(DATA *d)
//{
//	// bubble sort
//	for (int i = 0; i < (*d).N; ++i) {	/// N���� �ݺ���Ŵ
//		for (int j = i; j < d->N; ++j) {	/// N - i���� �ݺ���Ŵ
//			// �Լ��� �����ڵ尡 ������ ��츸 { } ���� ����.
//						// � ���ڰ� �� ū�� �Ǵ��� ���� ������ �ٲپ�
//						// ������������ ������
//			if (d->pNum[i] > d->pNum[j])
//				// �� ū ���ڰ� �ִٸ� swap �Լ��� ȣ���Ͽ� ���� ������ �ٲ�
//				func_swap(d->pNum[i], d->pNum[j]);
//		}
//	}
//}

// ���ϰ���
//#include <stdio.h>
//
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	printf("�ȳ��ϼ���");
//	fclose(pFile);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	fprintf(pFile, "�ȳ��ϼ���");
//	fclose(pFile);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pFile;
//	char name[100];
//	pFile = fopen("myFile.txt", "r");
//	fscanf(pFile, "%s", name);
//	printf("%s", name);
//	fclose(pFile);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pFile;
//	char name[100];
//
//	pFile = fopen("myFile.txt", "w");
//	for (int n = 0; n < 5; ++n) {
//		printf("���Ͽ� ������� ���� �Է��ϼ��� : ");
//		scanf("%s", name);
//		fprintf(pFile, "%d��° ���� [%-10s]\n", n, name);
//	}
//	fclose(pFile);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* readfp, * writefp;
//	char buff[1024];
//
//	readfp = fopen("myfile1.txt", "r");
//	writefp = fopen("outfile.txt", "w");
//	if (readfp == NULL) {
//		printf("������ ã�� ���Ͽ����ϴ�.\n");
//		return -1;
//	}
//	// ���� ���� ����
//	while (!feof(readfp)) {
//		fgets(buff, 1024, readfp);
//		fputs(buff, writefp);
//	}
//	fclose(readfp);
//	fclose(writefp);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//#define BUFF_SIZE 30
//
//int main()
//{
//	char buff[BUFF_SIZE];
//	int readLen = 0;
//	FILE* src, * dst;	// Source(�ٿ�), Destination(������)
//	char name1[100], enter;
//	char name2[100];
//
//	printf("�Է¹��� ������ �̸��� �Է��ϼ��� : ");
//	scanf("%s%c", name1, &enter);
//
//	printf("��¹��� ������ �̸��� �Է��ϼ��� : ");
//	gets_s(name2);
//
//	src = fopen(name1, "rb");
//	dst = fopen(name2, "wb");
//
//	if (src == NULL || dst == NULL) {
//		puts("������ ��ã��");
//		return -1;
//	}
//
//	// 30����Ʈ�� ��� �о��. (���ѹݺ����̴ϱ�)
//	while (true) {
//		readLen = fread(buff, 1, BUFF_SIZE, src);
//		if (readLen < BUFF_SIZE) {
//			if (feof(src) != 0) {
//				fwrite(buff, 1, readLen, dst);
//				puts("���� ���� �Ϸ�");
//				break;
//			}
//			else {
//				printf("���� ���� ����\n");
//			}
//		}
//		fwrite(buff, 1, BUFF_SIZE, dst);
//	}
//
//	if (fclose(src) != 0 || fclose(dst) != 0) {
//		puts("������ ���� ���߽��ϴ�.");
//		return -1;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* fp = fopen("output.txt", "w");
//	int i = 123;
//	int j = -123;
//	double f = 3.141592;
//
//	fprintf(fp, "�����߱�\n");
//	fprintf(fp, "i:%6d \n", i);
//	fprintf(fp, "i:%7d \n", i);
//	fprintf(fp, "i:%2d \n\n", i);
//
//	fprintf(fp, "����������\n");
//	fprintf(fp, "i:%5d��\n", i);
//	fprintf(fp, "��������\n");
//	fprintf(fp, "i:%-5d��\n\n", i);
//
//	fprintf(fp, "# �����ǻ��\n");
//	fprintf(fp, "i:%#x \n", i);
//	fprintf(fp, "i:%#X \n\n", i);
//
//	fprintf(fp, "��ȣ���̱�\n");
//	fprintf(fp, "%+d, %+d \n", i, j);
//
//	fclose(fp);
//
//	return 0;
//}

// ���ϰ��� ����1
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp;
//
//	fp = fopen("problem1.txt", "w");
//
//	fprintf(fp, "HelloWorld");
//
//	fclose(fp);
//
//	return 0;
//}

// ���ϰ��� ����2
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp1, *fp2;
//
//	fp1 = fopen("problem2-1.txt", "w");
//	fp2 = fopen("problem2-2.txt", "w");
//
//	fprintf(fp1, "HelloWorld");
//	fprintf(fp2, "byeworld");
//
//	fclose(fp1);
//	fclose(fp2);
//
//	return 0;
//}

// ���ϰ��� ����3
//#include <stdio.h>
//
//#define CONTENT_SIZE 100
//
//int main()
//{
//	FILE* fp1, *fp2;
//	char content1[CONTENT_SIZE] = "", content2[CONTENT_SIZE] = "";
//
//	fp1 = fopen("problem3-1.txt", "w");
//	fp2 = fopen("problem3-2.txt", "w");
//
//	printf("ù ��° ���ڿ��� �Է��ϼ��� : ");
//	scanf("%s", content1);
//
//	printf("�� ��° ���ڿ��� �Է��ϼ��� : ");
//	scanf("%s", content2);
//
//	fprintf(fp1, "%s", content1);
//	fprintf(fp2, "%s", content2);
//
//	fclose(fp1);
//	fclose(fp2);
//
//	return 0;
//}

// ���ϰ��� ����4
//#include <stdio.h>
//
//#define CONTENT_SIZE 100
//
//int main()
//{
//	FILE* fp1, * fp2;
//	char content1[CONTENT_SIZE], content2[CONTENT_SIZE];
//	char output1[CONTENT_SIZE], output2[CONTENT_SIZE];
//
//	fp1 = fopen("problem4-1.txt", "w");
//	fp2 = fopen("problem4-2.txt", "w");
//
//	printf("ù ��° ���ڿ��� �Է��ϼ��� : ");
//	scanf("%s", content1);
//
//	printf("�� ��° ���ڿ��� �Է��ϼ��� : ");
//	scanf("%s", content2);
//
//	fprintf(fp1, "%s", content1);
//	fprintf(fp2, "%s", content2);
//
//	fclose(fp1);
//	fclose(fp2);
//
//	fp1 = fopen("problem4-1.txt", "r");
//	fp2 = fopen("problem4-2.txt", "r");
//
//	fscanf(fp1, "%s", output1);
//	fscanf(fp2, "%s", output2);
//
//	printf("ù ��° ���ڿ� : %s\n", output1);
//	printf("�� ��° ���ڿ� : %s\n", output2);
//
//	fclose(fp1);
//	fclose(fp2);
//
//	return 0;
//}

// ���ϰ��� ����5
//#include <stdio.h>
//#include <string.h>
//
//#define CONTENT_SIZE 100
//
//int main()
//{
//	FILE* fp1, * fp2;
//	char content1[CONTENT_SIZE], content2[CONTENT_SIZE];
//	char output1[CONTENT_SIZE], output2[CONTENT_SIZE];
//
//	fp1 = fopen("problem5-1.txt", "w");
//	fp2 = fopen("problem5-2.txt", "w");
//
//	printf("ù ��° ���ڿ��� �Է��ϼ��� : ");
//	scanf("%s", content1);
//
//	printf("�� ��° ���ڿ��� �Է��ϼ��� : ");
//	scanf("%s", content2);
//
//	fprintf(fp1, "%s", content1);
//	fprintf(fp2, "%s", content2);
//
//	fclose(fp1);
//	fclose(fp2);
//
//	fp1 = fopen("problem5-1.txt", "r");
//	fp2 = fopen("problem5-2.txt", "r");
//
//	fscanf(fp1, "%s", output1);
//	fscanf(fp2, "%s", output2);
//
//	printf("ù ��° ���ڿ� : %s\n", output1);
//	printf("�� ��° ���ڿ� : %s\n\n", output2);
//
//	fclose(fp1);
//	fclose(fp2);
//
//	int contentLen_max = 0;
//	int count = 0;
//	if (strlen(output1) > strlen(output2))
//		contentLen_max = strlen(output1);
//	else
//		contentLen_max = strlen(output2);
//
//	for (int i = 0; i < contentLen_max; i++) {
//		if (output1[i] == output2[i])
//			count++;
//	}
//	printf("�� ���ڿ����� ���� ��ġ�� ���� ������ ���� : %d\n", count);
//
//	return 0;
//}

// ���ϰ��� ����4 ���
// �Լ� ����� �Լ��� ��ȯ�ϴ� ��,
// ��, �����Ͱ� ���� ���� ����Ű���� �����ϴ� ���� �߿��� ����
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//#define MAXENERGY 10
//
//void printenergy(int my)
//{
//	printf("�� ��� : ");
//	for (int i = 0; i < my; i++)
//		printf("��");
//	for (int i = my; i < MAXENERGY; i++)
//		printf("��");
//	printf("\n");
//}
//
//char* getAnswer()
//{
//	FILE* fp;
//	char Answer[100];
//	int n = 0;
//
//	fp = fopen("sentence.txt", "r");
//
//	// �ܾ� ���� ����
//	fscanf(fp, "%d", &n);
//
//	srand((unsigned int)time(NULL));
//	n = rand() % n + 1;
//
//	for (int i = 0; i < n; i++) {
//		fscanf(fp, "%s", Answer);
//	}
//
//	fclose(fp);
//
//	// Answer �����Ҵ�
//	char* p;
//	p = (char*)malloc(sizeof(char) * (strlen(Answer) + 1));
//	strcpy(p, Answer);
//
//	return p;
//}
//
//int main()
//{
//	// �ܾ� ���� ���� �ܰ�
//	char* answer = getAnswer();
//	int size = strlen(answer);
//	char* sentence;
//	sentence = (char*)malloc(sizeof(char) * (size + 1));
//	for (int i = 0; i < size; i++) {
//		sentence[i] = '_';
//	}
//	sentence[size] = '\0';
//
//	// ���� ���� �ܰ�
//	int energy = MAXENERGY;
//	char wrongAnswer[MAXENERGY] = {};
//	char input;
//	int wrongcount = 0;
//	while (1) {
//		printenergy(energy);
//		if (!energy) {
//			printf("���� ����...\n");
//			printf("���� : %s", answer);
//			break;
//		}
//		printf("���� : %s\n\n", sentence);
//
//		if (strcmp(sentence, answer) == 0) {
//			printf("���� �¸�!\n");
//			break;
//		}
//		printf("�ܾ ���纸���� : ");
//		scanf(" %c", &input);
//
//		bool check = true;
//		for (int i = 0; i < size; i++) {
//			if (answer[i] == input) {
//				sentence[i] = input;
//				check = false;
//			}
//		}
//		if (check) {
//			wrongAnswer[wrongcount] = input;
//			printf("Ʋ�� ���� : ");
//			for (int i = 0; i < MAXENERGY; i++) {
//				printf("%c ", wrongAnswer[i]);
//			}
//			printf("\n");
//			energy--;
//			wrongcount++;
//		}
//	}
//	free(answer);
//	free(sentence);
//
//	return 0;
//}

//// ���������� ����1, ����2, ����3
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//// ������������ ��Ģ �� ����
//#define GAWI 0
//#define BAWI 1
//#define BO 2
//#define WRONG -1
//
//// �º� �Ǵ� �� ����
//#define DRAW 2
//#define USER 1
//#define COMPUTER 0
//
//int whowhat(const char *who, int what)
//{
//	if (what == GAWI)
//		printf("%s : ����\n", who);
//	else if (what == BAWI)
//		printf("%s : ����\n", who);
//	else if (what == BO)
//		printf("%s : ��\n", who);
//	else
//		return WRONG;
//
//	return what;
//}
//
//int compare_victory(int com, int me)
//{
//	/*if (com == 0)
//		printf("��ǻ�� : ����\n\n");
//	else if (com == 1)
//		printf("��ǻ�� : ����\n\n");
//	else if (com == 2)
//		printf("��ǻ�� : ��\n\n");*/
//	whowhat("��ǻ��", com);
//
//	// Hint. com�� me�� �� ����� �м��غ���
//	/*if (com == 0)
//	{
//		if (me == 0) return 2;
//		else if (me == 1) return 1;
//		else if (me == 2) return 0;
//	}
//	else if (com == 1)
//	{
//		if (me == 0) return 0;
//		else if (me == 1) return 2;
//		else if (me == 2) return 1;
//	}
//	else if (com == 2)
//	{
//		if (me == 0) return 1;
//		else if (me == 1) return 0;
//		else if (me == 2) return 2;
//	}*/
//	int result = (me - com + 3) % 3;
//	if (result == 0) {
//		return DRAW; // ���
//	}
//	else if (result == 1) {
//		return USER; // ����� �̱�
//	}
//	else {
//		return COMPUTER; // ��ǻ�Ͱ� �̱�
//	}
//}
//
//int main()
//{
//	FILE* fp;
//
//	int com = 0;
//	int me = 0;
//	char ask_finish = 0;
//	int human = 0, computer = 0, draw = 0;
//	int tmp = 0;
//	srand(time(NULL));
//
//	// ���� ������ ��� �ҷ�����
//	fp = fopen("GameResult.txt", "r");
//
//	if (fp != NULL) {
//		fscanf(fp, "%d %d %d", &human, &computer, &draw);
//
//		fclose(fp);
//	}
//
//	while (true) {
//		com = rand() % 3;
//		printf("0 : ����, 1 : ����, 2 : ��\n����� �� ����? : ");
//		scanf("%d", &me);
//		/*if (me == 0) printf("��� : ����\n");
//		else if (me == 1) printf("��� : ����\n");
//		else if (me == 2) printf("��� : ��\n");
//		else {*/
//		if (whowhat("���", me) == WRONG) {
//			printf("\n��Ģ! �ٽ� �� �ּ���.\n\n");
//			continue;
//		}
//
//		tmp = compare_victory(com, me);
//		if (tmp == COMPUTER) {
//			printf("\n��ǻ�Ͱ� �̰���ϴ�.\n");
//			computer++;
//		}
//		else if (tmp == USER) {
//			printf("\n����� �̰���ϴ�.\n");
//			human++;
//		}
//		else if (tmp == DRAW) {
//			printf("\n�����ϴ�.\n");
//			draw++;
//		}
//
//		printf("\n����� �̱� Ƚ�� = %d, ", human);
//		printf("��ǻ�Ͱ� �̱� Ƚ�� = %d, ���� = %d\n\n", computer, draw);
//		printf("�ٽ� ������ �Ͻðڽ��ϱ�? (y/n) : ");
//
//		do {
//			ask_finish = (char)getchar();
//		} while (ask_finish == '\n');
//
//		if (ask_finish == 'n') {
//			break;
//		}
//		printf("\n\n");
//	}
//
//	fp = fopen("GameResult.txt", "w");
//	fprintf(fp, "%d %d %d", human, computer, draw);
//	fclose(fp);
//
//	return 0;
//}

// ���� ����1 -> ����3 -> ����4 -> ����5 (���õ� Ŭ������ �ٲ�)
#include <stdio.h>
#include "CStack.h"

int main()
{
	CStack st;
	st.top = 0;
	int choice;
	bool while_flag = true;

	st.load_stack();

	while (while_flag) {
		printf("[stack]\n1. push\n2. pop\n: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1: // push ��� = �Լ�
			st.push();
			break;
		case 2: // pop ��� = �Լ�
			st.pop();
			break;
		default:
			while_flag = false;
			break;
		}
		st.print_stack();
	}
	st.save_stack();

	return 0;

}