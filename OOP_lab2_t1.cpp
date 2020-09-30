#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>

using namespace std;

const int SIZEROW = 3;
const int SIZECOL = 3;

int sum = 0;
int step = 1 ;
int array[SIZEROW][SIZECOL];

int main()
{
	
	setlocale(LC_ALL, "Russian");
	
	//заполняем массив
	for (int i = 0;i < SIZEROW;i++) 
	{
		for (int j = 0; j < SIZECOL;j++)
		{
			array[i][j] = rand()%10;
			cout<<array[i][j]<<'\t';
		}
		cout<<endl;
	}
	//
	
	//
	
	for (int i = 0; i < SIZEROW;i++)
	{
		cout<<endl;
		for (int j = 0; j < SIZECOL;j++)
		{
			cout<<array[i][j]<<'\t';
			if (array[i][j] % 2 == 0)
			{
				sum += array[i][j];
			}
			//break;
		}
	}
	cout<<endl<<endl<<sum;
	
	return 0;
}
