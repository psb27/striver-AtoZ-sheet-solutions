#include <bits/stdc++.h> 
using namespace std;

void trianglePattern(){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }

}
int main()
{
    trianglePattern();
 
 return 0;
}