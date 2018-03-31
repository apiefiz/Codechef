olution: 17970520

CodeChef submission 17970520 (C++14) plaintext list. Status: AC, problem LUCKFOUR, contest CODECHEF. By apiee_fizz (apiee_fizz), 2018-03-27 22:12:53.

    #include <iostream>
    using namespace std;
     
    int main()
    {
    unsigned long long t=0;
    cin>>t;
     
    while(t--)
        {
        unsigned long long c=0;
        string n="";
        cin>>n;
     
        for(unsigned long long i=0;i<n.length();i++)
            {
            if(n[i]=='4') {c++;}
            }
        cout<<c<<"\n";
        }
    return 0;
    } 