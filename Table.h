#pragma once
#include "Coorxy.h"
#include <iostream>

using namespace std;

void table() {

	int n = 0;
	int space = 0;
	for (int i = 0; i < 5; i++) { // Name to birth date table
		coorxy(3, 6 + n); cout << string(114, char(196));
		n += 2;
		coorxy(4, 12); cout << string(112, char(196));
		coorxy(3, 28); cout << string(114, char(196));
	}
	for (int j = 0; j < 21; j++) {
		coorxy(3, 7 + j); cout << string(1, char(179));
		coorxy(116, 7 + j); cout << string(1, char(179));
	}
	n = 0;
	for (int i = 0; i < 3; i++) { // Address table
		coorxy(16, 16 + n); cout << string(100, char(196));
		n += 2;
		coorxy(4, 22); cout << string(112, char(196));

		for (int j = 0; j < 7; j++) {
			coorxy(15, 15 + j); cout << char(179);
		}
	}
	n = 0;
	for (int i = 0; i < 3; i++) { // Guardian Table
		coorxy(16, 24 + n); cout << string(100, char(196));
		n += 2;
	}
	for (int i = 0; i < 6; i++) {
		coorxy(15, 22 + i); cout << char(179);
	}
	n = 0;
	for (int i = 0; i < 2; i++) { // search bar
		coorxy(3, 2 + n); cout << string(114, char(196));
		n += 2;
	}


	coorxy(3, 3); cout << char(179) << " Search Pooling number " << char(179) << " :"; coorxy(116, 3); cout << char(179);
	coorxy(5, 7); cout << "First name " << char(179) << ":";
	coorxy(40, 7); cout << char(179) << " Middle name " << char(179) << ":";
	coorxy(78, 7); cout << char(179) << " Last name " << char(179) << ":";
	coorxy(5, 9); cout << "Age " << char(179) << ":";
	coorxy(5, 11); cout << "Gender " << char(179) << ":"; coorxy(47, 11); cout << char(179) << " LRN " << char(179) << ":";
	coorxy(4, 13); cout << "Birth date " << char(179);
	coorxy(17, 13); cout << "Month " << char(179) << ":";
	coorxy(47, 13); cout << char(179) << " Day " << char(179) << ":";
	coorxy(83, 13); cout << char(179) << " Year " << char(179) << ":";
	coorxy(6, 15); cout << "Address ";
	coorxy(17, 15); cout << "Barangay " << char(179) << ":";
	coorxy(17, 17); cout << "Municipality "; cout << char(179) << ":";
	coorxy(17, 19); cout << "Province " << char(179) << ":";
	coorxy(17, 21); cout << "Postal / Zip code " << char(179) << ":"; // youre at guardian
	coorxy(6, 23); cout << "Guardian";
	coorxy(17, 23); cout << "First name " << char(179) << ":";
	coorxy(48, 23); cout << char(179) << " Middle name " << char(179) << ":";
	coorxy(82, 23); cout << char(179) << " Last name " << char(179) << ":";
	coorxy(17, 25); cout << "Contact number " << char(179) << ":";
	coorxy(17, 27); cout << "Relation " << char(179) << ":";


	//coorxy(0, 29); system("pause");
	//system("cls");



	//int n = 0;
	//int space = 0;
	//for (int i = 0; i < 3;i++) { // Name to birth date
	//	coorxy(3, 1+n); cout << string(114, char(196));
	//	n += 2;
	//	coorxy(4, 7); cout << string(112, char(196));
	//	for (int j = 0; j < 25; j++) {
	//		coorxy(3, 2 + j); cout << string(1, char(179));
	//		coorxy(116, 2 + j); cout << string(1, char(179));
	//	}
	//}
	//n = 0;
	//for (int i = 0; i < 3; i++) { // Address
	//	coorxy(16, 9 + n); cout << string(100,char(196));
	//	n += 2;
	//	coorxy(4, 15); cout << string(112, char(196));
	//	for (int j = 0; j < 7; j++) {
	//		coorxy(15, 8+j); cout << char(179);
	//	}
	//}


}