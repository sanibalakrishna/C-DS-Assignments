#include<bits/stdc++.h>
using namespace std;
void RemoveconsDuplicates(char* String)
{
    if(String[0] == '\0')
    return;
    if(String[0] == String[1])
    {
      int i =0;
      while(String[i] != '\0'){
          String[i] = String[i + 1];
          i++;
      }
      RemoveconsDuplicates(String);
      
    }
    RemoveconsDuplicates(String + 1);
}
int main(){
    char String[]="aabcca";
    RemoveconsDuplicates(String);
    cout<<String<< endl;
    return 0;
}