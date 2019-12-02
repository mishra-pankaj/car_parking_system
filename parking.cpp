#include<iostream>
using namespace std;
 int main()
 {
      int input;
      int amount = 0,count = 0;
      int r=0,c=0,b=0;
      while(true){

      cout<<"******************************  PP parking  ***************************************"<<endl;
      cout<<"MENU"<<endl;
      cout<<"************************************************************************************************"<<endl;
      cout<<"Press 1 for Rickshaw"<<endl;
      cout<<"Press 2 for Car"<<endl;
      cout<<"Press 3 for Bus"<<endl;
      cout<<"Press 4 to show record of parking"<<endl;
      cout<<"Press 5 to delete record"<<endl;
      cin>>input;
      if(input==1)
      {
          r=r+1;
      amount = amount + 100;
      count  = count  + 1;
      }
      else if (input==2)
      {
          c=c+1;
      amount = amount + 200;
      count  = count  + 1;
      }
      else if (input==3)
      {
          b=b+1;
      amount = amount + 300;
      count  = count  + 1;
      }
      else if (input==4)
      {
    cout<<"*******************************************************"<<endl;
      cout<<"Total amount ="<<amount<<endl;
      cout<<"THE total no of vechile parked ="<<count<<endl;
      cout<<"THE total no of rikshaw parked ="<<r<<endl;
      cout<<"THE total no of  car parked ="<<c<<endl;
      cout<<"THE total no of   bus parked ="<<b<<endl;
      cout<<"*******************************************************"<<endl;
      }
      else if (input==5)
      {
      amount = 0;
      count  = 0;
      r=0;
      c=0;
      b=0;
      cout<<"Total amount ="<<amount<<endl;
      cout<<"THE total no of vechile parked ="<<count<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<"RECORD DELETED"<<endl;
    cout<<"*******************************************************"<<endl;
      }
      else{
           cout<<"Invalid No"<<endl;
      }
      }
      return 0;
 }
      
      
      
      
 
