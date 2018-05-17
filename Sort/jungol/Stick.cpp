#include <iostream>
#include <string>
#include <stack>
#include <cmath>

using namespace std;

int main() {
	string array;
	cin >> array;

	stack<int> s;
	int i = 0, cnt = 0;

	while(array[i]=='(' || array[i]==')') {
		if (array[i]=='(') {
			s.push(i);
		} else {
			if ( abs(s.top()-i) == 1 ) {
			//laser
				s.pop();	
				cnt += s.size();
			} else {
			//stick end
				s.pop();
				cnt += 1;
			}
		}

		i++;
	}

	cout << cnt << endl;	
	return 0;
}
