#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    int i = 0;
    cin >> T;
    
    while(i < T) {
        vector<int> temp;
        
        int no;
        cin >> no;
        
        for(int i = 0; i < no; i++) {
            int el;
            cin >> el;
            temp.push_back(el);
        }
        
        if(no == 2) {
            int t1 = temp[0];
            int t2 = temp[1];
            
            
            if((t1 > 0 && t2 > 0) || (t1 < 0 && t2 < 0)){
                cout << abs(t1) + abs(t2) << endl;
            } else if(t1 < 0 || t2 < 0 ) {
                cout << max(abs(t1), abs(t1)) << endl;;
            } 
        }
        
        i++;
    }
}