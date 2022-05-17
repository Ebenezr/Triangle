#include <iostream>
#include "header.h"
using namespace std;

//method to draw v triangle
void Triangle::vee(){

  int T,H,Gap1,cnt,i,j;
  while(true)
  {

    cin >> H;
    for(i=H,Gap1=0,cnt=(H-2)*2+1;i>1;i--,Gap1++,cnt-=2)
    {
      for(j=0;j<Gap1;j++)cout<<" ";
      cout<<"*";
      for(j=0;j<cnt;j++)cout<<" ";
      cout<<"*"<<endl;
    }
    for(j=0;j<Gap1;j++)cout<<" ";
    cout<<"*"<<endl;
  }
 
}
