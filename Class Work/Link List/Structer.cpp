#include<bits/stdc++.h>
using namespace std;

typedef struct info {
    string name;
    int Roll;
    double mark;

}info;
int main()
{
    info list[10];
    for(int i=0; i<10; i++)
    {
        cin>>list[i].name;
        cin>>list[i].Roll;
        cin>>list[i].mark;
    }
    cout<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<list[i].name<<" ";
        cout<<list[i].Roll<<" ";
        cout<<list[i].mark<<endl;
    }
    return 0;
}

///using structher;
