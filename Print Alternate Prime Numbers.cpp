#include <iostream>
 namespace std;
int main() {
    int i ,count=0;
    for(int a=2;a<=100;a++)
    {
        for(i=2;i<a;i++)
         {
            if (a%i==0) 
            {
                break;
            }
        }
        if(i==a) 
        {
            count++;
        if(count%2==0)
        cout<<a<<endl;
        }
    }
}