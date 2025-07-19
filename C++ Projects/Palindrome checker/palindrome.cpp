#include <iostream>
#include <string>
using namespace std;

void palindrome(string word){

  int len=word.length();
  
  bool ispalindrome=true;

   for(int i=0;i<len/2;i++)
   {

   if(word[i]!=word[len-i-1])
   {
     ispalindrome=false;
     break;
   }
    
   }
    if(ispalindrome)
    {
      cout<<"It's palindrome";
    }
   else
    {
    cout<<"Not a palindrome";
    }
  
  }

int main() {

string str;

  cout<<"Enter word: ";
  getline(cin,str);
  
  palindrome(str);

 
}