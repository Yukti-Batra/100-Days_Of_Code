#include<iostream>
#include<vector>
using namespace std;
void Sub(string str, vector<string> &ans,string output,int index){
    if(index>=str.length()){
        ans.push_back(output);
        return ;
    }
    //exclude
    Sub(str,ans,output,index+1);
    //include
    char element=str[index];
    output.push_back(element);
    Sub(str,ans,output,index+1);
}
int main(){
    string str="abc";
    vector<string> ans;
    string output=" ";
    int index=0;
    Sub(str,ans,output,index);
    for(int i=0;i<ans.size();i++){
        cout<<"{"<<ans[i]<<"}";
    }cout<<endl;
    return 0;
}