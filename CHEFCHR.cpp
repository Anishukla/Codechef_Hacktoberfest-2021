# include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    string s;
    map<char,int>::iterator it;
    cin>>t;
    while(t--){
        cin>>s;
        long long count=0;
        for(long long int i=0;i<s.length();i++){
           // cout<<s[i]<<"hi"<<endl;
            map<char,int>arr;
            arr['c']=arr['h']=arr['e']=arr['f']=1;
            if((s[i]=='f')||(s[i]=='e')||(s[i]=='h')||(s[i]=='c')){
                if(arr.at(s[i])==1)
                    arr[s[i]]=0;
                if((s[i+1]=='f')||(s[i+1]=='e')||(s[i+1]=='h')||(s[i+1]=='c')){
                    if(arr.at(s[i+1])==1)
                        arr[s[i+1]]=0;
                    if((s[i+2]=='f')||(s[i+2]=='e')||(s[i+2]=='h')||(s[i+2]=='c')){
                        if(arr.at(s[i+2])==1)
                            arr[s[i+2]]=0;
                        if((s[i+3]=='f')||(s[i+3]=='e')||(s[i+3]=='h')||(s[i+3]=='c')){
                            if(arr.at(s[i+3])==1)
                                arr[s[i+3]]=0;
                            if((arr['c']==0)&&(arr['h']==0)&&(arr['e']==0)&&(arr['f']==0))
                                count++;
                        }
                    }
                }
            }
        }
        if(count!=0)
        cout<<"lovely "<<count<<endl;
        else
        cout<<"normal "<<endl;

    }
    return 0;
}