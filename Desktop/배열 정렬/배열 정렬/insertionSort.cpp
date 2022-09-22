#include <iostream>

using namespace std;
void insertionSort(int* A, int n)
{
	for (int i = 1; i < 5; i++)
	{
		int c = A[i];
		int b = i - 1;
		while (b >= 0 && A[b] > c)
		{

			A[b + 1] = A[b];
			b--;

		}
		A[b + 1] = c;

	}
	for (int i = 0; i < 5; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}