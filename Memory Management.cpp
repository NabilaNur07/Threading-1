#include <iostream>
using namespace std;

int main () {
	int num;
	cout << " masukkan total jumlah element : " ;
	cin >> num;
	int* ptr;
	
	ptr = new int [num]; // C++ New Operator
	
	cout << " masukkan element " << endl;
	for ( int i = 0; i < num; i++){
		cout << " element : ";
		cin >> ptr [i];
	}
	
	cout << " ini adalah element yang dimasukkan tadi " << endl;
	for ( int i = 0; i<num; i++){
		cout << " element : " << ptr[i] << endl;
	}
	delete[] ptr; // C++ Delete Operator
	
	return 0;
}
