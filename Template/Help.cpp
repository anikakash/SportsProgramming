#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);
#endif
    string rendom = " )aAb^B+1c[Cd(9D`e#}Ef_2.F!g$Gh|Hi{\"I3j+Jk'KlL<4m\\~M@nN-o/O5,p&P:qQrR->6s;]tTu?U=7v!Vw[W%x8&XyYzZ`>{";
    cout << "PASSWORD LENGHT: ";
    int passlen=8;
    // cin >> passlen;
    srand(time(NULL));
    for(int i = 0; i < passlen; i++){
        int j = rand() % 99 + 1;
        cout << rendom[j];
    }
    cout << endl;
}