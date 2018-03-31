        #include <iostream>
        using namespace std;
         
        int main() 
        {int T,a,e,o;
        cin>>T;
        e=0,o=0;
        while(T--)
        {
        cin>>a;
        if(a%2==0)
        e++;
        else
        o++;
        }
        if(e>o)
        cout<<"READY FOR BATTLE";
        else
        cout<<"NOT READY";
        	return 0;
        }  