#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_MAX_COUNT 10
int Menu() {
	printf("==================\n");
	printf("欢迎来到扫雷游戏!\n");
	printf("1. 开始游戏\n");
	printf("0. 结束游戏\n");
	printf("==================\n");
	printf("请输入您的选择: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Init(char showMap[MAX_ROW][MAX_COL],
	char mineMap[MAX_ROW][MAX_COL]) {
	// 1. 初始化showMap, 让每个位置都是 '*'
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			showMap[row][col] = '*';
		}
	}
	// 2. 初始化 mineMap, 先把所有位置都设为'0', 再随机产生若干个'1'
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
		printf("请输入要翻开的位置: ");
		scanf("%d %d", row, col);
		if (*row < 0 || *row >= MAX_ROW
			|| *col < 0 || *col >= MAX_COL) {
			printf("您的输入有误!\n");
			continue;
		}
		if (showMap[*row][*col] != '*') {
			printf("此位置已经翻开了!\n");
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
	// 要把整数 count 转成字符类型的数字
	showMap[row][col] = count + '0';
}

void Game() {
	// 1. 创建地图并初始化
	char showMap[MAX_ROW][MAX_COL];
	char mineMap[MAX_ROW][MAX_COL];
	Init(showMap, mineMap);
	int notMineCount = 0;
	while (1) {
		// 2. 打印地图
		// TODO 测试阶段使用
		Print(mineMap);
		printf("\n");
		Print(showMap);
		// 3. 玩家翻开指定位置(输入坐标)
		// 4. 对玩家的输入进行校验
		int row = 0;
		int col = 0;
		Input(showMap, &row, &col);
		// 5. 判断玩家是否踩雷了, 如果踩雷, 游戏直接失败
		if (mineMap[row][col] == '1') {
			Print(mineMap);
			printf("游戏失败!\n");
			break;
		}
		// 6. 如果翻开的是最后一个位置, 游戏胜利
		notMineCount++;
		if (notMineCount == MAX_ROW * MAX_COL - MINE_MAX_COUNT) {
			Print(mineMap);
			printf("游戏胜利!\n");
			break;
		}
		// 7. 游戏需要继续, 翻开的格子变成一个数字
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
			printf("您的输入有误!\n");
		}
	}
	system("pause");
	return 0;
}