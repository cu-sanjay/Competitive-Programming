#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    int num; cin>>num;
    char word[100]; cin>>word;

    for(int i=0;i<num;i++){
        word[i]=tolower(word[i]);
    }

    sort(word,word+num);
    int count=0;

    for(int i=0;i<num;i++){
        if(word[i]!=word[i+1]){
            count++;
        }
    }

    if(count==26)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
