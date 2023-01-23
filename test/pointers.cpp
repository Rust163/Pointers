#include <iostream>
using namespace std;

int main() {
	srand(time(0));
	int arr[10] = { 10, 20, 15, 63, 12, 78, 51, 98, 2, 99 };
	int arr2[10];
	int* pArr = arr;
	int* pTempArr2 = arr2;
	for (int i = 0; i < 10; i++)
	{
		cout << *(pArr + i) << ", " << endl;
	}
	cout << "\n";
	for (int i = 0; i < 10; i++)
	{
		pTempArr2 = pArr;
		cout << *(pTempArr2 + i) << ", " << endl;
	}

	cout << "\n==========================================================================\n";

	int i = 10 - 1;
	while (i >= 0)
	{
		cout << *(pArr + i) << endl;
		i--;
	}

	cout << "\n==========================================================================\n";

	for (int i = 10 - 1; i >= 0; i--)
	{
		pTempArr2 = pArr;
		cout << *(pTempArr2 + i) << ", " << endl;
	}
	cout << "\n";

}