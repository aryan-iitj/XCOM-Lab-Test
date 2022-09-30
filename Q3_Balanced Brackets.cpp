#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<string> tests{
 "{}()[]",
 "((())))",
 ")()",
 "({})",
 "[({})]"   
};
bool opposite(char x, char y){
        if(x==')' && y=='(') return true; 
        if(x==']' && y=='[') return true;
        if(x=='}' && y=='{') return true;
        return false;
        
}
 bool matched (string str) {
    bool result = false;
    stack<char> s;
    for(int i=0;i<str.length();i++){
        if(str[i]==')' || str[i]==']' || str[i]=='}'){
            if(s.empty()) return false;
            else{
                char y= s.top();
                if( opposite(str[i],y) ) s.pop();
                else return false;
                
            }
            
        }
        else if(str[i]=='(' || str[i]=='[' || str[i]=='{') s.push(str[i]);
        
    }
    if(!s.empty()) result=false;
    else result=true;
    
    
    return result;
 }
 int main() {
    vector<string>sptr;
    
    for(int i=0;i<tests.size();i++){
        if( matched(tests[i])==true) cout<< "true"<<"\n";
        else cout<<"false"<<"\n";
    }
    return 0;
 }