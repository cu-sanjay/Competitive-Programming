#include<bits/stdc++.h>
string simplifyDirectory(string str) {

    str.push_back('/');

    stack<string>st;

    string directory="";

    for(int i=0;i<str.size();i++){

        if(str[i]=='/'){

            if(directory==".."){

                if(!st.empty()) st.pop();

            }

            else if(directory!="." && directory!=""){

                st.push(directory);

            }

            directory="";

        }

        else{

            directory.push_back(str[i]);

        }

    }

    string ans="";

    while(!st.empty()){

        ans="/"+st.top()+ans;

        st.pop();

    }

    return (ans=="" ? "/" : ans);

}