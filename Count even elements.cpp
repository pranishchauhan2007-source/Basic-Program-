#include <iostream>

using namespace std;
int main()
{
  int arr[]={21,34,49,53,67,79,80};
  int n=sizeof(arr)/sizeof(arr[0]);
  int count=0;
  for (int i=0;i<n; i++)
  {
  if(arr[i]%2==0)
  {
  count++;
  }
  }
  cout<<count;
}