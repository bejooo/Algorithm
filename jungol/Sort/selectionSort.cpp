#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;

	int* array = new int[n];
    for (int i=0; i<n; i++) {
		cin >> array[i];
	}
 
	int min, offset;
    for (int i=0; i<n-1; i++) {
		min = array[i];
		offset = i;
    	for (int j=i+1; j<n; j++) {
			if (array[j] < min) {
				min = array[j];
				offset = j;
			}
		}
		int temp = array[i];
		array[i] = array[offset];
		array[offset] = temp;

		
		for (int i=0; i<n; i++) {
			cout<<array[i]<<" ";
		}
		cout<<endl;
	}
    return 0;
}
