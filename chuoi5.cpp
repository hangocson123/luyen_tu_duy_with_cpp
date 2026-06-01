#include <iostream>
#include <string>
//Viết chương trình nhập vào một chuỗi, xóa bỏ các khoảng trắng thừa trong chuỗi đó.
using namespace std;

int main(){
    string s;
    string ki_tu;
    cout <<"nhập vào s: ";getline(cin,s);
    //nếu không có kí tự khoảng trắng thì sẽ cộng thêm vào chuỗi
    for(int i = 0; i < s.size();i++){
        if(s[i] != ' '){
            ki_tu += s[i];
        }
    }
    cout <<ki_tu;
    return 0;
}