// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// sample_matrix.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (20.04.2015)
//
// Тестирование верхнетреугольной матрицы

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------


//TEST "main" for TVector
void main()
{
	setlocale(LC_ALL, "Russian");
	int k = 5;
	TVector <int> a, b;
	TVector <int> x(3), y(3);
	cout << "Input Vectors" << endl;
	cout << "Конструктор по умолчанию \ny= " << y << "\nx= " << x << "\na= " << a <<"\nb= "<< b << endl;
	cin >> a >> b;
	cout << "a= " << a << "|| b= " << b << "\n" << a.GetSize() << " " << a.GetStartIndex() << endl;
	cout << "На первой позиции стоит " << a[0] << endl;
	if (x == y)
		cout << "Равны" << endl;
	else 
		cout << "ERROR" << endl;
	if (a != b)
		cout << "Не равны" << endl;
	else
		cout << "ERROR" << endl;
	//a = y;
	cout << y << endl;
	cout << a << endl;

	cout << "Операции над векторами" << endl;
	cout << "a+b= " << a + b << endl;
	cout << "\na-b= " << a - b << endl;
	cout << "\na*b= " << a * b << endl;
	cout << endl;
	//Действие со скаляром
	cout << "a+k= " << a + k <<"\na-k= " << a - k << "\na*k= " << a * k << endl;

	system("pause");
}

//void main()
//{
//  TMatrix<int> a(5), b(5), c(5);
//  int i, j;
//
//  setlocale(LC_ALL, "Russian");
//  cout << "Тестирование программ поддержки представления треугольных матриц"
//    << endl;
//  for (i = 0; i < 5; i++)
//    for (j = i; j < 5; j++ )
//    {
//      a[i][j] =  i * 10 + j;
//      b[i][j] = (i * 10 + j) * 100;
//    }
//  c = a + b;
//  cout << "Matrix a = " << endl << a << endl;
//  cout << "Matrix b = " << endl << b << endl;
//  cout << "Matrix c = a + b" << endl << c << endl;
//}
//---------------------------------------------------------------------------
