#include <iostream>
#include <Windows.h>
#include <WinUser.h>


using namespace std;

int coordenada[8][8];
string casas[8][8];
string player = "X";
int x=0, y=7;
bool isMoving = true;
bool vof = true;

void Move() {
	
	
	if (GetKeyState(VK_LEFT)){
		if (casas[0][y] == player){
			isMoving = false;
		}
		else {
			x = x - 1;
			isMoving = true;
			casas[x][y] = player;
			cout << casas[x][y];
			isMoving = false;
		}

	}
	else if (GetKeyState(VK_RIGHT)){
		if (casas[7][y] == player) {
			isMoving = false;
		}
		else {
			x = x + 1;
			isMoving = true;
			casas[x][y] = player;
			cout << casas[x][y];
			isMoving = false;
		}
	}
	else if (GetKeyState(VK_UP)){
		if (casas[x][7] == player) {
			isMoving = false;
			
		}
		else {
			y = y + 1;
			isMoving = true;
			casas[x][y] = player;
			cout << casas[x][y];
			isMoving = false;
		}
	}
	else if (GetKeyState(VK_DOWN)){
		if (casas[x][0] == player) {
			isMoving = false;
		}
		else {
			y = y - 1;
			isMoving = true;
			casas[x][y] = player;
			cout << casas[x][y];
			isMoving = false;
		}
	}
	else {
		

	}

}

 int Casas(int x, int y) {
	int x1 = x;
	int y1 = y;

	if ((x1 == 0) & (y1 == 7)) {
		cout << "X";
	}
	else if ((x1 == 0) & (y1 == 6)) {
		cout << endl << "X";
	}
	else if ((x1 == 1) & (y1 == 7)) {
		cout << " " << "X";
	}
	else if ((x1 == 1) & (y1 == 6)) {
		cout << endl << " " << "X";
	}
	else if ((x1 == 0) & (y1 == 5)) {
		cout << endl << "X";
	}
	return x1, y1;

}


int main() {
	int i = 0;
	//for (x = 0; x < 8;) {
		//for (y = 0; y < 8; ) {
			//Move();
	string *pl;
	pl = new string;
	*pl = "X";
	Casas(x, y);
	while (true) {
		
		if (GetKeyState(VK_DOWN) & 0x8000) {
			y = y - 1;
			Casas(x, y);
			Sleep(300);
		}
		else {
			i = 0;
		}
		if (x == 7) {
			cout << endl;
		}
	}
		//}
	//}
	
	return 0;
}

