#include <bits/stdc++.h> 
using namespace std;

void trianglePattern(){
    int n;
    cin >> n;

    for(int i=n; i>=1; i--) {
        for(int j=i; j>=1; j--) {
            cout << "*" << " ";
        }
        cout << endl;
    }

    for(int i=n; i>=1; i--) {
        int k=1;
        for(int j=i; j>=1; j--) {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }

}
int main()
{
    trianglePattern();
 
 return 0;
}