// CPP program to illustrate std :: none_of
#include <iostream> // cout
#include <algorithm> // none_of
using namespace std;

// function to check whether the
// element is negative or not
bool comp(int a) { 

	return a < 0; 
	
} // End function comp

// Driver code
int main() {
	
	int arr[] = { 1, 4, 9, 16, 0 };
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Array contains :";
	for (int i = 0; i < n; i++) 
		cout << ' ' << arr[i] << " ";
	
	cout << "\n";	
	
	if (none_of(arr, arr+n, comp)) {
		cout << "No negative elements in the range.\n";
	} else {
		cout << "There is at least one negative"
			" element in the array range.\n";
	}
	return 0;

} // End driver
