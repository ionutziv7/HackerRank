#include <iostream>
using namespace std;

int main()
{
    string str;
    int T;
    cin>>T;
    
    for(int i = 0; i< T; i++)
    {
        cin>>str;
        
        for(int j = 0;j< str.length(); j++)
        {
            if(j % 2 ==0)
            {
                cout<<str[j];
            }
        }
        cout<<"  ";
        
        for(int j = 0;j< str.length(); j++)
        {
            if(j % 2 !=0)
            {
                cout<<str[j];
            }
        }
         cout<<endl;
    }   
    
    cout<<endl;
	return 0;
}
