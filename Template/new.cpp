#include <bits/stdc++.h>
 
using namespace std;
int countOdd(int a, int b){
    int N = (b - a) / 2;
    if (a % 2 != 0 || b % 2 != 0)
        N += 1;
 
    return N;
}

int main()
{   
    freopen("int.txt", "r", stdin);
    int a, b; cin>>a>>b;
    int odds = countOdd(a, b);
    int evens = (b - a + 1) - odds;
     
    cout << "Count of odd numbers is " << odds << endl;
    cout << "Count of even numbers is " << evens << endl;

    return 0;
}