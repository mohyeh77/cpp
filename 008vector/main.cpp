// vectors.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	
	/*vector<int>v;
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);	
	for (int i = 0; i < v.size(); ++i)
		cout << "v[" << i << "]= " << v[i]<<endl;*/
	
	// write a program that consists of a while loop that (each timearound the loop) reads two ints and then prints them

	// here we are using int next example will be using double instad of int
	
	/*int val1, val2;
	while (cin >> val1 >> val2) {
		cout << "Num1=" << val1 << " Num2=" << val2 << " Sum=" << val1 + val2<<endl;
		if (val1 > val2)
			cout << "the smaller value is:" << val2<<endl;
		else if (val1 < val2)
			cout << "the larger value is: " << val2<<endl;
		else
			cout << "The number are Equal" << val1 << "==" << val2<<endl;	
	}*/
		

	double dal1, dal2;

	double smaller, larger;
	while (cin >> dal1 >> dal2) {
		cout << "Num1=" << dal1 << " Num2=" << dal2;
		if (dal1 < dal2)
			cout << "the smllest value is: " << dal1 << endl;		
		else if (dal1 > dal2)
			cout << "The large value is: " << dal1 << endl;
		else
			if((dal1-dal2)<(1.0/100))
				cout << "The number are almost equal" << dal1 << "==" << dal2<<endl;
	}

//This lines for every program.
	cout << "\n Goodbye!!!\n";
	system("pause");	
	return 0;
}

