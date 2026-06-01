#include <iostream>
#include <string>
//Viết chương trình nhập vào một chuỗi, kiểm tra xem chuỗi đó có chứa ký tự đặc biệt hay 
//không. 
using namespace std;
bool chuoi(string s){
    bool co = false;//sài cách này thì vẫn hay hơn
    //duyệt for 
    for(int i = 0; i < s.size();i++){
        //so sánh
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
        }
        //kiểm tra xem có phải là số k
        else if(s[i] >= '0' && s[i] <= '9'){
            //return false;
        }
        //nếu qua đc hết các vong lặp thì là có kí tự đb
        else{
            co = true;
            break;
        }
    }
    return co;
}
int main(){
    string s;
    cout <<"nhập vào s: ";getline(cin,s);
    //in và nhập
    if(chuoi(s)){
        cout <<"chuỗi có kí tự đặc biệt";
    }
    else{
        cout <<"chuỗi k có kí tự đặc biệt";
    }

    return 0;
}