//https://www.acmicpc.net/problem/1786
//baekjoon-1786

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> getPi(string P) {
	int j = 0, n = P.length();
	vector<int> pi(n,0);
	
	for(int i=1; i<n; i++) {
		while(j>0 && P[i]!=P[j]){
			j=pi[j-1];
		}
		
		if(P[i]==P[j]){
			pi[i]=++j;
		}
	}

	return pi;
}

vector<int> kmp(string T, string P){
	vector<int> positions, pi = getPi(P);
	
	int n = T.length();
	int m = P.length();
	int j = 0;

	for(int i=0; i<n; i++){
		while(j>0 && T[i]!=P[j]){
			j = pi[j-1];	
		}

		if (T[i]==P[j]) {
			if (j>=m-1) {
				positions.push_back(i-m+1);
				j = pi[j];
			} else {
				j++;
			}
		}
	}

	return positions;
	
}

int main() {
	string T, P;
	getline(cin,T);
	getline(cin,P);

	vector<int> ret = kmp(T,P);

	cout << ret.size() << endl;
	for(int i=0; i<ret.size(); i++) {
		cout << ret[i]+1 << " ";
	}
	return 0;
}
