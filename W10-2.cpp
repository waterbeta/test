#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, tar;
    cin >> n >> tar;
    int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    int left = -1, right = 0, nown = 0;
    for(; right < n; right++){
        nown += A[right];
        //cout << "#case: " << right << "\n";
        while(left + 1 < right && nown - A[left + 1] >= tar){
            //cout << " - left = " << left << "\n"; 
            nown = nown - A[++left];
        }
        //cout << "left: " << left << ", right: " << right << ", nown: " << nown << "\n";
        if(nown < tar){
            cout << -1 << " ";
        }else{
            cout << left + 2 << " ";
        }
        //cout << "=====================\n";
    }
    cout << "\n";
    return 0;
}
