#include <iostream>
#include "Coorxy.h"
#include "button.h"
#include <conio.h>

using namespace std;

int menu(int x) {
	system("cls");

	char a;

	if (x == 1) {
		int num = 1;

		coorxy(13, 7); cout << "Enroll a student";
		coorxy(19, 13); cout << "Back";

		for (int i = 0; i < 11;) {
			buttonxy(10, 5+i, 20, 3);
			i += 6;
		}

		buttonxy2(10, 5, 20, 3, 2);

		for (int i = 0;;) {

			coorxy(0, 0);  a = _getch();

			coorxy(35, 7); cout << string(15, ' ')<<flush;

			if (a == 72)num--;
			else if (a == 80)num++;

			if (num < 1) num = 2;
			else if (num > 2) num = 1;

			if (a == 13) {
				if (num == 2) {
					buttonxy2(10, 11, 20, 3, 1);
					Sleep(200);
					system("cls");
					break;
					return 0;
				}
				else {
					buttonxy2(10, 5, 20, 3, 1);
					Sleep(200);
					buttonxy(10, 5, 20, 3);
					coorxy(35, 7); cout << "Not yet done";
				}
			}

			for (int i = 0; i < 25; i++) { // erase selection
				coorxy(9, 4 + i); cout << string(1, ' ');
				coorxy(32, 4 + i); cout << string(1, ' ');
			}

			switch (num) {
			case 1: buttonxy2(10, 5, 20, 3, 2);
				break;
			case 2: buttonxy2(10, 11, 20, 3, 2);
				break;
			}

		}
	}
	else if (x == 2) {
		int num = 1;

		coorxy(18, 7); cout << "Search";
		coorxy(19, 13); cout << "Back";

		for (int i = 0; i < 11;) {
			buttonxy(10, 5 + i, 20, 3);
			i += 6;
		}

		buttonxy2(10, 5, 20, 3, 2);

		for (int i = 0;;) {

			coorxy(0, 0);  a = _getch();

			coorxy(35, 7); cout << string(15, ' ') << flush;

			if (a == 72)num--;
			else if (a == 80)num++;

			if (num < 1) num = 2;
			else if (num > 2) num = 1;

			if (a == 13) {
				if (num == 2) {
					buttonxy2(10, 11, 20, 3, 1);
					Sleep(200);
					system("cls");
					break;
					return 0;
				}
				else {
					buttonxy2(10, 5, 20, 3, 1);
					Sleep(200);
					buttonxy(10, 5, 20, 3);
					coorxy(35, 7); cout << "Not yet done";
				}
			}

			for (int i = 0; i < 25; i++) { // erase selection
				coorxy(9, 4 + i); cout << string(1, ' ');
				coorxy(32, 4 + i); cout << string(1, ' ');
			}

			switch (num) {
			case 1: buttonxy2(10, 5, 20, 3, 2);
				break;
			case 2: buttonxy2(10, 11, 20, 3, 2);
				break;
			}
		}

	}
	else if (x == 3) {
		char a;
		int num = 1;
		coorxy(19, 7); cout << "Back";
		buttonxy(10, 5, 20, 3);
		buttonxy2(10, 5, 20, 3, 2);
		
		do {
			coorxy(0,0); a = _getch();
		} while (a != 13);

		buttonxy2(10, 5, 20, 3, 1);
		Sleep(200);

	}

	return 0;
}


int main() {
	int num = 1;

	for (int i = 0; i < 24;) {
		buttonxy(48, 3 + i, 20, 3);
		i += 6;
	}

	buttonxy2(48, 3, 20, 3,2);

	for (int i = 0;;) {

		coorxy(54, 5); cout << "Enrollment";
		coorxy(55, 11); cout << "Records";
		coorxy(57, 17); cout << "Help";
		coorxy(57, 23); cout << "Exit";

		for (int i = 0; i < 24;) {
			buttonxy(48, 3 + i, 20, 3);
			i += 6;
		}
		coorxy(0, 0); char  a = _getch();


		if (a == 72) num--;
		else if (a == 80) num++;

		else if (a == 13) { // PRESSING ENTER KEY


			for (int i = 0; i < 25; i++) { // erase selection
				coorxy(9, 4 + i); cout << string(1, ' ');
				coorxy(32, 4 + i); cout << string(1, ' ');
			}

			if (num == 4) { // Pressed button
				buttonxy2(48, 21, 20, 3, 1);
				Sleep(250);
				system("cls");

				int exit = 0;
				int num = 1;
				

				for (int i = 0; i < 26;) {
					buttonxy(45+i, 11, 12, 1);
					i += 17;
				}

				buttonxy2(45, 11, 12, 1, 2);
				coorxy(55, 9); cout << "Are you sure?";
				coorxy(50, 12); cout << "Yes";
				coorxy(68, 12); cout << "No";

				char a;
				for (int i = 0;;) {
				coorxy(0, 0); a =_getch();

					if (a == 75)num--; // arrow key function
					else if (a == 77)num++;

					if (num < 1)num = 1;
					else if (num > 2) num = 2;

					if (a == 13) { // exit confirmation
						if (num == 2) {
							buttonxy2(62, 11, 12, 1,1);
							Sleep(200);
							system("cls");
							break;
						}
						else {
							exit = 1;
							buttonxy2(45, 11, 12, 1, 1);
							Sleep(200);
							system("cls");
							break;
						}
					}

					for (int i = 0;i<5;) { //erasing selection
						coorxy(43, 10+i); cout << string(40, ' ');
						i += 4;
						
					}
					switch (num) { // selection
					case 1:buttonxy2(45, 11, 12, 1,2);
						break;
					case 2:buttonxy2(62, 11, 12, 1, 2);
						break;
					}

				}
				if (exit == 1) { // exit
					break;
				}
			}
			else {

			switch (num) { // Pressed button
			case 1: buttonxy2(48, 3, 20, 3, 1);
					Sleep(200);
					break;
			case 2: buttonxy2(48, 9, 20, 3, 1);
					Sleep(200);
					break;
			case 3: buttonxy2(48, 15, 20, 3, 1);
					Sleep(200);
					break;
			default:
					break;
				}
			menu(num);
			system("cls");
			}
		}
		

		if (num < 1) num = 4;
		else if (num > 4) num = 1;

		for (int i = 0; i < 25; i++) { // erase selection
			coorxy(47, 2 + i); cout << string(1, ' ');
			coorxy(70, 2 + i); cout << string(1, ' ');
		}


		switch (num) {
		case 1: buttonxy2(48, 3, 20, 3,2);
			break;
		case 2:buttonxy2(48, 9, 20, 3,2);
			break;
		case 3:buttonxy2(48, 15, 20, 3,2);
			break;
		case 4:buttonxy2(48, 21, 20, 3,02);
			break;
		}
	}




	//coorxy(0, 29); system("pause");
}

