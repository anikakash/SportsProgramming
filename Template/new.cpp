#include<bits/stdc++.h>
using namespace    std;
int main(){
    vector<string>v;
    string s;
    while(getline(cin,s)){
        v.push_back(s);
    }
    int flg=0;
    vector<string>v1;
    for(int i=0; i<v.size(); i++){
        string ss="", tmp=""; int ch=0;
        for(int j=0; j<v[i].size(); j++){
            if(v[i][j]=='/'&&v[i][j+1]=='/')break;
            else if(v[i][j]=='/'&&v[i][j+1]=='*' && v[i][j-1]==' '){flg=1; ss.clear();}
            else if(v[i][j]=='*'&&v[i][j+1]=='/'){
                flg=0; break;
            }
            else if(!flg)ss+=v[i][j];
        }
        for(int k=0; k<ss.size(); k++)if(ss[k]>='a' && ss[k]<='z' || ss[k]=='{' || ss[k]=='}')ch=1;
        if(!ss.empty() && ch)v1.push_back(ss);
    }
    for(int i=0; i<v1.size(); i++){
        for(int j=0; j<v1[i].size(); j++){
            cout<<v1[i][j];
        }
        cout<<"\n";
    }
    return 0;
}