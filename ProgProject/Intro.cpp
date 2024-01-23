#pragma once
#include <iostream>
#include <Windows.h>
//#pragma comment (lib,"winmm.lib")
#include "C:\ProgProject\Gotoxy.cpp"
#include "C:\ProgProject\MainMenu.cpp"

void logo();
using namespace std;

void logo() {


	int box = 219, load = 175;

	system("color 1");//blue 
	//left side
	//PlaySound(TEXT("C:\\ProgProject\\intro_sound.wav"), NULL, SND_FILENAME | SND_ASYNC);

	Sleep(40);
	gotoxy(43, 7);
	cout << (char)box << (char)box;

	Sleep(40);
	gotoxy(72, 7);
	cout << (char)box << (char)box;

	Sleep(40);
	gotoxy(41, 8);
	cout << (char)box << (char)box << (char)box << (char)box;

	Sleep(40);
	gotoxy(72, 8);
	cout << (char)box << (char)box << (char)box << (char)box;

	Sleep(40);
	gotoxy(39, 9);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(40);
	gotoxy(72, 9);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(40);
	gotoxy(37, 10);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(40);
	gotoxy(72, 10);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(40);
	gotoxy(35, 11);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(40);
	gotoxy(72, 11);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(40);
	gotoxy(45, 11);
	cout << (char)box << (char)box << (char)box << (char)box << " BE FIT : LIFT IT " << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(40);
	gotoxy(72, 12);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(40);
	gotoxy(37, 12);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(40);
	gotoxy(72, 13);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(40);
	gotoxy(39, 13);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(40);
	gotoxy(72, 14);
	cout << (char)box << (char)box << (char)box << (char)box;

	Sleep(40);
	gotoxy(41, 14);
	cout << (char)box << (char)box << (char)box << (char)box;

	Sleep(40);
	gotoxy(72, 15);
	cout << (char)box << (char)box;

	Sleep(40);
	gotoxy(43, 15);
	cout << (char)box << (char)box;



	system("color 7"); //white

	Sleep(50);
	gotoxy(43, 7);
	cout << (char)box << (char)box;

	Sleep(50);
	gotoxy(72, 7);
	cout << (char)box << (char)box;

	Sleep(50);
	gotoxy(41, 8);
	cout << (char)box << (char)box << (char)box << (char)box;

	Sleep(50);
	gotoxy(72, 8);
	cout << (char)box << (char)box << (char)box << (char)box;

	Sleep(50);
	gotoxy(39, 9);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(50);
	gotoxy(72, 9);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(50);
	gotoxy(37, 10);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(50);
	gotoxy(72, 10);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(50);
	gotoxy(35, 11);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(50);
	gotoxy(72, 11);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(50);
	gotoxy(45, 11);
	cout << (char)box << (char)box << (char)box << (char)box << " BE FIT : LIFT IT " << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(50);
	gotoxy(72, 12);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(50);
	gotoxy(37, 12);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(50);
	gotoxy(72, 13);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(50);
	gotoxy(39, 13);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	Sleep(50);
	gotoxy(72, 14);
	cout << (char)box << (char)box << (char)box << (char)box;

	Sleep(50);
	gotoxy(41, 14);
	cout << (char)box << (char)box << (char)box << (char)box;

	Sleep(50);
	gotoxy(72, 15);
	cout << (char)box << (char)box;

	Sleep(50);
	gotoxy(43, 15);
	cout << (char)box << (char)box;

	Sleep(500);

	
	system("cls");
	home();
	cout << "\n \n \n \n \n ";
}

