#pragma once
#include "Shag_db_Struct.h"
#include <fstream>
#include <iostream>
#include <string>

#ifndef SHAG_DB_FILE
#define SHAG_DB_FILE

using namespace std;


void StudentOutputFile(Student stud)
{
	ofstream fin("Student_shag.txt");
	if (!fin.is_open())
	{
		cout << "Error";
	}
	else
	{
		fin << stud.id << ";" << stud.people.family << ";" << stud.people.name << ";" << stud.people.contact.address << ";" << stud.people.contact.tel << ";";
		fin << stud.middle_ac << ";" << stud.facult.name << ";" << stud.facult.group << ";" << stud.facult.actual << endl;
	}
	fin.close();
}
void StudentOutputFileVisit(Student stud)
{
	ofstream finVisit("Student_shag_visit.txt");
	if (!finVisit.is_open())
	{
		cout << "Error";
	}
	else
	{
		finVisit << stud.id << ";" << stud.visit->date.day << ";" << stud.visit->date.month << ";" << stud.visit->date.year << ";" << stud.visit->status;

	}
}
void StudentOutputFileAcPerf(Student stud)
{
	ofstream finAcPerf("Student_shag_ac_perf.txt");
	if (!finAcPerf.is_open())
	{
		cout << "Error";
	}
	else
	{
		finAcPerf << stud.id << ";" << stud.ac_perf->date.day << ";" << stud.ac_perf->date.month << ";" << stud.ac_perf->date.year << ";" << stud.ac_perf->ac_status;
	}
}
void StudentOutputFileHomeWork(Student stud)
{
	ofstream finHomeWork("Student_shag_home_work.txt");
	if (!finHomeWork.is_open())
	{
		cout << "Error";
	}
	else
	{
		finHomeWork << stud.id << ";" << stud.homework->date.day << ";" << stud.homework->date.month << ";" << stud.homework->date.year << ";" << stud.homework->ac_status; 
	}
	
}
void StudentOutputFileTest(Student stud)
{
	ofstream finTest("Student_shag_test.txt");
	if (!finTest.is_open())
	{
		cout << "Error";
	}
	else
	{
		finTest << stud.id << ";" << stud.test->date.day << ";" << stud.test->date.month << ";" << stud.test->date.year << ";" << stud.test->ac_status;
	}
}
void StudentOutputFileLab(Student stud)
{
	ofstream finLab("Student_shag_Lab.txt");
	if (!finLab.is_open())
	{
		cout << "Error";
	}
	else
	{
		finLab << stud.id << ";" << stud.lab->date.day << ";" << stud.lab->date.month << ";" << stud.lab->date.year << ";" << stud.lab->ac_status;
	}
}

void StudentImportData(Student *stud)
{
	int pos;
	string sub_str, sub_str2, sub_str3, sub_str4, sub_str5, sub_str6, sub_str7, sub_str8, sub_str9, buffer, str, str2, str3, str4, str5, str6, str7, str8, str9;
	ifstream foutImport("Student_shag.txt");
	if (!foutImport.is_open())
	{
		cout << "Error";
	}
	else
	{
		getline(foutImport, buffer);
		
		pos = buffer.find(";");
		sub_str = buffer.substr(0, pos);
		str = buffer.substr(pos + 1);
		
		pos = str.find(";");
		sub_str2 = str.substr(0, pos);
		str2 = str.substr(pos + 1);
		
		pos = str2.find(";");
		sub_str3 = str2.substr(0, pos);
		str3 = str2.substr(pos + 1);
		
		pos = str3.find(";");
		sub_str4 = str3.substr(0, pos);
		str4 = str3.substr(pos + 1);
		
		pos = str4.find(";");
		sub_str5 = str4.substr(0, pos);
		str5 = str4.substr(pos + 1);

		pos = str5.find(";");
		sub_str6 = str5.substr(0, pos);
		str6 = str5.substr(pos + 1);

		pos = str6.find(";");
		sub_str7 = str6.substr(0, pos);
		str7 = str6.substr(pos + 1);

		pos = str7.find(";");
		sub_str8 = str7.substr(0, pos);
		str8 = str7.substr(pos + 1);

		pos = str8.find(";");
		sub_str9 = str8.substr(0, pos);
		str9 = str8.substr(pos + 1);
		
		//cout << sub_str << endl << sub_str2 << endl << sub_str3 << endl << sub_str4 << endl << sub_str5 << endl << sub_str6 << endl << sub_str7 << endl << sub_str8 << endl << sub_str9 << endl;
		
		int id = atoi(sub_str.c_str());
				
		stud->id = id;
		stud->people.family = sub_str2;
		stud->people.name = sub_str3;
		stud->people.contact.address = sub_str4;
		stud->people.contact.tel = sub_str5;

		double middle_ac = atof(sub_str6.c_str());
		double middle_ac(float);
		stud->middle_ac = middle_ac;

		stud->facult.name = sub_str7;
		stud->facult.group = sub_str8;

		if (sub_str9 == "0")
		{
			stud->facult.actual = false;
		}
		else
		{
			stud->facult.actual = true;
		}









	}
}








#endif // !1
