#include<stdio.h>

int main_m_array(void) {
	//Multidimensional Array

	//int i;
	////��
	//
	//int arr1[5];
	////����������
	////[1][2][3][4][5]
	//
	//int arr2[2][5];
	////����������
	////����������
	////[0.1][0.2][0.3][0.4][0.5] -> arr2[0][0] arr2[0][1]
	////[1.1][1.2][1.3][1.4][1.5] -> arr2[1][3]
	//
	//int arr3[4][2];
	////����	[0,0][0,1] -> arr3[0][0]
	////����	[1,0][1,1] -> arr3[1][0]
	////����	[2,0][2,1]
	////����	[3,0][3,1]
	//
	//int arr4[3][3][3];
	////������	000 001 002
	////������	010 011 012
	////������	020 021 022
	//
	////������	100 101 102
	////������	110 111 112
	////������	120 121 122
	//
	////������	200 201 202
	////������	210 211 212
	////������	220 221 222

	int arr[5] = { 0,1,2,3,4 };
	for (int i = 0; i < 5; i++)
		printf("1���� �迭 (%d)�� �� : %d\n",i, i);
	int arr2[2][5] = {
		{0,1,2,3,4},
		{5,6,7,8,9} };
	printf("\n");
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 5; j++)
			printf("2���� �迭 (%d, %d)�� �� : %d\n", i, j, arr2[i][j]);
	int arr3[4][2] = {
		{ 0,1 }, 
		{ 2,3 }, 
		{ 4,5 }, 
		{ 6,7 } 
	};
	printf("\n");
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 2; j++)
			printf("2���� �迭 (%d, %d)�� �� : %d\n", i, j, arr3[i][j]);
	int arr4[3][3][3] = { 
		{
			{0,1,2}, 
			{3,4,5},
			{6,7,8}
		},
		{
			{10,11,12}, 
			{13,14,15}, 
			{16,17,18}
		},
		{
			{20,21,22}, 
			{23,24,25}, 
			{26,27,28}
		} 
	};
	printf("\n");
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			for (int k = 0; k < 3; k++)
				printf("3���� �迭 (%d,%d, %d)�� �� : %d\n", i, j, k, arr4[i][j][k]);
	return 0;
}