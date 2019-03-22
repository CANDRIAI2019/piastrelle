#include <bits/stdc++.h>
using namespace std;

int N;

int fibonacci(){
    int a=1,b=1,c;
    for (int i=0;i<N-1;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

void print(int t,string prepend){
    if (t>0) print(t-1,prepend+"[O]");
    if (t>1) print(t-2,prepend+"[OOOO]");
    if (t==0) cout<<prepend<<endl;
}

int main(){
    cin>>N;
    cout<<fibonacci()<<endl;
    print(N,"");
}
