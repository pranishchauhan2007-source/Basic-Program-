#include<iostream> 
using namespace std;
    int main() 
    {
        int num,rem, count=0;
        cin>>num;
        int k=num;
        while(num>0)
        {
            rem=num%10;
            if(k%rem==0)
                count++;

            num=num/10;
        }
        cout<< count;
    }

