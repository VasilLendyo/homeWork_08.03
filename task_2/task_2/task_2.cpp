#include <iostream>
#include <windows.h>
using namespace std;


int main() {
	cout << "\t\tWelcome to the game \"Dices\"!" << endl;

	//Перевіряємо, чи гравець хоче почати гру
	char start;
	cout << "Are you ready to start?(y/n): ";
	cin >> start;

	if (start == 'n') {
		cout << "Ok, good bye!" << endl;
		return 0;
	}

	char q = ' ';
	while (q != 0) {
		//генерація випадкових чисел
		srand(time(NULL));

		//змінні для загальних очків
		int playerScore = 0, computerScore = 0;

		//Три раунда
		for (int i = 1; i <= 3; i++) {
			//хід гравця
			cout << "\tRAUND " << i << endl;
			cout << "Player, roll the dices(press \"Enter\" to roll)..." << endl;
			cin.get();

			int playerRoll1 = rand() % 6 + 1;
			Sleep(2000);
			switch (playerRoll1) {
			case 1:
				cout << " ------- " << endl;
				cout << "|       |" << endl;
				cout << "|   *   |" << endl;
				cout << "|       |" << endl;
				cout << " ------- " << endl;
				break;
			case 2:
				cout << " ------- " << endl;
				cout << "| *     |" << endl;
				cout << "|       |" << endl;
				cout << "|     * |" << endl;
				cout << " ------- " << endl;
				break;
			case 3:
				cout << " ------- " << endl;
				cout << "| *     |" << endl;
				cout << "|   *   |" << endl;
				cout << "|     * |" << endl;
				cout << " ------- " << endl;
				break;
			case 4:
				cout << " ------- " << endl;
				cout << "| *   * |" << endl;
				cout << "|       |" << endl;
				cout << "| *   * |" << endl;
				cout << " ------- " << endl;
				break;
			case 5:
				cout << " ------- " << endl;
				cout << "| *   * |" << endl;
				cout << "|   *   |" << endl;
				cout << "| *   * |" << endl;
				cout << " ------- " << endl;
				break;
			case 6:
				cout << " ------- " << endl;
				cout << "| *   * |" << endl;
				cout << "| *   * |" << endl;
				cout << "| *   * |" << endl;
				cout << " ------- " << endl;
				break;
			}
			int playerRoll2 = rand() % 6 + 1;
			Sleep(1000);
			switch (playerRoll2) {
			case 1:
				cout << " ------- " << endl;
				cout << "|       |" << endl;
				cout << "|   *   |" << endl;
				cout << "|       |" << endl;
				cout << " ------- " << endl;
				break;
			case 2:
				cout << " ------- " << endl;
				cout << "| *     |" << endl;
				cout << "|       |" << endl;
				cout << "|     * |" << endl;
				cout << " ------- " << endl;
				break;
			case 3:
				cout << " ------- " << endl;
				cout << "| *     |" << endl;
				cout << "|   *   |" << endl;
				cout << "|     * |" << endl;
				cout << " ------- " << endl;
				break;
			case 4:
				cout << " ------- " << endl;
				cout << "| *   * |" << endl;
				cout << "|       |" << endl;
				cout << "| *   * |" << endl;
				cout << " ------- " << endl;
				break;
			case 5:
				cout << " ------- " << endl;
				cout << "| *   * |" << endl;
				cout << "|   *   |" << endl;
				cout << "| *   * |" << endl;
				cout << " ------- " << endl;
				break;
			case 6:
				cout << " ------- " << endl;
				cout << "| *   * |" << endl;
				cout << "| *   * |" << endl;
				cout << "| *   * |" << endl;
				cout << " ------- " << endl;
				break;
			}
			int playerRaundScore = playerRoll1 + playerRoll2;

			Sleep(1000);
			cout << "You rolled: " << playerRoll1 << " and " << playerRoll2 << endl << endl;

			//хід компютера
			cout << "The computer rolls the dices..." << endl;
			int computerRoll1 = rand() % 6 + 1;
			Sleep(2000);
			switch (computerRoll1) {
			case 1:
				cout << " ------- " << endl;
				cout << "|       |" << endl;
				cout << "|   *   |" << endl;
				cout << "|       |" << endl;
				cout << " ------- " << endl;
				break;
			case 2:
				cout << " ------- " << endl;
				cout << "| *     |" << endl;
				cout << "|       |" << endl;
				cout << "|     * |" << endl;
				cout << " ------- " << endl;
				break;
			case 3:
				cout << " ------- " << endl;
				cout << "| *     |" << endl;
				cout << "|   *   |" << endl;
				cout << "|     * |" << endl;
				cout << " ------- " << endl;
				break;
			case 4:
				cout << " ------- " << endl;
				cout << "| *   * |" << endl;
				cout << "|       |" << endl;
				cout << "| *   * |" << endl;
				cout << " ------- " << endl;
				break;
			case 5:
				cout << " ------- " << endl;
				cout << "| *   * |" << endl;
				cout << "|   *   |" << endl;
				cout << "| *   * |" << endl;
				cout << " ------- " << endl;
				break;
			case 6:
				cout << " ------- " << endl;
				cout << "| *   * |" << endl;
				cout << "| *   * |" << endl;
				cout << "| *   * |" << endl;
				cout << " ------- " << endl;
				break;
			}
			int computerRoll2 = rand() % 6 + 1;
			Sleep(1000);
			switch (computerRoll2) {
			case 1:
				cout << " ------- " << endl;
				cout << "|       |" << endl;
				cout << "|   *   |" << endl;
				cout << "|       |" << endl;
				cout << " ------- " << endl;
				break;
			case 2:
				cout << " ------- " << endl;
				cout << "| *     |" << endl;
				cout << "|       |" << endl;
				cout << "|     * |" << endl;
				cout << " ------- " << endl;
				break;
			case 3:
				cout << " ------- " << endl;
				cout << "| *     |" << endl;
				cout << "|   *   |" << endl;
				cout << "|     * |" << endl;
				cout << " ------- " << endl;
				break;
			case 4:
				cout << " ------- " << endl;
				cout << "| *   * |" << endl;
				cout << "|       |" << endl;
				cout << "| *   * |" << endl;
				cout << " ------- " << endl;
				break;
			case 5:
				cout << " ------- " << endl;
				cout << "| *   * |" << endl;
				cout << "|   *   |" << endl;
				cout << "| *   * |" << endl;
				cout << " ------- " << endl;
				break;
			case 6:
				cout << " ------- " << endl;
				cout << "| *   * |" << endl;
				cout << "| *   * |" << endl;
				cout << "| *   * |" << endl;
				cout << " ------- " << endl;
				break;
			}
			int computerRaundScore = computerRoll1 + computerRoll2;

			Sleep(1000);
			cout << "The computer rolled: " << computerRoll1 << " and " << computerRoll2 << endl;
			Sleep(1000);

			//Обчислюємо результать раунду
			if (playerRaundScore > computerRaundScore) {
				playerScore++;
				cout << "You win this raund!" << endl;
			}
			else if (playerRaundScore < computerRaundScore) {
				computerScore++;
				cout << "The computer won this raund!" << endl;
			}
			else {
				cout << "Draw in this raund" << endl;
			}

			//Виводимо поточний рахунок
			cout << "Current score: Player - " << playerScore << ", Computer - " << computerScore << endl << endl;
		}


		//Виводимо загальний результат
		if (playerScore > computerScore) {
			cout << "Congratulation!!! You won" << endl;
		}
		else if (playerScore < computerScore) {
			cout << "The computer won" << endl;
		}
		else {
			cout << "The game ended in a draw" << endl;
		}

		cout << "\nDo you want to try again?(y/n)";
		cin >> q;

		if (q == 'n') {
			q = 0;
		}
	}
}