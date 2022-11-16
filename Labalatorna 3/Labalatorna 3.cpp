// Labalatorna 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//





#include<iostream>; //Бібліотека
using namespace std;

int main()
{
    int x, y, z; //Оголошення зміних типу double(дробові)
    char action;
	cout << "input x:" << endl;
    cin >> x;
    cout << "input y:" << endl;
    cin >> y;
    cout << "input action: (+) (-) (*) (/) (%)"<<endl;
    cin >> action;

	switch (action) /* switch має робити значення, а кожен case перевіряє це значення на відповідність*/
	{
	case '+':
		cout << x+y;
		break;
	case '-':
		cout << x-y;
		break;
	case '*':
		cout << x*y;
		break;
	case '%':
		cout << x%y;
		break;
	case '/':
		if (y != 0)cout << x / y; //якщо "y" не дорівнює 0, то виконується дія / - ділення, в іншому випадку (else) виділяється текст: Не можна ділити на 0
		else cout << " Don't devided by 0!";
		break;
	default: //жоден кейс не виконався
		cout << "wrong action";
		break;
	}
 
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
