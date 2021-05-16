//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#define pi                      acose(-1)

typedef long long int           ll;
typedef double                  dl;
using namespace std;

int main()
{
    int comp, num, i;
    int  par, fem, mas;
    char c, e;

    i = 0;
    while(scanf("%d",&comp) != EOF){
        if(i != 0) printf("n");
        par = 0;
        fem = 0;
        mas = 0;
        while(scanf("%d %c%c",&num,&c,&e) == 3){
            if(num == comp){
                par++;
                if(c == 'F') fem++;
                else mas++;
            }
            if(e == 'n') break;
        }
        i++;
        printf("Caso %d:nPares Iguais: %dnF: %dnM: %dn",i,par,fem,mas);
    }
    return 0;
}
