#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string colName (long long int n)
    {
        string s = "";
        char c;
        
        while(n>0){
            c = (--n % 26 + 'A');
            s = c + s;
            n /= 26;
        }
        return s;
    }
};

int main()
{
    {
        long long int n; cin >> n;
        Solution ob;
        cout << ob.colName (n) << '\n';
    }
}