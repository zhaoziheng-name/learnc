#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_MAX_COUNT 10
int Menu() {
	printf("==================\n");
	printf("��ӭ����ɨ����Ϸ!\n");
	printf("1. ��ʼ��Ϸ\n");
	printf("0. ������Ϸ\n");
	printf("==================\n");
	printf("����������ѡ��: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Init(char showMap[MAX_ROW][MAX_COL],
	char mineMap[MAX_ROW][MAX_COL]) {
	// 1. ��ʼ��showMap, ��ÿ��λ�ö��� '*'
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			showMap[row][col] = '*';
		}
	}
	// 2. ��ʼ�� mineMap, �Ȱ�����λ�ö���Ϊ'0', ������������ɸ�'1'
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			mineMap[row][col] = '0';
		}
	}
	srand((unsigned int)time(0));
	int count = MINE_MAX_COUNT;
	while (count > 0) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (mineMap[row][col] == '1') {
			continue;
		}
		mineMap[row][col] = '1';
		count--;
	}
}

void Print(char showMap[MAX_ROW][MAX_COL]) {
	printf("  | ");
	for (int col = 0; col < MAX_COL; col++){
		printf("%d ", col);
	}
	printf("\n");
	printf("--+-------------------\n");
	for (int row = 0; row < MAX_ROW; row++) {
		printf(" %d| ", row);
		for (int col = 0; col < MAX_COL; col++) {
			printf("%c ",showMap[row][col]);
		}
		printf("\n");
	}
}

void Input(char showMap[MAX_ROW][MAX_COL],
			int* row, int* col) {
	while (1) {
		printf("������Ҫ������λ��: ");
		scanf("%d %d", row, col);
		if (*row < 0 || *row >= MAX_ROW
			|| *col < 0 || *col >= MAX_COL) {
			printf("������������!\n");
			continue;
		}
		if (showMap[*row][*col] != '*') {
			printf("��λ���Ѿ�������!\n");
			continue;
		}
		break;
	}
}

void Update(char showMap[MAX_ROW][MAX_COL],
			char mineMap[MAX_ROW][MAX_COL],
			int row, int col) {
	int count = 0;
	for (int r = row - 1; r <= row + 1; r++){
		for (int c = col - 1; c <= col + 1; c++) {
			if (row < 0 || row >= MAX_ROW
				|| col < 0 || col >= MAX_COL) {
				continue;
			}
			if (mineMap[r][c] == '1') {
				count++;
			}
		}
	}
	// Ҫ������ count ת���ַ����͵�����
	showMap[row][col] = count + '0';
}

void Game() {
	// 1. ������ͼ����ʼ��
	char showMap[MAX_ROW][MAX_COL];
	char mineMap[MAX_ROW][MAX_COL];
	Init(showMap, mineMap);
	int notMineCount = 0;
	while (1) {
		// 2. ��ӡ��ͼ
		// TODO ���Խ׶�ʹ��
		Print(mineMap);
		printf("\n");
		Print(showMap);
		// 3. ��ҷ���ָ��λ��(��������)
		// 4. ����ҵ��������У��
		int row = 0;
		int col = 0;
		Input(showMap, &row, &col);
		// 5. �ж�����Ƿ������, �������, ��Ϸֱ��ʧ��
		if (mineMap[row][col] == '1') {
			Print(mineMap);
			printf("��Ϸʧ��!\n");
			break;
		}
		// 6. ��������������һ��λ��, ��Ϸʤ��
		notMineCount++;
		if (notMineCount == MAX_ROW * MAX_COL - MINE_MAX_COUNT) {
			Print(mineMap);
			printf("��Ϸʤ��!\n");
			break;
		}
		// 7. ��Ϸ��Ҫ����, �����ĸ��ӱ��һ������
		Update(showMap, mineMap, row, col);
	}
}

int main() {
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		} else if (choice == 0) {
			printf("goodbye!\n");
			break;
		} else {
			printf("������������!\n");
		}
	}
	system("pause");
	return 0;
}