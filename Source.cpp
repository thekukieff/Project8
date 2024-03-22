//#include <iomanip> изучить
#include <iostream>
#include <cstdlib>// рандом
using namespace std;

int main() {
	setlocale(LC_ALL, "ru"); 
	srand(time(NULL));//рандом
	int number,sum=0, sum_col=0;
	const int ROW = 3, COL = 4;
	int arr[ROW][COL];
	
	/*
	int mass[ROW][COL]{ {1,2},{6,7} };//
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << mass[i][j]<<" ";
		}
		cout << endl;
	}
	*/
	//number = rand()%20-10;//от -10 до 10 %20=20€чеек -10 начало
	//number = (rand() %100) * 0.01 ;//от 0.01 до 1
	for (int i = 0; i < ROW+1; i++)
	{
		

		for ( int j = 0; j < COL; j++)
		{
			if (i == COL-1) {
				sum_col = sum_col + arr[i][0];
				cout << endl;
				cout << "Cумма: " << sum_col << "\t" << endl;
				sum_col = 0;
			}
			else {
				number = rand() % 20 + 1;
				cout << number << "\t\t\t";
				arr[0][j] = number;
				sum += number;
			}
			
		}
		cout << "—умма равна: "<<sum<< endl;
		sum = 0;

	}
	




	return 0;
}