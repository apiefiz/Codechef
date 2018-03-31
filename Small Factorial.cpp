    #include <iostream>
    using namespace std;
     
    int main()
    {
    	int a,fact,t;
    	cin>>t;
    	while(t--)
    	{
    		cin>>a;
    	fact=1;
    	for(int i=1;i<=a;i++)
    	{
    		fact=fact*i;
    	}
    	cout<<fact<<"\n";
    }
    return 0;
    } 