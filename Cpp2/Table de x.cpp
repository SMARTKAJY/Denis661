#include<iostream>
using namespace std;
int main(){
int n,i;
cout<<"entrer un nobre entre [1 ; 9]"<<endl;
cin>>n;
if(n>0&&n<10){
    for(int i=1;i<11;i++){
        cout<<n<<"×"<<i<<"="<<(n*i)<<" ; ";
    }
}else{
    if(n<=0){
        cout<<1<<"×"<<i<<(1*i)<<" ; ";
    }else{
        cout<<9<<"×"<<i<<(9*i)<<" ; ";
    }
}
return 0;
}
 
