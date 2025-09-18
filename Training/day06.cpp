// Date 18/09/2025

#include <iostream>
using namespace std;



int main()
{
  // program to shift element in left once in array
    
    int arr[5] = {1, 2, 3, 2, 1};// output {2,3,4,5,1}
    int first=arr[0];
    for(int i=1;i<5;i++)
    { 
      arr[i-1]=arr[i];
    }
   arr[5-1]=first;

    for(int i=0;i<5;i++)
    {
      cout<< arr[i]<< " ";
    }

    // palindrome


   int flag=1;
    for(int i=0;i<5/2;i++)
    {
        if(arr[i]!=arr[5-i-1])
        {
            flag =0;
          break;
        }
    }
    if(flag==1) cout<< "palindrome"<< endl;
    else cout<< "not"<< endl;
            
}