
#include <bits/stdc++.h>

#define int            long long
#define float          double
#define vi             vector<int>
#define FIO            ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int32_t main(){
    cout<<"Please enter the two numbers on which the operation is to be performed:  ";
    float a,b;
    cin>>a>>b;
    cout<<"Please enter the operator to be used in calculation: ";
    char c;
    cin>>c;
    switch (c)
    {
    case '+':
        cout<<"The sum is equal to: "<<a+b;

        break;
    case '-':
        cout<<"The difference of the two numbers is:    "<<(a>b)?a-b:b-a;
        break;
    case '*':
        cout<<"The product of the two numbers is:   "<<a*b;
        break;
    case '/':
        cout<<"The division of the two numbers gives the result:    "<<a/b;
        break;
    default:
        cout<<"Wrong input operator!!";
        break;
    }
    return 0;
}