#include <iostream>
#include <iomanip>

using namespace std;

//№1
//Написати функцію, що додає стовпчик двовимірному масиву в зазначену позицію.

//№2
//Написати функцію, що видаляє стовпчик двовимірного масиву за вказаним номером.
//

void fullArr(int** arr, int rows, int col)
{
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[col];
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = 1 + rand() % 10;
		}
	}
}

void printArr(int** arr, int rows, int col)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
}

void addCol(int** arr, int rows, int &col, int index)
{
	if (index < 1 || index > col + 1) {
		cout << "Oshibka: index dolzhen byt ot 1 do " << col + 1 << endl;
		return;
	}

	index--;

	for (int i = 0; i < rows; i++)
	{
		int* newRow = new int[col+1];

		for (int j = 0; j < index; j++) {
			newRow[j] = arr[i][j];
		}

		newRow[index] = 1 + rand() % 10;

		for (int j = index; j < col; j++) {
			newRow[j + 1] = arr[i][j];
		}

		arr[i] = newRow;
		
	}
	col++;
}

void delCol(int** arr, int rows, int& col, int index)
{

}

int main()
{
	srand(time(nullptr));

	int rows = 5, col = 4;
	cout << "Enter size Rows and Col: ";
	cin >> rows >> col;

	int** arr = new int* [rows];

	int que = 0;

	while (que != 1 && que != 2)
	{
		cout << "viberite deystviye, 1 - dobavit ryadok, 2 ubrat ryadok: ";
		cin >> que;
	}


	cout << "Eto vash nachalniy massiv:" << endl;
	fullArr(arr, rows, col);
	printArr(arr, rows, col);

	if (que == 1)
	{
		int index = 0;
		cout << endl << "viberite index kuda budete vstavlyat ot 1 do " << col + 1<< ":";
		cin >> index;
		addCol(arr, rows, col, index);
		printArr(arr, rows, col);
	}
	else if (que == 2)
	{
		int index = 0;
		cout << "viberite index kuda budete vstavlyat ot 1 do " << col  << ":";
		cin >> index;
		delCol(arr, rows, col, index);
		cout << "Eto vash finalnyi massiv:" << endl;
		printArr(arr, rows, col);
	}
	
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}







//№3
//Дано матрицю порядку MxN(M рядків, N стовпців).Необхідно заповнити її значеннями і написати функцію,
//що здійснює циклічний зсув рядків та / або стовпчиків масиву вказану кількість разів і в зазначену сторону.
//
//№4
//Є 3 двовимірні масиви A, B, C.Для кожного з них користувач вводить із клавіатури кількість рядків і стовпців.
//Заповніть масиви випадковими числами[-10, 10].Створіть:
//Одновимірний масив, який містить унікальні значення для A, B, C;
//Одновимірний масив, який містить спільні значення для A і C;
//Одновимірний масив, який містить від'ємні значення для A, B, C без повторень.

