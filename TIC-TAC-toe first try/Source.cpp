#include<Windows.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
#define X 'X'
#define O 'O'
using namespace std;
char map[3][10] = {
	"(X)( )( )",
	"( )( )( )",
	"( )( )( )",
};
bool game_running = true;;
int y = 0, x = 1;
int main(){
	srand(time(0));
	while (game_running = true){
		system("cls");

		for (int display = 0; display < 3; display++){

			cout << map[display] << endl;

		}
		system("pause>nul");
		if (GetAsyncKeyState(VK_DOWN)){
			int y2 = y + 1;
			if (map[y2][x] == ' '){
				map[y][x] = ' ';
				y++;
				map[y][x] = 'X';
			}
		}
		if (GetAsyncKeyState(VK_UP)){
			int y2 = y - 1;
			if (map[y2][x] == ' '){
				map[y][x] = ' ';
				y--;
				map[y][x] = 'X';
			}
		}
		if (GetAsyncKeyState(VK_RIGHT)){
			 int x2 = x + 3;
			if (map[y][x2] == ' '){
				map[y][x] = ' ';
				x=x+3;
				map[y][x] = 'X';
			}
		}
		if (GetAsyncKeyState(VK_LEFT)){
			int x2 = x - 3;
			if (map[y][x2] == ' '){
				map[y][x] = ' ';
				x = x - 3;
				map[y][x] = 'X';
			}
		}
			if (GetAsyncKeyState(VK_SPACE)){
				map[x][y] = 'X';
				break;
			}

		}
	}
	system("pause");
}
