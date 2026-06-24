#include <iostream>
using namespace std;

int main() {
    int i, count = 0,rem;

    for(int a = 2; a <= 100; a++)
    {
        for(i = 2; i < a; i++)
        {
            if(a % i == 0) 
            {
                break;
            }
        }

        if(i == a) 
        {
        int tem=a;
        int sum=0;
         while(tem>0)
         {
            rem=tem%10;
            sum=sum+rem;
            tem/=10;
            }
            for(i = 2; i < sum; i++)
        {
            if(sum % i == 0) 
            {
                break;
            }
        }

        if(i == sum) 
        {
        count++;
        }
            
        }
    }

   cout << count<<endl;
}