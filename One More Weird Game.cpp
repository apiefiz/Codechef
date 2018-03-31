        #include<bits/stdc++.h>
        using namespace std;
        int main()
        {
        	int t;
        	cin>>t;
        	while(t--)
        	{
        		int n,m;
        		cin>>n>>m;
        		int ans=(m*(n-1))+(n*(m-1));
        		cout<<ans<<endl;
        	}
        }   