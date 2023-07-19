
#include <iostream>
using namespace std;
int main() {
  //check whether a string is palindrome or not 
  int n,check=1;
  cin>>n;
  char arr[n+1];
  cin>>arr;
   for(int i=0;i<n;i++){
       if(arr[i]!=arr[n-1-i]){
           check=0;
           break;
       }
   }
  if(check){
      cout<<"String is a palindrome ";
  }else{
      cout<<"String is not a palindrome ";
  }
  return 0;
}