#include <iostream>
using namespace std;
int main()
{
    // Question-1
    // int n;
    // cout<<"Enter The Value of n"<<endl;
    // cin>>n;
    // int sum=0;
    // for (int i = 1; i <=n; i++)
    // {
    //     sum+=i;

    // }
    //     cout<<sum<<endl;
    // Question-2
    // Print Fibonaci Series
    // int n;
    // cin>>n;
    // int a=0;
    // int b=1;
    // cout<<a<<" "<<b<<" ";
    //  for(int i = 1; i <=n; i++)
    // {
    //     int sum=a+b;
    //     cout<<sum<<" ";
    //     a=b;
    //     b=sum;
    // }
    // Question-3
    // Check a Number is prime or Not
    // int n;
    // cin >> n;
    // bool IsPrime = 1;
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         IsPrime = 0;
    //         break;
    //     }
    // }
    // if (IsPrime == 0)
    // {
    //     cout << "Not Prime" << endl;
    // }
    // else
    // {
    //     cout << "Prime" << endl;
    // }
    int prod=1;
    int n;
    cin>>n;
    int sum=0;
    while (n!=0)
    { int digit=n%10;
    prod=prod*digit;
    sum=sum+digit;
    n=n/10;
    int answer=prod-sum;
    cout<<answer;
        
    }
    


    return 0;
}