#pragma once
#include "C:\ProgProject\Gotoxy.cpp"
#include "C:\ProgProject\Time.cpp"
#include <iostream>
#include <string.h>
#include <conio.h>


HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;
char charac;
string user, password, password2, name, gender, municipality;
int choice, weight, height, age;

void logo2();
void border();
void home();
void addinfo();
void help();
void receipt();
void membership();
void exit();

void logo2() {
	SetConsoleTextAttribute(hConsole, 1);
	int box = 219;


	gotoxy(115, 10);
	cout << (char)box << (char)box << (char)box;
	gotoxy(115, 11);
	cout << (char)box << (char)box << (char)box;

	gotoxy(113, 12);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box;
	gotoxy(113, 13);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box;

	gotoxy(111, 14);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;
	gotoxy(111, 15);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	gotoxy(109, 16);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;
	gotoxy(109, 17);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	gotoxy(107, 18);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;
	gotoxy(107, 19);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	gotoxy(109, 20);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;
	gotoxy(109, 21);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	gotoxy(111, 22);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;
	gotoxy(111, 23);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box << (char)box;

	gotoxy(113, 24);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box;
	gotoxy(113, 25);
	cout << (char)box << (char)box << (char)box << (char)box << (char)box;

	gotoxy(115, 26);
	cout << (char)box << (char)box << (char)box;
	gotoxy(115, 27);
	cout << (char)box << (char)box << (char)box;


	SetConsoleTextAttribute(hConsole, 7);
}

void border() {
	SetConsoleTextAttribute(hConsole, 7);
	int x = 0, y = 0;

	for (int i = 0; i < 120; i++)
	{
		gotoxy(x, y);
		cout << char(223);
		x += 1;
	}
	x = 0, y = 29;
	for (int i = 0; i < 120; i++)
	{
		gotoxy(x, y);
		cout << char(220);
		x += 1;
	}

}

void home() {

	int choice;
	int x = 0;
	SetConsoleTextAttribute(hConsole, 7);
	for (int i = 0; i <= 119; i++)
	{
		gotoxy(x, 2);
		cout << char(220);
		x += 1;
	}
	gotoxy(2, 1);
	cout << "Be Fit : Lift It";
	SetConsoleTextAttribute(hConsole, 1);
	gotoxy(100, 1);
	cout << "Home  ";
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Help  ";
	cout << "Exit" << endl;

	logo2();

	gotoxy(6, 5);
	cout << "                            __         ___             __        __";
	gotoxy(6, 6);
	cout << "            |  | |\\  | |   |      /\\  /___  | |   \\ / |  | |  | |  /";
	gotoxy(6, 7);
	cout << "            |  | | \\ | |   |--   /--\\     \\ |_|    |  |  | |  | |--";
	gotoxy(6, 8);
	cout << "            |__| |  \\| |__ |__  /    \\ ___/ | |    |  |__| |__| |  \\" << endl << endl;
	
	SetConsoleTextAttribute(hConsole, 7);
	cout << "   ________   _________  ________  _______  ________   ________ _________  ___  ___" << endl;
	SetConsoleTextAttribute(hConsole, 1);
	cout << "  | ";
	SetConsoleTextAttribute(hConsole, 7);
	cout << "\\   ___\\ ";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "|";
	SetConsoleTextAttribute(hConsole, 7);
	cout << "\\___   ___\\\\   __  \\";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "|";
	SetConsoleTextAttribute(hConsole, 7);
	cout << "\\  ____\\";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "|";
	SetConsoleTextAttribute(hConsole, 7);
	cout << "\\   ___  \\";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "|";
	SetConsoleTextAttribute(hConsole, 7);
	cout << "\\   ____\\\\____   __\\\\  \\";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "|";
	SetConsoleTextAttribute(hConsole, 7);
	cout << "\\  \\ " << endl;

	SetConsoleTextAttribute(hConsole, 1);
	cout << "   \\";
	SetConsoleTextAttribute(hConsole, 7);
	cout << " \\  \\___";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "|\\ |___";
	SetConsoleTextAttribute(hConsole, 7);
	cout << "\\  \\";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "_\\";
	SetConsoleTextAttribute(hConsole, 7);
	cout << " \\  \\ ";
	cout << "\\  \\ \\ \\___";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "/\\";
	SetConsoleTextAttribute(hConsole, 7);
	cout << " \\  \\";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "\\ ";
	SetConsoleTextAttribute(hConsole, 7);
	cout << "\\  \\ \\  \\";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "___/";
	SetConsoleTextAttribute(hConsole, 1);
	cout << " |__";
	SetConsoleTextAttribute(hConsole, 7);
	cout << " \\  \\";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "_\\ ";
	SetConsoleTextAttribute(hConsole, 7);
	cout << "\\  \\";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "\\";
	SetConsoleTextAttribute(hConsole, 7);
	cout << "\\  \\ " << endl;


	cout << "    \\"" \\_____  \\   \\ \\  \\ \\ \\   _  _\\ \\  _\\  \\ \\  \\\\ \\  \\ \\  \\  ___  \\ \\  \\ \\ \\   __  \\ " << endl;


	cout << "     \\|____|""\\  \\   \\ \\  \\ \\ \\  \\\\  \\\\ \\ \\""/""__ \\ \\  \\\\ \\  \\ \\  \\|\\  \\  \\ \\  \\ \\ \\  \\ \\  \\ " << endl;

	SetConsoleTextAttribute(hConsole, 7);
	cout << "       ____";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "\\";
	SetConsoleTextAttribute(hConsole, 7);
	cout << "_\\  \\   ";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "\\";
	SetConsoleTextAttribute(hConsole, 7);
	cout << " \\__\\ ";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "\\";
	SetConsoleTextAttribute(hConsole, 7);
	cout << " \\__";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "\\";
	SetConsoleTextAttribute(hConsole, 7);
	cout << "\\ _\\";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "\\";
	SetConsoleTextAttribute(hConsole, 7);
	cout << " \\______";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "\\";
	SetConsoleTextAttribute(hConsole, 7);
	cout << " \\__\\";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "\\";
	SetConsoleTextAttribute(hConsole, 7);
	cout << " \\__\\ \\_______\\  ";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "\\";
	SetConsoleTextAttribute(hConsole, 7);
	cout << " \\__\\ ";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "\\";
	SetConsoleTextAttribute(hConsole, 7);
	cout << " \\__\\ \\__\\ " << endl;

	SetConsoleTextAttribute(hConsole, 1);
	cout << "      |";
	SetConsoleTextAttribute(hConsole, 7);
	cout << "\\_________\\   ";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "\\|__|  \\|__|\\|__|\\|_______|\\|__| \\|__|\\|_______|  \\|__|  \\|__|\\|__| " << endl;

	cout << "      \\|_________| " << endl;

	border();
	

	SetConsoleTextAttribute(hConsole, 7);
	gotoxy(26, 21);
	cout << ":::::::::::::::::::::::::::::::::::::: " << endl;
	gotoxy(26, 22);
	cout << "::                                  ::" << endl;
	gotoxy(26, 23);
	cout << ":::::::::::::::::::::::::::::::::::::: " << endl;

	

	gotoxy(32, 20);
	cout << "Where would you like to go?  " << endl;
	gotoxy(10, 24);
	cout << " [1] Add Information || [2] Computation (Membership) || [3] Help || [4] Exit";
	gotoxy(13, 25);
	cout << " Kindly Register First (Add Information) || Choose from 1 - 4 only.";
	gotoxy(40, 22);
	cin >> choice;

	switch (choice)
	{
	case 1:
		system("cls");
		addinfo();
		break;
	case 2:
		system("cls");
		membership();	
		break;
	case 3:
		system("cls");
		help();
		break;
	case 4:
		system("cls");
		exit();
		break;
	default:
		break;
	}


}

void addinfo() {

	border();
	int x = 0;
	for (int i = 0; i <= 119; i++)
	{
		gotoxy(x, 2);
		cout << char(220);
		x += 1;
	}
	SetConsoleTextAttribute(hConsole, 7);
	gotoxy(2, 1);
	cout << "Be Fit : Lift It";
	SetConsoleTextAttribute(hConsole, 1);
	gotoxy(98, 1);
	cout << "Add Info  ";
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Help  ";
	cout << "Exit" << endl;

	logo2();


	gotoxy(10, 8);
	cout << "Enter your Given Name (Angelica) : ";
	cin >> name;
	gotoxy(10, 11);
	cout << "Enter your Age (18) : ";
	cin >> age;
	gotoxy(10, 14);
	cout << "Enter your Gender (Female|Male|Other) : ";
	cin >> gender;
	gotoxy(10, 17);
	cout << "Municipality (Paombong): ";
	cin >> municipality;
	gotoxy(10, 19);
	cout << "Weight in kg (42): ";
	cin >> weight;
	gotoxy(10, 21);
	cout << "Height in cm (155): ";
	cin >> height;

again:
	Sleep(500);
	system("cls");
	 x = 0;
	for (int i = 0; i <= 119; i++)
	{
		gotoxy(x, 2);
		cout << char(220);
		x += 1;
	}
	SetConsoleTextAttribute(hConsole, 7);
	gotoxy(2, 1);
	cout << "Be Fit : Lift It";
	SetConsoleTextAttribute(hConsole, 1);
	gotoxy(98, 1);
	cout << "Add Info  ";
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Help  ";
	cout << "Exit" << endl;
	border();


	logo2();
	
	//enter username and password
	gotoxy(10, 8);
	cout << "Enter Username: ";
	cin >> user;
	gotoxy(10, 10);
	cout << "Enter Password: ";
	while ((charac = _getch()) != '\r') {
		if (charac == '\b') {
			if (password.length() > 0) {
				password.pop_back();
				cout << "\b \b";
			}
		}
		else {
			password.push_back(charac);
			cout << "*";
		}
	}

	gotoxy(10, 12);
	cout << "Re-enter Password: ";
	while ((charac = _getch()) != '\r') {
		if (charac == '\b') {
			if (password2.length() > 0) {
				password2.pop_back();
				cout << "\b \b";
			}
		}
		else {
			password2.push_back(charac);
			cout << "*";
		}
	} if (password == password2) {
		
		gotoxy(10, 15);
		cout << "Thank You for Signing Up! Redirecting to Home Page.";
		Sleep(1000);
		system("cls");
		home();
		
	}
	else {
		gotoxy(10, 15);
		cout << "Password doesn't match.";
		password = "";
		password2 = "";
		goto again;
	}
	cout << "\n \n \n ";
	system("pause");
}

void help() {

	SetConsoleTextAttribute(hConsole, 7);
	int x = 0, y = 0;
	for (int i = 0; i <= 119; i++)
	{
		gotoxy(x, 2);
		cout << char(220);
		x += 1;
	}
	border();

	gotoxy(2, 1);
	cout << "Be Fit : Lift It";
	gotoxy(100, 1);
	cout << "Home  ";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "Help  ";
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Exit" << endl;
	
	SetConsoleTextAttribute(hConsole, 1);
	gotoxy(57, 3);
	cout << "About" << endl << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "     Be Fit : Lift It provides a variety of exercise options, including group fitness classes, ";
	cout << "personal training sessions, weightlifting, and cardio machines. ";
	cout << "Modern facilities and equipment in the gym guarantee you have all you need for an excellent exercise." ;
	cout << "They also have a group of qualified and experienced trainers on staff that are eager";
	cout << "to assist you in achieving your fitness objectives." << endl;

	//1st line
	 x = 0, y = 10;
	for (int i = 0; i <= 119; i++)
	{
		gotoxy(x, y);
		cout << char(196);
		x += 1;
	}
	gotoxy(54, 11);
	SetConsoleTextAttribute(hConsole, 1);
	cout << "How To Use?" << endl;
	SetConsoleTextAttribute(hConsole, 7);
	gotoxy(1, 13);
	cout << "1. Home - Press [1] to add your information before going to [2] for membership.";
	gotoxy(1, 14);
	cout << "2. When finished, Proceed to [2] for membership form.";
	gotoxy(1, 15);
	cout << "2.1 Choose from the given example presented on your screen.";
	gotoxy(1, 16);
	cout << "2.2 Take a picture of the receipt and present it at the counter for payment.";
	gotoxy(1, 17);
	cout << "Happy Workout!";
	//2nd line
	x = 0, y = 20;
	for (int i = 0; i <= 119; i++)
	{
		gotoxy(x, y);
		cout << char(196);
		x += 1;
	}
	gotoxy(52, 21);
	SetConsoleTextAttribute(hConsole, 1);
	cout << "About the Author" << endl << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Angelica DP. Jacob" << endl;
	cout << "1st Year college student at Bulacan State University - Hagonoy Campus" << endl;
	cout << "Bachelor of Science in Information Technology" << endl << endl;

	system("pause");
	system("cls");
	home();
	
}

void receipt() {

	int x = 83, y = 5;

	//top
	for (int i = 0; i < 37; i++)
	{
		gotoxy(x, y);
		cout << char(220);
		x += 1;
	}
	//bottom
	x = 83, y = 25;
	for (int i = 0; i < 37; i++)
	{
		gotoxy(x, y);
		cout << char(223);
		x += 1;
	}
	//sides
	x = 83, y = 6;
	for (int i = 0; i < 19; i++)
	{
		gotoxy(x, y);
		cout << char(219) << "\t\t\t\t\t" << char(219);
		y += 1;
	}
}

void membership() {

	int feemonth = 800, feeyear = 7000, year = 365; //remove ung year di need
	double months, payment, withdiscount;
	char YorN;
	string member, premium;

	border();
	int x = 0;
	for (int i = 0; i <= 119; i++)
	{
		gotoxy(x, 2);
		cout << char(220);
		x += 1;
	}
	gotoxy(2, 1);
	cout << "Be Fit : Lift It";
	SetConsoleTextAttribute(hConsole, 7);
	gotoxy(50, 4);
	cout << "Membership Form ";
	SetConsoleTextAttribute(hConsole, 1);
	gotoxy(95, 1);
	cout << "Computation  ";
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Help  ";
	cout << "Exit" << endl;

	receipt();

	gotoxy(5, 6);
	cout << "What would you like to register?  [1] Regular || [2] Premium :  ";
	cin >> choice;

	if (choice == 1)
	{
		gotoxy(5, 8);
		cout << "For how many months would you like to pay? (Choose from 1-12): ";
		cin >> months;

		if (months <= 12)
		{
			gotoxy(5, 10);
			cout << "Are You a Student? Y/N: ";
			cin >> YorN;
			
			payment = months * feemonth; //total of payment

			if (YorN == 'Y' || YorN == 'y')
			{
				withdiscount =  payment - (payment * 0.25) ;  // total of payment with discount

				gotoxy(5, 12);
				cout << "Your total is: " << payment << endl;

				gotoxy(93, 7);
				cout << "Be Fit : Lift It";
				gotoxy(90, 9);
				cout << "Congratulations! " << user;
				gotoxy(87, 10);
				cout << "You are now an official member ";
				gotoxy(92, 11);
				cout << "of Be Fit : Lift It. ";
				gotoxy(89, 12);
				time();
				gotoxy(86, 14);
				cout << "Membership ----------- Regular";
				gotoxy(86, 16);
				cout << "Duration   ----------- " << months << " months";
				gotoxy(86, 18);
				cout << "Price      -----------  " << payment;
				gotoxy(86, 20);
				cout << "Discount   -----------   25%" ;
				gotoxy(86, 22);
				cout << "Total      -----------  " << withdiscount;
				gotoxy(85, 26);
				cout << "Kindly present this to the Counter.";
				

			} 
			else if (YorN == 'N' || YorN == 'n') {

				gotoxy(5, 11);
				cout << "Your total is: " << payment << endl;

				gotoxy(93, 7);
				cout << "Be Fit : Lift It ";
				gotoxy(90, 9);
				cout << "Congratulations!" << user;
				gotoxy(87, 10);
				cout << "You are now an official member ";
				gotoxy(92, 11);
				cout << "of Be Fit : Lift It. ";
				gotoxy(89, 12);
				time();
				gotoxy(86, 14);
				cout << "Membership ------------- Regular";
				gotoxy(86, 16);
				cout << "Duration   -------------" << months << " months";
				gotoxy(86, 18);
				cout << "Total      -------------  " << payment << endl;
				gotoxy(84, 26);
				cout << "Kindly present this to the Counter.";
			} 

		}
		else {
			gotoxy(5, 8);
			cout << "Choose from 1 - 12 only.";
			Sleep(100);
			system("cls");
			membership();
		}

	}
	else if (choice == 2) {
		gotoxy(5, 8);
		cout << "Are You a Student? Y/N: ";
		cin >> YorN;

		if (YorN == 'Y' || YorN == 'y')
		{
			withdiscount = feeyear - (feeyear * 0.25);
			gotoxy(5, 10);
			cout << "Your total is: " << withdiscount << endl;

			gotoxy(93, 7);
			cout << "Be Fit : Lift It";
			gotoxy(90, 9);
			cout << "Congratulations! " << user;
			gotoxy(87, 10);
			cout << "You are now an official member ";
			gotoxy(92, 11);
			cout << "of Be Fit : Lift It. ";
			gotoxy(89, 12);
			time();
			gotoxy(86, 14);
			cout << "Membership ----------- Premium";
			gotoxy(86, 16);
			cout << "Duration   -----------  1 year" ;
			gotoxy(86, 18);
			cout << "Price      -----------  " << feeyear;
			gotoxy(86, 20);
			cout << "Discount   -----------   25%";
			gotoxy(86, 22);
			cout << "Total      -----------  " << withdiscount;
			gotoxy(85, 26);
			cout << "Kindly present this to the Counter.";
		}
		else if (YorN == 'N' || YorN == 'n') {

			gotoxy(5, 10);
			cout << "Your total is: " << feeyear << endl;

			gotoxy(93, 7);
			cout << "Be Fit : Lift It";
			gotoxy(90, 9);
			cout << "Congratulations! " << user;
			gotoxy(87, 10);
			cout << "You are now an official member ";
			gotoxy(92, 11);
			cout << "of Be Fit : Lift It. ";
			gotoxy(89, 12);
			time();
			gotoxy(86, 14);
			cout << "Membership ------------- Premium" ;
			gotoxy(86, 16);
			cout << "Duration   -----------  1 year";
			gotoxy(86, 18);
			cout << "Total      -------------  " << feeyear << endl;
			gotoxy(84, 26);
			cout << "Kindly present this to the Counter.";
		}
	}
	system("pause");

}

void exit() {

	int exitt;

	int x = 0;
	SetConsoleTextAttribute(hConsole, 7);
	for (int i = 0; i <= 119; i++)
	{
		gotoxy(x, 2);
		cout << char(220);
		x += 1;
	}

	gotoxy(2, 1);
	cout << "Be Fit : Lift It";
	gotoxy(100, 1);
	cout << "Home  ";
	cout << "Help  ";
	SetConsoleTextAttribute(hConsole, 1);
	cout << "Exit";
	SetConsoleTextAttribute(hConsole, 7);

	border();

	gotoxy(38, 7);
	cout << char(201);
	gotoxy(38, 9);
	cout << char(204);
	gotoxy(78, 7);
	cout << char(187);
	gotoxy(39, 7);
	for (int i = 0; i < 39; i++)
	{
		cout << char(205);
	}
	//left
	gotoxy(38, 8);
	cout << char(186);
	gotoxy(38, 10);
	cout << char(186);
	gotoxy(38, 11);
	cout << char(186);
	gotoxy(38, 12);
	cout << char(186);
	gotoxy(38, 13);
	cout << char(186);
	gotoxy(38, 14);
	cout << char(186);
	gotoxy(38, 15);
	cout << char(186);
	gotoxy(38, 16);
	cout << char(186);
	//right
	gotoxy(78, 8);
	cout << char(186);
	gotoxy(78, 10);
	cout << char(186);
	gotoxy(78, 11);
	cout << char(186);
	gotoxy(78, 12);
	cout << char(186);
	gotoxy(78, 13);
	cout << char(186);
	gotoxy(78, 14);
	cout << char(186);
	gotoxy(78, 15);
	cout << char(186);
	gotoxy(78, 16);
	cout << char(186);

	gotoxy(39, 9);
	for (int i = 0; i < 39; i++)
	{
		cout << char(205);
	}
	gotoxy(38, 17);
	cout << char(200);
	gotoxy(78, 9);
	cout << char(185);
	gotoxy(78, 17);
	cout << char(188);
	gotoxy(39, 17);
	for (int i = 0; i < 39; i++)
	{
		cout << char(205);
	}
	gotoxy(40, 8);
	cout << "Confirmation                        X";
	gotoxy(44, 12);
	cout << "Are you sure you want to exit?";
	gotoxy(44, 13);
	cout << "       [1]Yes [2]No ";
	gotoxy(55, 14);
	cin >> exitt;
	if (exitt == 2)
	{
		system("cls");
		home();
	}
	else {
		
	}
	cout << "\n \n \n \n \n ";
	return;
}

