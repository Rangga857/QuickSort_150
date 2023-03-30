#include <iostream>
using namespace std;

int arr[20];			// Array of integers to hold values
int cmp_count = 0;	
int mov_count = 0;		// Number of data movements
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang element array : ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\n Maksimum panjang array adalah 20" << endl;
	}

	cout << "\n===================" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n===================" << endl;
	
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
		while ((arr[i] <= pivot) && (i <= high))	//Langkah Algoritma no 5
		{
			i++;									//Langkah Algoritma no 6
			cmp_count++;
		}
		cmp_count++;

		while ((arr[j] > pivot) && (j >= low))		// Langkah Algoritma no 7
		{
			j--;									// Langkah Algoritma no 8
			cmp_count++;
		}
		cmp_count++;

		if (i < j)									// Langkah algoritma no 9
		{
			swap(i, j);
			mov_count++;
		}
	}
	
	if (low < j)									// Langkah algoritma no 11
	{
		swap(low, j);
		mov_count++;
	}

	// sort the list on the left of pivot using quick sort
	q_short(low, j - 1);							//Langkah algoritma no 12
	// sort the list on the right of pivot using quick sort
	q_short(j + 1, high);							//Langkah algoritma no 13

}

void display() {
	cout << "\n-----------------" << endl;
	cout << "Sorted Array" << endl;
	cout << "\n-----------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n\nNumber of comparasions: " << cmp_count << endl;
	cout << "Number of data movement: " << mov_count << endl;
}

int main()
{
	input();
	q_short(0, n - 1);			
	display();
	system("pause");

	return 0;
}