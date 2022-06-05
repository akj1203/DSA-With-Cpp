#include <iostream>
using namespace std;
// Question-1
// bool isEven(int a)
// {
//     if (a & 1)
//     {
//         return 0;
//     }
//     else
//     {
//         return 1;
//     }

//     return isEven;
// }
// int main()
// {
//     int num;
//     cout << "Enter a Number" << endl;
//     cin >> num;
//     if (isEven (num))
//     {
//         cout << "The Number is Even" << endl;
//     }
//     else
//     {
//         cout << "Number is Odd" << endl;
//     }

//     return 0;
// }
// Question-2
// #include<iostream>
// using namespace std;
// int fact(int n){
//     int fact=1;
//     for (int i = 1; i <=n; i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
// }
// int ncr(int n,int r){
//     int num=fact(n);
//     int denom=fact(r)*fact(n-r);
//     return num/denom;
    
// }
// int main(){
//     int n,r;
//     cout<<"Enter First Number"<<endl;
//     cin>>n;
//     cout<<"Enter Second Number"<<endl;
//     cin>>r;
//     int answer=ncr(n,r);
//     cout<<"The Answer is "<<answer<<endl;

// return 0;
// }
// Question-3
bool IsPrime(int n){
    for (int i = 2; i <n; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}
    
    #include<iostream>
    using namespace std;
    int main(){
    int n;
    cout<<"Enter The Number"<<endl;
    cin>>n;
    if (IsPrime(n))
    {
        cout<<n<<" Is Prime"<<endl;
    }else
    {
        cout<<"Non Prime"<<endl;
    }
    
    
    return 0;
    }
    


