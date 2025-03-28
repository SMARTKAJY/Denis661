#include<iostream>
using namespace std;

int main(){
    int fafana[5];
    int somme=0;

    cout<<"entrez les element de tableau:"<<endl;

    for(int i=0;i<5;i++){
        cout<<"element"<<i+1<<":"<<endl;
        cin>>fafana[i];
        somme +=fafana[i];
    }
    cout<<"la somme des element de tableau est:"<<somme<<endl;

    return 0;
}
