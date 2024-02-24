#include<iostream>
#include<stack>
using namespace std;

void ReverseString(string str){
    stack<char> s;
    for(int i=0; i<str.length(); i++){
        s.push(str[i]);
    }

    string ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    cout<<"The reverse  string is: "<<ans<<endl;
}

int main(){
    string str;
    cout<<"Enter the string: ";
    
    getline(cin,str);

    ReverseString(str);
    return 0;
}