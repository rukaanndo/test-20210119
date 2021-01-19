
#include<iostream>
#include <stdio.h>
using namespace std;

void lose()
{
	cout << "プレイヤー2の勝利です" << endl;
}
void win()
{
	cout << "プレイヤー1の勝利です" << endl;
}
int judge(int player1, int player2) {
	if (player1 == 0 && player2 == 1) {
		return -1;
	}
	else if (player1 == 1 && player2 == 2)
	{
		return-1;
	}
	else if (player1 == 2 && player2 == 0) {
		return -1;
	}
	else if (player1 == 1 && player2 == 0) {
		return 1;
	}
	else if (player1 == 2 && player2 == 1) {
		return 1;
	}
	else if (player1 == 0 && player2 == 2) {
		return 1;
	}
	else if (player1 == player2) {
		return 0;
	}
}
int main()
{
	int player1 = 0;
	int player2 = 0;
	int draw = 0;
	int next = 0;
	cout << "Eカードの説明をします。次の説明へ行くにはEnterを押してください" << endl;
	next = getchar();
	cout << "5枚1組のデッキが2つあり、市民が4枚、皇帝が1枚入っているデッキと、市民が4枚、奴隷が1枚はいっているデッキで遊びます。" << endl;
	next = getchar();
	cout << "皇帝は市民に強く、市民は奴隷に強く、奴隷は皇帝に強いです、" << endl;
	next = getchar();
	cout << "皇帝や奴隷のようなスペシャルカードは一度しか出せません" << endl;
	next = getchar();
	cout << "皇帝のデッキ(プレイヤー1)を選ぶと奴隷は選べませんし、奴隷のデッキ()では皇帝を選ぶことは出来ません" << endl;
	next = getchar();
	cout << "ソレではデッキを決め勝負を開始してください。" << endl;
	next = getchar();
	while (true) {

		cout << "プレイヤー1は何を出す？　0：皇帝　1：市民　" << endl;
		cin >> player1;
		cout << "プレイヤー2は何を出す？　1：市民　2：奴隷　" << endl;
		cin >> player2;
		if (player1 == 0) {
			cout << "プレイヤー1は皇帝を出しました" << endl;
		}
		else if (player1 == 1) {
			cout << "プレイヤー1は市民を出しました" << endl;
		}
		else if (player1 == 2) {
			cout << "プレイヤー1は奴隷を出しました" << endl;
		}
		if (player2 == 0) {
			cout << "プレイヤー2は皇帝を出しました" << endl;
		}
		else if (player2 == 1) {
			cout << "プレイヤー2は市民を出しました" << endl;
		}
		else if (player2 == 2) {
			cout << "プレイヤー2は奴隷を出しました" << endl;
		}
		if (judge(player2, player1) == -1) {
			cout << "プレイヤー2の勝利" << endl;
			break;
		}
		else if (judge(player2, player1) == 1) {
			cout << "プレイヤー1の勝利" << endl;
			break;
		}
		else
		{
			cout << "次の手をどうぞ" << endl;
			cout << "残りのカード枚数は" << 4 - draw << "枚です" << endl;
			++draw;
			continue;
		}
	}
}
