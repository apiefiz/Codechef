        #include <bits/stdc++.h>
        using namespace std;
        int main()
        {
        	int t;
        	cin>>t;
        	while(t--)
        	{
        		int n,k,i,sum=0;
        		cin>>n;
        		cin>>k;
        		for(i=0;i<n;i++)
        		{
        			int t,d;
        			cin>>t;
        			cin>>d;
        			if(k>t)
        			{
        				k=k-t;
        			}
        			else
        			{
        				sum+=(t-k)*d;
        				k=0;
        			}
        		}
        		cout<<sum<<endl;
        	}
        }  