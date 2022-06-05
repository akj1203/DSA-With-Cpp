#include<iostream>
using namespace std;
int getMin(int num[], int Size){
       int min= INT32_MAX;
       for (int i = 0; i <Size; i++)
       {
           if (num[i]<min)
           {
            min=num[i];
           }
           
       }
       
       return min;
}
int getMax(int num[], int Size){
       int max= INT32_MIN;
       for (int i = 0; i <Size; i++)
       {
           if (num[i]>max)
           {
            max=num[i];
           }
           
       }
       
       return max;
}
int main(){
int Size;
cin>>Size;
int num[100];
for (int i = 0; i < Size; i++)
{
    cin>>num[i];
}
cout<<"Max Value Is "<<getMax(num,Size)<<endl;
cout<<"Min Value Is "<<getMin(num,Size)<<endl;

return 0;
}