## Denis Nomena Repository
#include<iostream>
int main(){
int age;
std::cout<<"ecrire votre âge:"<<std::endl;
std::cin>>age;
if(age<18){
   std::cout<<"mineur"<<std::endl;}else{
    if(age<60){
        std::cout<<"adult"<<std::endl;
    }else{
        std::cout<<"senior" <<std::endl;
        }
}
    return 0;
}
