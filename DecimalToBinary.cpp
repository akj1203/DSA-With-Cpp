#include<iostream>
#include<math.h>
using namespace std;
double power (double X, int Y)
{
int i;
double value = 1;
    for (i = 0; i < Y; i++)

    value *= X;

    return value;
}
int main(){
int n;
cout<<"Enter The Number"<<endl;
cin>>n;
int ans=0;
int i=0;
while (n!=0)
{
    int bit=n&1;
    ans=(bit*power(10,i)) +ans;
    n=n>>1; 
    i++;
}
cout<<ans<<endl;

return 0;
}