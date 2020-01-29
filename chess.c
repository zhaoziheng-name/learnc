#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// 交互菜单.
int Menu() {
	printf("==================\n");
	printf("欢迎来到三子棋游戏!\n");
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
	printf("==================\n");
	printf("请输入您的选择: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

#define MAX_ROW 3
#define MAX_COL 3

void Init(char chessBoard[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			chessBoard[row][col] = ' ';
		}
	}
	srand((unsigned int)time(0));
}

void Print(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("+---+---+---+\n");
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			// %c表示打印一个字符
			printf("| %c ", chessBoard[row][col]);
		}
		printf("|\n+---+---+---+\n");
	}
}

void PlayerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	// 玩家落子
	printf("玩家落子!\n");
	while (1) {
			printf("请输入您要落子的位置: ");
			int row = 0;
			int col = 0;
			scanf("%d %d", &row, &col);
			if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
				// 用户输入有误
				printf("您的输入有误!\n");
				continue;
			}
			if (chessBoard[row][col] != ' ') {
				printf("该位置已经有子了!\n");
				continue;
			}
			chessBoard[row][col] = 'X';
			break;
		}
	}
	
void ComputerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("电脑落子!\n");
	//产生一组随机数
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' ') {
			// 此处已经有子了,需要重新输入
			continue;
		}
		chessBoard[row][col] = 'O';
		break;
	}
}

// 棋盘满了返回 1, 否则返回 0
int IsFull(char chessBoard[MAX_ROW][MAX_COL]) {
	// 查找看是否有空格, 如果还有空格说明没满
	// 如果不存在空格, 就满了
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chessBoard[row][col] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}

// X 表示玩家赢了
// O 表示电脑赢了
// ' ' 表示胜负未分
// Q 表示和棋
char Check(char chessBoard[MAX_ROW][MAX_COL]) {
	// 1. 先检查所有行
	for (int row = 0; row < MAX_ROW; row++) {
		if (chessBoard[row][0] != ' '
			&& chessBoard[row][0] == chessBoard[row][1] 
			&& chessBoard[row][0] == chessBoard[row][2]) {
			return chessBoard[row][0];
		}
	}
	// 2. 再检查所有列
	for (int col = 0; col < MAX_COL; col++) {
		if (chessBoard[0][col] != ' '
			&& chessBoard[0][col] == chessBoard[1][col]
			&& chessBoard[0][col] == chessBoard[2][col]) {
			return chessBoard[0][col];
		}
	}
	// 3. 再检查对角线
	if (chessBoard[0][0] != ' '
		&& chessBoard[0][0] == chessBoard[1][1]
		&& chessBoard[0][0] == chessBoard[2][2]) {
		return chessBoard[0][0];
	}
	if (chessBoard[0][2] != ' '
		&& chessBoard[0][2] == chessBoard[1][1]
		&& chessBoard[0][2] == chessBoard[2][0]) {
		return chessBoard[0][2];
	}
	if (IsFull(chessBoard)) {
		return	'Q';
	}
	return ' ';
}

// 游戏函数,每执行一次,就进行了一局游戏.
void Game() {
	char chessBoard[MAX_ROW][MAX_COL];
	Init(chessBoard);
	// 1. 创建并初始化棋盘(每个位置都为空白)
	char winner = ' ';
	while (1) {
		// 2. 打印棋盘(第一次打印的是空白棋盘)
		Print(chessBoard);
		// 3. 玩家落子(通过输入坐标的方式制定位置)
		PlayerMove(chessBoard);
		// 4. 判读一下游戏是否结束
		winner = Check(chessBoard);
		if (winner != ' ') {
			break;
		}
		// 5. 电脑落子(随机落子)
		ComputerMove(chessBoard);
		// 6. 判断游戏是否结束
		winner = Check(chessBoard);
		if (winner != ' ') {
			break;
		}
	}
	Print(chessBoard);
	if (winner == 'X') {
		printf("恭喜你,你赢了!\n");
	}
	else if (winner == 'O') {
		printf("不好意思,你输了!\n");
	}
	else {
		printf("你和电脑55开!\n");
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