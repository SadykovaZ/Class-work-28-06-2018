#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Rus");
	
	char c;
	int k = 0, f=0;
	while (cin.get(c))
	{
		if (c == ' ')
			k++;
		else if (isalpha(c))
			k++;
		else if (isdigit(c))
			k++;
		else
			k++;
	}
	cout << k << endl;


	/*int n;
	cin >> n;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			cout << i<<endl;
	

	}*/


	/*int n;
	cin >> n;
	int m = 0;

	while (n)
	{
		m = m * 10 + n % 10;
		n /= 10;
	}
	cout << m * 5 << endl;*/




	//int a = 1, b = 0, res;
	//cin >> a;
	//while (a>0)
	//{
	//	b = a % 10;
	//	a = a/10;
	//	cout << b;
	//}



	/*for (int i = 0; i < 256; i++)
	{
		cout << i << " " << char(i) << endl;
	}
	*/

	/*int i = 303;
	char c = '/';
	cout << (int)c << endl;*/



	/*int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i+j)<=(n-1))
				cout << '+';

			else
				cout << ' ';
		}
		cout << endl;
	}*/


	/*for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			if (j==1)
			{
				cout << " ";
			}
			cout << '+';
		}
		cout << endl;
	}
	*/





	/*int n, m, k;
	char a = '*', b = '_';
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
	{

		swap(a, b);
		for (int ii = 0; ii < k; ii++)
		{
			for (int j = 0; j < m/2; j++)
			{
				for (int jj = 0; jj < k; jj++)
					cout << a;
				for (int jj = 0; jj < k; jj++)
					cout << b;
			}



			cout << endl;
		}
	}*/


	/*int n, m;
	char a = '*', b = '_';
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m ; j++)
			if ((i + j) % 2 == 0)
				cout << a;
			else
				cout << b;

		cout << endl;
	}
*/

/*int n, m;
char a = '*', b = '_';
cin >> n >> m;
for (int i = 0; i < n; i++)
{
	swap(a, b);
	for (int j = 0; j < m/2; j++)
		cout << a << b;

	cout << endl;
}*/


/*int i, j;
int a = 0;
int b = 0;
cin >> a;
cin >> b;

for (i = 0; i <= a; i++)
{
	for (j = 0; j <= b; j++)
	{
		if (i % 2 == 1)
			if (j % 2 == 1)
				cout<<"_";
			else
				cout<<"*";
		else
			if (j % 2 == 1)
				cout<<"*";
			else
				cout<<"_";
	}
	cout<<endl;
}
*/



/*int n;
int sum = 0;
int k = 0;
int k_z = 0;
int option;
double avg;
while (true)
{
	cout << "Enter number:" << endl;

	cin >> n;
	cout << "Enter 1 to sum" << endl;
	cout << "Enter 2 for number digits" << endl;
	cout << "Enter 3 for number of zero" << endl;
	cout << "Enter 4 average" << endl;
	cout << "Enter 0 to exit" << endl;
	cin >> option;
	if (option == 0) break;
	k = 0;
	k_z = 0;
	sum = 0;

	while (n)
	{
		sum += n % 10;

		if (n % 10 == 0)

			k_z++;
		k++;

		n /= 10;


	}
	avg = double(sum) / k;

	switch (option)
	{
	case 1:
		cout << "sum " << sum << endl;
		break;
	case 2:cout << "b " << k << endl;
		break;
	case 3:
		cout << "Zero " << k_z << endl;
		break;
	case 4:cout << "Avg " << avg << endl;
		break;
	}

}*/

/*int a, n = 0, sum = 0, avr = 0;

cin >> a;

while (a > 0)
{
	sum += a % 10;
	a /= 10;
	n++;
}
avr = sum / n;
cout << "n = " << n << " " << "sum = " << sum << "avr " << avr << endl;*/



//for (int k = 0; k < 3; k++)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		if ((k == 0 || k == 2) || (i == 0 || i == 4))
//			cout << 'a';
//		else
//			cout << " ";
//	}
//
	//	cout << endl;
	//
//
//	}



	system("pause");
	return 0;
}
