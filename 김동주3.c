#include <stdio.h>

int First_row(int number);
int Second_row(int number);
int Third_row(int number);
int Fourth_row(int number);
int Fifth_row(int number);

int main() {

	int number;

	while (1) {
		printf("숫자 <0~9> 하나를 입력하세요 : ");
		scanf_s("%d", &number);
		if (number > 9 || number < 0) {
			break;
		}
		First_row(number);
		Second_row(number);
		Third_row(number);
		Fourth_row(number);
		Fifth_row(number);
	}
	return 0;
}
int First_row(int number) {
	switch (number) {
	case 1:
		printf("  *\n");
		break;
	case 2:
	case 3:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 0:
		printf("***\n");
		break;
	default:
		printf("* *\n");
		break;
	}
	return 0;
}
int Second_row(int number) {
	switch (number) {
	case 1:
	case 2:
	case 3:
	case 7:
		printf("  *\n");
		break;
	case 4:
	case 8:
	case 9:
	case 0:
		printf("* *\n");
		break;
	default:
		printf("*  \n");
		break;
	}
	return 0;
}
int Third_row(int number) {
	switch (number) {
	case 1:
	case 7:
		printf("  *\n");
		break;
	case 0:
		printf("* *\n");
		break;
	default:
		printf("***\n");
		break;
	}
	return 0;
}
int Fourth_row(int number) {
	switch (number) {
	case 2:
		printf("*  \n");
		break;
	case 6:
	case 8:
	case 0:
		printf("* *\n");
		break;
	default:
		printf("  *\n");
		break;
	}
	return 0;
}
int Fifth_row(int number) {
	switch (number) {
	case 1:
	case 4:
	case 7:
		printf("  *\n");
		break;
	default:
		printf("***\n");
		break;
	}
	return 0;
}