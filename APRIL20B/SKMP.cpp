// solution to:https://www.codechef.com/AUG20B/problems/SKMP
// my submission : https://www.codechef.com/viewsolution/36613561

#include<iostream>
#include<string>
#include<vector>
using namespace std;





void solved()
{
    int first_index=0,second_index=-2;
    vector<int>arr(28);
    fill(arr.begin(),arr.end(),0);
    string s1,s2,s3,answer;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<s1.size();i++)
    {
        arr[s1[i]-'a']++;
    }
    for(int i=0;i<s2.size();i++)
    {
        arr[s2[i]-'a']--;
    }

    for(int i=0;i<28;i++)
    {
        if(i>=s2[0]-'a'){
            second_index=first_index+arr[i];
            break;}
        first_index+=arr[i];}

    for(int i=0;i<28;i++)
    {
        if(arr[i]>0){char tem=i+97;
            s3+=tem;
            arr[i]--;
            i--;}
    }
    if(second_index == -2){
        s3.insert(first_index,s2);
        cout<<s3<<endl;
        return;}
    string s4=s3;
    s3.insert(first_index,s2);
    s4.insert(second_index,s2);
    if(s3.compare(s4)>0)
    	cout<<s4<<endl;
    else
    	cout<<s3<<endl;

}
int main()
{
      int te;

      cin>>te;
      for(int i=0;i<te;i++)
      {
          solved();}    return 0;
}
