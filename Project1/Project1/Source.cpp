#include <iostream>
#include <ctime>
using namespace std;
void main()
{
	srand(time(0));
	int a;
	cout << "Enter number: ";
	cin >> a;
	if (a > 0)
	{
		cout << "Good number" << endl;
	}
	else
	{
		cout << "Bad number" << endl;
	}
	int g[5][4];
	for (int  i = 0; i <5; i++)
	{

		for (int j = 0; j < 4; j++)
		{
			g[i][j] = rand() % 20 + 1;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << g[i][j] << " ";
		}
		cout << endl;
	}
}