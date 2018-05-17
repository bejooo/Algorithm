#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;

	int* array = new int[n];
    for (int i=0; i<n; i++) {
		cin >> array[i];
	}

    for (int i=1; i<n; i++) {
		for (int j=0; j<i; j++) {
			if (array[i] < array[j]) {
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
		for (int i=0; i<n; i++) {
			cout<<array[i]<<" ";
		}
		cout<<endl;
	}

    return 0;
}
