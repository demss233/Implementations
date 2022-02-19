#include <bits/stdc++.h>
using namespace std;

string s, h = "", hs = "";
char c;
int odd = 0;
map<char, int> mp;
 
int main(){
    cin >> s;
    FCHAR(i, s)
        mp[i]++;
    for(auto f : mp){
        if(f.second % 2 != 0){
            odd++;
            c = f.first;
        }
    }
    if(odd > 1){
        cout << "NO SOLUTION" << endl;
    }
    else{
        for(auto it : mp){
            h = h + string(it.second / 2, it.first);
            hs = string(it.second / 2, it.first) + hs;
        }
    }
    if(odd == 1){
        cout << h + c + hs << endl;
    }else{
        cout << h + hs << endl;
    }
}
