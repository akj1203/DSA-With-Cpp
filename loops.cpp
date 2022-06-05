#include<iostream>
using namespace std;
int main(){
    // Question-1 Print Number from 1 to 5
// int n;
// cout<<"Enter a Number"<<endl;
// cin>>n;
// int i=1;
// while (i<=n)
// {
//     cout<<i<<" ";
//     i=i+1;
// }
// Question-2 Print The Sum from 1 To n
// int n;
// cout<<"Enter a Number"<<endl;
// cin>>n;
// int sum=0;
// int i=2;
// while (i<=n)
// {
//     sum+=i;
//     i=i+2;
// }

// cout<<"Value of Sum Of Even Number Is "<<sum<<endl;
int n;
cin>>n;
int i=2;
while (i<n)
{
    if (n%i==0)
    {
        cout<<"Non Prime For "<<i<<endl;
    }else
    {
        cout<<"Prime for "<<i<<endl;
    }
    
    i=i+1;
}


return 0;
}