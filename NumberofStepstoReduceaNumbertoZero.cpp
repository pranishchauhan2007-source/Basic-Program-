#include<iostream> 
using namespace std;
    int main() 
    {
        int num, step=0;
        cin>>num;
        while (num>0)
        {
            if(num%2==0)
                num=num/2;
            else
                num=num-1;
            
            step++;
        }
        cout<< step;
    }
    