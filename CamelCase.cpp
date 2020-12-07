#include<iostream>
using namespace std;


void solution() {
    string str;
    cin>>str;
    
    int len = str.size(); //for claculating te length of the string
     int ans = 1; //ans=1 because all letters in the first word are small
     
     for(int i=0;i<len;i++)
     {
     if(str[i]>= 'A' && str[i]<= 'Z')   //checking uppercase letter
    { 
            {
                ans++;
            }
     }
     }
   cout<<ans<<endl;
     }
     
int main()
{
    solution();  //calling solution function
    return 0;    

}
