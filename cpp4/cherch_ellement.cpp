#include<iosream>
using namespace std;

int main(){
  int tableau[]={14,7,31,11,3,5,9};
  int taille=6;
  int valeur;
  bool trouve=false;
  
  cout<<"entrez le nombre a cherche dans le tableau:"<<endl;
  cin>>valeur;
  
  for(int i=0;i<=taille;i++){
    if(tableau[i]==valeur){
      trouve=true;
    }
  }
  if(trouve){
    cout<<"vrais"<<endl;
  }else{
    cout<<"fausse"<<endl;
  }
  return 0;
}
