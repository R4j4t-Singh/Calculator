#include<iostream>
using namespace std;
int main()
{
    float a,b,d;
    char c;
    while(a)
    {
    cout<<"CALCULATOR \n";
    cin>>a>>c>>b;
    switch(c)
{
    case '+': d = a + b;
              cout<<d; 
             break;
    case '-': d = a - b;
              cout<<d; 
             break;
    case '*': d = a * b;
              cout<<d; 
             break;
    case '/':if(b==0)
              {
                  cout<<"The number cannot be divided by zero \n";
                  break;
              } 
             d = a / b; 
             cout<<d;  
             break;        
}

    cout<<"\n\n\n\n";    
    }


  return 0;  
}