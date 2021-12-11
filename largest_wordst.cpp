#include<iostream>
using namespace std;
int main()
{
    
    
    string str;
    getline(cin,str);
    cin.ignore();
    int len =str.length();
    

    int current_len=0,max_len=0;
    int initial=0,start=0;
    int i=0;
    
    while(1)
    {
       if(i==len+2)
        break;

       if(str[i]==' '|| i==len+1)
       {
           
           if(current_len>max_len)
           {   
               initial=start;
               max_len=current_len;
           }
           current_len=0;
           start=i+1;
       }
       else
       {
       current_len++;
       }
       
       i++;
    }

    for (int i = 0; i < max_len; i++)
    {
        cout<<str[i+initial];
    }

      

    cout<<endl<<max_len<<endl;
    return 0 ;

}