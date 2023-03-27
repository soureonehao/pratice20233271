#include<stdio.h>
void main() {
	int arr[3][3], i , j, sum = 0; //定义一个二维数组,存放矩阵
	printf("请输入一个二维数组作为3乘3矩阵，：\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf_s("%d", &arr[i][j]);	//输入数组
		}
	}
	printf("您的3乘3矩阵为：\n");
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

	printf("此3乘3矩阵主对角线元素之和为：%d", sum);
}