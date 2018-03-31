        #include<iostream>
        using namespace std;
        int main(){
        int n,t;
         
        cin>>t;
         
        while(t--){
        cin>>n;
        char a[n];
        for(int i=0;i<n;i++){
        cin>>a[i];
        }
        int f=0,in=0,ns=0;
        for(int j=0;j<n;j++){
        if(a[j]=='Y')
        f=f+1;
        else if(a[j]=='I')
        in=in+1;
        else
        ns=ns+1;
        }
        if(f>0&&in==0)
        cout<<"NOT INDIAN"<<endl;
        else if(in>0)
        cout<<"INDIAN"<<endl;
        else if(in==0&&f==0)
        cout<<"NOT SURE"<<endl;
        }
        return 0;
        }
          