// ConsoleApplication62.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	int count = 0, z = 0;
	string file1, file2, str1, str2;
	ifstream creat1, creat2;
	ofstream fout1, fout2;
	cout << "Enter the name first file" << endl;
	cin >> file1;
	cout << "Enter the name second file" << endl;
	cin >> file2;
	/*fout1.open(file1);
	fout2.open(file2);
	for (int count = 0; count < 4; ++i)
	{
		cin >> str1;
		fout1 << str1 << endl;
		cin >> str2;
		fout2 << str2 << endl;
	}
	fout1.close();
	fout2.close();*/

	creat1.open (file1);
	creat2.open (file2);

	if ((!creat1.is_open()) || (!creat2.is_open())) 
	{
		cout << "File not found\n" << endl;
	}
	if ((creat1.is_open()) && (creat2.is_open())) {
		while ((!creat1.eof()) && (!creat2.eof())) {
			count++;
			getline(creat1, str1);
			getline(creat2, str2);

			if (str1 == str2) {
				z = 1;
			}
			if (z == 0) {
				cout << file1 << " " << count << " " << str1 << endl;
				cout << file2 << " " << count << " " << str2 << endl;
			}
		}
	}

	creat1.close();
	creat2.close();
	
	system("pause");
	return 0;
}