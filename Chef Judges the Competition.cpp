    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    int t,i,j,n,k,c,l;
    cin>>t;
    while(t--){
    	c=0,l=0;
    	cin>>n;
    	int a[n],b[n];
    	for(j=0;j<n;j++)
    		cin>>a[j];
    	for(k=0;k<n;k++)
    		cin>>b[k];
    	sort(a,a+n);
    	sort(b,b+n);
    	for(j=0;j<n-1;j++)
    		c+=a[j];
    	for(k=0;k<n-1;k++)
    		l+=b[k];
     
    if(c>l)
    	cout<<"Bob"<<endl;
    else if(l>c)
    		cout<<"Alice"<<endl;
    else
    	cout<<"Draw"<<endl;}
    return 0;}