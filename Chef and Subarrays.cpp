        #include <iostream>
        using namespace std;
         
        int main()
        {
         
        long long t=0;
        cin>>t;
        while(t--)
            {
            long long n=0,c=0;
            cin>>n;
            long long v[n];
            for(long long i=0;i<n;i++) {cin>>v[i];}
            for(long long i=0;i<n;i++)
                {
                long long sum=0,product=1;
                for(long long j=i;j<n;j++)
                    {
                    sum+=v[j];
                    product*=v[j];
                    if(sum==product) {c++;}
                    }
                }
            cout<<c<<"\n";
            }
        return 0;
        }  