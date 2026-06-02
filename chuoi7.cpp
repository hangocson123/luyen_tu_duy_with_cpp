#include <iostream>
#include <string>
//Viết chương trình nhập vào một chuỗi, kiểm tra xem chuỗi đó có chứa chữ cái hoa hay không.
using namespace std;
bool chuoi(string s){
    for(int i = 0;i < s.size();i++){
        //duyệt và kiểm tra
        if(s[i] >= 'A' && s[i] <= 'Z'){
            return true;
        }
    }
    return false;
}
int main(){
    string s;
    cout <<"nhập s: ";getline(cin,s);
    if(chuoi(s)){
        cout <<"chuỗi có kí tự viết hoa";
    }
    else{
        cout<<"chuỗi k có kí tự viết hoa";
    }
    return 0;
}