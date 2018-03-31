        #include<iostream>
        using namespace std;
        int main()
        {
          int m,t,n,i,j,flag;
          cin>>t;
          while(t--)
          {
          	cin>>n;
          	int a[n];
          	for(i=0;i<n;i++)
          	cin>>a[i];
          	m=0;
          	for(i=0;i<n;i++)
          	{
          		flag=0;
          		for(j=i+1;j<n;j++)
          		{
          			if(a[i]==a[j])
          			flag=1;
        		  }
        		  if(flag==0)++m;
        	  }
        	  cout<<m<<endl;
          }
          return 0;
        }  