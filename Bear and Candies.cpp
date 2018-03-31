    #include <iostream>
    using namespace std;
    int main() {
        int t;
        cin>>t;
        while(t--){
            int a,b;
            cin>>a>>b;
            for(int i=1;i<=4000;i++){
                if(i%2==1){
                    a=a-i;
                    if(a<0){
                        cout<<"Bob"<<endl;
                        break;
                    }
                }
                else{
                    b=b-i;
                    if(b<0){
                        cout<<"Limak"<<endl;
                        break;
                    }
                }
            }
        }
    } 