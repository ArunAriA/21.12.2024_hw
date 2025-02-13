#include <iostream>
#include <iomanip>

using namespace std;

//№1
//Написати функцію, що додає стовпчик двовимірному масиву в зазначену позицію.

//№2
//Написати функцію, що видаляє стовпчик двовимірного масиву за вказаним номером.
//

//void fullArr(int** arr, int rows, int col)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		arr[i] = new int[col];
//		for (int j = 0; j < col; j++)
//		{
//			arr[i][j] = 1 + rand() % 10;
//		}
//	}
//}
//
//void printArr(int** arr, int rows, int col)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << setw(4) << arr[i][j];
//		}
//		cout << endl;
//	}
//}
//
//void addCol(int** arr, int rows, int &col, int index)
//{
//	if (index < 1 || index > col + 1) {
//		cout << "Oshibka: index dolzhen byt ot 1 do " << col + 1 << endl;
//		return;
//	}
//
//	index--;
//
//	for (int i = 0; i < rows; i++)
//	{
//		int* newRow = new int[col+1];
//
//		for (int j = 0; j < index; j++) {
//			newRow[j] = arr[i][j];
//		}
//
//		newRow[index] = 1 + rand() % 10;
//
//		for (int j = index; j < col; j++) {
//			newRow[j + 1] = arr[i][j];
//		}
//
//		arr[i] = newRow;
//		
//	}
//	col++;
//}
//
//void delCol(int** arr, int rows, int& col, int index)
//{
//	if (index < 1 || index > col) {
//		cout << "Oshibka: index dolzhen byt ot 1 do " << col + 1 << endl;
//		return;
//	}
//
//	index--;
//
//	for (int i = 0; i < rows; i++)
//	{
//		int* newRow = new int[col - 1];
//
//		for (int j = 0, notIndex = 0; j < col; j++)
//		{
//			if (j != index)
//			{
//				newRow[notIndex++] = arr[i][j];
//			}
//		}
//		delete[] arr[i];
//		arr[i] = newRow;
//	}
//
//	col--;
//}
//
//int main()
//{
//	srand(time(nullptr));
//
//	int rows = 5, col = 4;
//	cout << "Enter size Rows and Col: ";
//	cin >> rows >> col;
//
//	int** arr = new int* [rows];
//
//	int que = 0;
//
//	while (que != 1 && que != 2)
//	{
//		cout << "viberite deystviye, 1 - dobavit ryadok, 2 ubrat ryadok: ";
//		cin >> que;
//	}
//
//
//	cout << "Eto vash nachalniy massiv:" << endl;
//	fullArr(arr, rows, col);
//	printArr(arr, rows, col);
//
//	if (que == 1)
//	{
//		int index = 0;
//		cout << endl << "viberite index kuda budete vstavlyat ot 1 do " << col + 1<< ":";
//		cin >> index;
//		addCol(arr, rows, col, index);
//		printArr(arr, rows, col);
//	}
//	else if (que == 2)
//	{
//		int index = 0;
//		cout << endl << "viberite index kotoriy budete udalyat ot 1 do " << col << ":";
//		cin >> index;
//		delCol(arr, rows, col, index);
//		cout << "Eto vash finalnyi massiv:" << endl;
//		printArr(arr, rows, col);
//	}
//	
//	for (int i = 0; i < rows; i++)
//	{
//		delete[] arr[i];
//	}
//	delete[] arr;
//
//	return 0;
//}











//№3
//Дано матрицю порядку MxN(M рядків, N стовпців).Необхідно заповнити її значеннями і написати функцію,
//що здійснює циклічний зсув рядків та / або стовпчиків масиву вказану кількість разів і в зазначену сторону.
//
//void shiftRight(int** matrix, int M, int N, int shifts) {
//    for (int s = 0; s < shifts; s++) {
//        int last = matrix[M - 1][N - 1]; 
//        for (int i = M - 1; i >= 0; i--) {
//            for (int j = N - 1; j > 0; j--) {
//                matrix[i][j] = matrix[i][j - 1];
//            }
//            if (i > 0) {
//                matrix[i][0] = matrix[i - 1][N - 1];
//            }
//        }
//        matrix[0][0] = last;
//    }
//}
//
//void shiftDown(int** matrix, int M, int N, int shifts) {
//    for (int s = 0; s < shifts; s++) {
//        int* lastRow = new int[N];
//        for (int j = 0; j < N; j++) {
//            lastRow[j] = matrix[M - 1][j];
//        }
//
//        for (int i = M - 1; i > 0; i--) {
//            for (int j = 0; j < N; j++) {
//                matrix[i][j] = matrix[i - 1][j];
//            }
//        }
//
//        for (int j = 0; j < N; j++) {
//            matrix[0][j] = lastRow[j];
//        }
//
//        delete[] lastRow;
//    }
//}
//
//void printMatrix(int** matrix, int M, int N) {
//    for (int i = 0; i < M; i++) {
//        for (int j = 0; j < N; j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    int rows, cols, direction, shifts;
//
//    cout << "enter rows and cols: ";
//    cin >> rows >> cols;
//
//    int** matrix = new int* [rows];
//    for (int i = 0; i < rows; i++) {
//        matrix[i] = new int[cols];
//    }
//
//    int value = 1;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            matrix[i][j] = value++;
//        }
//    }
//
//    cout << "Nachalnaya matrica:\n";
//    printMatrix(matrix, rows, cols);
//
//    cout << "Viberite napravleniye sdviga:\n1 - Right\n2 - Down\n";
//    cin >> direction;
//
//    cout << "Vvedite colichestvo sdvigov: ";
//    cin >> shifts;
//
//    if (direction == 1) {
//        shiftRight(matrix, rows, cols, shifts);
//        cout << "\nPosle sdviga na pravo na " << shifts << ":\n";
//    }
//    else if (direction == 2) {
//        shiftDown(matrix, rows, cols, shifts);
//        cout << "\nPosle sdviga vniz na " << shifts << ":\n";
//    }
//    else {
//        cout << "Nepravilnoye napravleniye!" << endl;
//        return 1;
//    }
//
//    printMatrix(matrix, rows, cols);
//
//    for (int i = 0; i < rows; i++) {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//
//    return 0;
//}



//№4
//Є 3 двовимірні масиви A, B, C.Для кожного з них користувач вводить із клавіатури кількість рядків і стовпців.
//Заповніть масиви випадковими числами[-10, 10].Створіть:
//Одновимірний масив, який містить унікальні значення для A, B, C;
//Одновимірний масив, який містить спільні значення для A і C;
//Одновимірний масив, який містить від'ємні значення для A, B, C без повторень.


void fullArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = -10 + rand() % 21;
		}
	}
}

void printArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
}

bool existsInArray(int* arr, int size, int value) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == value) return true;
	}
	return false;
}

int* unikAm(int** arrF, int rowsF, int colsF, int** arrS, int rowsS, int colsS, int** arrT, int rowsT, int colsT, int &size)
{
	int maxSize = rowsF * colsF + rowsS * colsS + rowsT * colsT;
	int* unikArray = new int[maxSize];
	size = 0;

	for (int i = 0; i < rowsF; i++)
	{
		for (int j = 0; j < colsF; j++)
		{
			if (!existsInArray(unikArray, size, arrF[i][j])) {
				unikArray[size++] = arrF[i][j];
			}
		}
	}
	for (int i = 0; i < rowsS; i++) {
		for (int j = 0; j < colsS; j++) {
			if (!existsInArray(unikArray, size, arrS[i][j])) {
				unikArray[size++] = arrS[i][j];
			}
		}
	}
	for (int i = 0; i < rowsT; i++) {
		for (int j = 0; j < colsT; j++) {
			if (!existsInArray(unikArray, size, arrT[i][j])) {
				unikArray[size++] = arrT[i][j];
			}
		}
	}
	return unikArray;

}

int* spilniAr(int** arrF, int rowsF, int colsF, int** arrT, int rowsT, int colsT, int& size)
{
	int maxSize = rowsF * colsF;
	int* spilniArr = new int[maxSize];
	size = 0;

	for (int i = 0; i < rowsF; i++)
	{
		for (int j = 0; j < colsF; j++)
		{
			int value = arrF[i][j];
			for (int k = 0; k < rowsT; k++)
			{
				for (int m = 0; m < colsT; m++)
				{
					if (arrT[k][m] == value && !existsInArray(spilniArr, size, value))
					{
						spilniArr[size++] = value;
					}
				}
			}
		}
	}

	return spilniArr;
}


int* videmnAr(int** arrF, int rowsF, int colsF, int** arrS, int rowsS, int colsS, int** arrT, int rowsT, int colsT, int& size)
{
	int maxSize = rowsF * colsF + rowsS * colsS + rowsT * colsT;
	int* negArr = new int[maxSize];
	size = 0;

	for (int i = 0; i < rowsF; i++) {
		for (int j = 0; j < colsF; j++) {
			int value = arrF[i][j];
			if (value < 0 && !existsInArray(negArr, size, value)) {
				negArr[size++] = value;
			}
		}
	}

	for (int i = 0; i < rowsS; i++) {
		for (int j = 0; j < colsS; j++) {
			int value = arrS[i][j];
			if (value < 0 && !existsInArray(negArr, size, value)) {
				negArr[size++] = value;
			}
		}
	}

	for (int i = 0; i < rowsT; i++) {
		for (int j = 0; j < colsT; j++) {
			int value = arrT[i][j];
			if (value < 0 && !existsInArray(negArr, size, value)) {
				negArr[size++] = value;
			}
		}
	}

	return negArr;
}




int main()
{
	srand(time(NULL));
	int rowsF, colsF, rowsS, colsS, rowsT, colsT;
	
	// 1 massiv

	cout << "enter rows and cols for first massive: ";
	cin >> rowsF >> colsF;

	int** arrF = new int* [rowsF];
	
	for (int i = 0; i < rowsF; i++) {
		arrF[i] = new int[colsF];
	}

	fullArray(arrF, rowsF, colsF);
	printArray(arrF, rowsF, colsF);

	// 2 Masiv

	cout << "enter rows and cols for second massive: ";
	cin >> rowsS >> colsS;

	int** arrS = new int* [rowsS];

	for (int i = 0; i < rowsS; i++) {
		arrS[i] = new int[colsS];
	}

	fullArray(arrS, rowsS, colsS);
	printArray(arrS, rowsS, colsS);

	// 3 Masiv

	cout << "enter rows and cols for third massive: ";
	cin >> rowsT >> colsT;

	int** arrT = new int* [rowsT];

	for (int i = 0; i < rowsT; i++) {
		arrT[i] = new int[colsT];
	}

	fullArray(arrT, rowsT, colsT);
	printArray(arrT, rowsT, colsT);



	int uniqueSize;
	int* uniqueValues = unikAm(arrF, rowsF, colsF, arrS, rowsS, colsS, arrT, rowsT, colsT, uniqueSize);

	cout << "Unikalniye znacheniya: " << endl;
	for (int i = 0; i < uniqueSize; i++) {
		cout << setw(3) << uniqueValues[i] << " ";
	}
	cout << endl;



	int spilniSize;
	int* spilniArr = spilniAr(arrF, rowsF, colsF, arrT, rowsT, colsT, spilniSize);

	cout << "Spilni A i C: " << endl;
	for (int i = 0; i < spilniSize; i++) {
		cout << setw(3) << spilniArr[i] << " ";
	}
	cout << endl;


	int videmnSize;
	int* videmnArr = videmnAr(arrF, rowsF, colsF, arrS, rowsS, colsS, arrT, rowsT, colsT, videmnSize);

	cout << "Videmni znacheniya bez povtoren: " << endl;
	for (int i = 0; i < videmnSize; i++) {
		cout << setw(3) << videmnArr[i] << " ";
	}
	cout << endl;


	delete[] uniqueValues;
	delete[] spilniArr;
	delete[] videmnArr;

	for (int i = 0; i < rowsF; i++) delete[] arrF[i];
	delete[] arrF;

	for (int i = 0; i < rowsS; i++) delete[] arrS[i];
	delete[] arrS;

	for (int i = 0; i < rowsT; i++) delete[] arrT[i];
	delete[] arrT;
}

