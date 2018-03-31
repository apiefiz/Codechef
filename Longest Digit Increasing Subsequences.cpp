    #include <iostream>
    using namespace std;
     
    int main()
    {
        int t,n,i,j,k;
        cin>>t;
        while(t--)
        {
            cin>>n;
            if(n==1)
            {
                cin>>i;
                cout<<i<<'\n';
            }
            else
            {
                j=0;
                for(int i=0;i<n;i++)
                {
                    j=j*10;
                    cin>>k;
                    j+=k;
                    
                }
                cout<<j<<'\n';
            }
            
        }
        return 0;
    } 