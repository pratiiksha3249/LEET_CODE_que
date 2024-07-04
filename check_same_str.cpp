#include<iostream>
using namespace std;
int main(){
    int f=0;
//   string event1[100]={"01:15","02:00"};
//   string event2[100]={"02:00","03:00"};

  string event1[100]={"01:15","02:00"};
  string event2[100]={"02:00","03:00"};
  
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){

    if(event1[i]==event2[j]){
        f=1;
        break;
    }
    
    }
    if(f==1){
        break;
    }
  }
  if(f==1)
  cout<<"True";
  else
  cout<<"False";
    return 0;
}
