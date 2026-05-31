#include <iostream>
#include<string>
//Viết chương trình nhập vào một chuỗi, kiểm tra xem chuỗi đó có phải là chuỗi chữ thường 
//hay không. 
using namespace std;
bool chuoi(string s){
    for(int i = 0;i <= s.size();i++){
        if('a' <= s[i] && s[i] <= 'z'){ // chúng ta cần là so sánh kí tự chứ không phải là so sánh số
            return true; //nếu thỏa mãn điều kiện thì đúng
        }
    }
    return false;//nếu k thỏa mãn thì sai
}
int main(){
    string s;
    cout <<"nhập vào s: ";getline(cin,s);
    if(chuoi(s)){
        cout <<"đây là chuỗi thường";

    }
    else{
        cout<<"đây k phải chuỗi thường";
    }
    return 0;
}