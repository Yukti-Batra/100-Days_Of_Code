#include<iostream>
using namespace std;
void HOME(int source,int destination){
    cout<<"source is"<<source<<" destination is "<<destination<<endl;
    if(source==destination){
        cout<<"Phaunch gyeeeee";
        return ;
    }
    //processing
    source++;
    HOME(source, destination);  //source badal chuka hai
}
int main(){
    int destination=10;
    int source=1;
    HOME(source,destination);
}