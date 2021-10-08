#include <iostream>
#include "UnorderedArray.h"
#include "OrderedArray.h"

using namespace std;

int main()
{
	UnorderedArray<int> array(3);

	array.push(5);
	array.push(3);
	array.push(4);
	array.push(2);
	array.push(1);

	array[2] = 112;
	
	array.pop();
	array.remove(2);

	cout << "Unordered array contents: ";

	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;

	cout << "Search for 3 was found at index: ";
	cout << array.search(3);

	cout << endl << endl;

	return 0;
}