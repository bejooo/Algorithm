#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<int> getPi(string P) {
    int m = P.length();
    vector<int> pi(m,0);
    
    int j = 0;    
    for (int i=1; i< m; i++){
        while(j>0 && P[i]!=P[j]){
            j = pi[j-1];
        }
        
        if(P[i]==P[j]) {
            pi[i] = ++j;
        }
    }
    return pi;
}

vector<int> getPrefixPostfix(string P) {
    int n = P.length();
    vector<int> ret;
    vector<int> pi = getPi(P);
    
    while(n > 0) {
        ret.push_back(n);
        n = pi[n-1];
    }
    
    return ret;
    
}

int main()
{
    string input;
    cin >> input;
    vector<int> ret = getPrefixPostfix(input);
    
    for(int i=ret.size()-1; i>=0;i--) {
        cout << ret[i] <<" ";
    }
    
    return 0;
}
