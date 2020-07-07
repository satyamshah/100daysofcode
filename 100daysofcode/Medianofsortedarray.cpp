#include<iostream>
  int * takeinput(int n)
    {
     int arr[n];   
        for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    return arr;
    }

int main() {
    int n;
    cin>>n;
    int arr1[n],arr2[n],arr3[2n];
  int k=0;
  int l=0;
     arr1[n]=takeinput(n);
     arr2[n]=takeinput(n);
     for(int i=0;i<2n;i++)
     {
         if(arr1[k]<arr2[l])
         {
         arr3[i]=arr1[k];
         k++;
         }
         else
         {
             arr3[i]=arr[l];
             l++;
         }
     }
     cout<<(arr3[n]+arr3[n+1])/2;

	return 0;
}