#include<stdio.h>
void main() {
	int arr[3][3], i , j, sum = 0; //����һ����ά����,��ž���
	printf("������һ����ά������Ϊ3��3���󣬣�\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf_s("%d", &arr[i][j]);	//��������
		}
	}
	printf("����3��3����Ϊ��\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (j == i) {
				sum += arr[i][j];
				
			}
		}
		printf("\n");
	}

	printf("��3��3�������Խ���Ԫ��֮��Ϊ��%d", sum);
}