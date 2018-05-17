#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;

	int* array = new int[n];
    for (int i=0; i<n; i++) {
		cin >> array[i];
	}

	int count = 0;

    for (int i=1; i<n; i++) {
		for (int j=0; j<i; j++) {
			if (array[i] < array[j]) {
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				
				count++;
			}
		}
	}

	cout<<count<<endl;

    return 0;
}
