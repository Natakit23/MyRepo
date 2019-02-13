/*
заголовочные файлы
*/


#include "pch.h"
#include <iostream>
#include "Shag_db_Func.h"
#include "Shag_db_File.h"
#include <fstream>
using namespace std;
string buffer;

Student student_shag[N]; // константа N инициализированна в Shag_db_Struct.h
/*
void InputStudentInfo(Student *stud);		// ввод информации о студентах
void InputStudentVisit(Student *stud, int n); //ввод посещения студента
void InputStudentAc(Student *stud, int n); //ввод информации об оценках на уроке
void InputStudentAcHome(Student *stud, int n); //ввод информации об оценках за домашнюю работу
void InputStudentAcLab(Student *stud, int n); //ввод информации об оценках за лабораторную работу
void InputStudentAcTest(Student *stud, int n); //ввод информации об оценках за контрольную работу
void CalcStudentMiddleAc(Student *stud, int m); //расчет средней оценки
void InputStudentAcperf(Student *stud, int m);
void InputStudentFacultet(Student *stud); //ввод информации о факультете
void OtputStudentInfo(Student *stud);
*/
int main()
{
	setlocale(LC_ALL, "rus");

	/*cout << "Вас приветствует Искусственный Интеллект, версия 0.1" << endl;
	cout << endl;
	cout << "Ввод данных: " << endl;
	
	cout << "Выберите вид (1 - с клавиатуры, 2 - импорт из файла)" << endl;
	cout << endl;
	/*int in;
	switch (in)
	{
	case 1:
	{
		cin >> in;
	}
		break;
	case 2:
	{
	}
	break;

	}*/
	/*cout << "Вывод данных: " << endl;
	
	
	
	cout << "Выберите вид (1 - на экран, 2 - экспорт в файл)" << endl;
	cout << endl;
	/*int out;
	switch (in)
	{
	case 1:
		
	case 2:

	}*/
	/*cout << "Очистка всех данных" << endl;
	cout << endl;
	cout << "Сортировка данных: (вывод по параметрам)" << endl;
	
	cout << "Выберите параметр (1 - на экран, 2 - экспорт в файл)" << endl;
	cout << endl;
	/*int sort;
	switch (in)
	{
	case 1:

	case 2:

	}*/
	/*cout << "Поиск записи" << endl;

	cout << "Выберите действие (1 - вывод, 2 - изменение)" << endl;
	cout << endl;
	/*int search;
	switch (in)
	{
	case 1:

	case 2:

	}*/
	

	for (int i = 0; i < N; i++)
	{
		student_shag[i].id = i + 1;

		InputStudentInfo(&student_shag[i]);

		InputStudentVisit(&student_shag[i], N);

		InputStudentAcperf(&student_shag[i], N);

		InputStudentFacultet(&student_shag[i]);
	}
	for (int i = 0; i < N; i++)
	{
		OtputStudentInfo(&student_shag[i]);
	}
	for (int i = 0; i < N; i++)
	{
		StudentOutputFile(student_shag[i]);
		StudentOutputFileVisit(student_shag[i]);
		StudentOutputFileAcPerf(student_shag[i]);
		StudentOutputFileHomeWork(student_shag[i]);
		StudentOutputFileTest(student_shag[i]);
		StudentOutputFileLab(student_shag[i]);
		StudentImportData(&student_shag[i]);
	}
	
}

