#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <WinUser.h>

#define HEIGHT 10
#define WIDTH 20

using namespace std;


int x=5, y=6;
bool isMoving = true;


void Move() {
	
}

void board() {
	
	for (int i = 0; i < HEIGHT; i++) {
		cout << "\t\t#";
		for (int j = 0; j < WIDTH; j++) {
			if (i == 0 || i == HEIGHT - 1) cout << '#';
			else if (i == y && j == x) cout << '0';
			else cout << ' ';
		}
		cout << "#\n";
	}

}

int main() {

    board();
	
	while (true) {
		
		
		if (GetKeyState(VK_DOWN) & 0x8000) {
			y = y + 1;
			system("cls");
			board();
			Sleep(150);
		}
		if (GetKeyState(VK_UP) & 0x8000) {
			y = y - 1;
			system("cls");
			board();
			Sleep(150);
		}
		if (GetKeyState(VK_LEFT) & 0x8000) {
			x = x - 1;
			system("cls");
			board();
			
			Sleep(150);
		}
		if (GetKeyState(VK_RIGHT) & 0x8000) {
			x = x + 1;
			system("cls");
			board();
			Sleep(150);
		}
		
	}
	
	return 0;
}

