#include<iostream>
using namespace std;
int main(){
char ch='1';
int num=1;
cout<<endl;
switch (ch)
{
case 1:cout<<"First"<<endl;
    break;
case '1':switch(num){
           case 1: cout<<"Value of Num Is "<<num<<endl;
                         break;
};
    break;

default:cout<<"It is Default Case"<<endl;
    break;
}
cout<<endl;
return 0;
}