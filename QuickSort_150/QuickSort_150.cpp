#include <iostream>
using namespace std;

int arr[20];			// Array of integers to hold values
int camp_count = 0;		// Number of comparasion
int mov_count = 0;		// Number of data movements
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang element array";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\n Maksimum panjang array adalah 20" << endl;
	}

	cout << "\n===================";
	cout << "\nEnter Array Element";
	cout << "\n===================";
	
	for (int i = 0; i < n; i++)
	{
		cout << "<<" << (i + 1) << ">>";
		cin >> arr[i];
	}
}

// swap the element st index x with the element  at index y

void swap(int x, int y)
{
	int temp;

	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void q_short(int low, int high)
{
	int pivot, i, j;
	if (low > high)						// langkah AlgoritmaNO 1
		return;
	
	pivot = arr[low];				// Langkah Algoritma no 2

	i = low + 1;					// Langkah Algoritma no 3
	j = high;						// Langkah algoritma no 4

	while (i <= j)					// Langkah algoritma no 10
	{
		while ((arr[i] <= pivot ) && (j <= high))	//Langkah Algoritma no 5
	}
	



		
}
