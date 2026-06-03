#include <iostream>
#include <string>
//Viết chương trình nhập vào một chuỗi, thay thế tất cả các chữ cái hoa thành chữ cái thường 
//và ngược lại. 
using namespace std;
string chuoi(string s){
    //duyệt vòng lặp
    for(int i = 0; i <s.size();i++){
        //sẽ đi qua từng kí tự nếu kí tự đó thỏa mã if thì sẽ thay đổi
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
        //nếu k thỏa mãn if thì sẽ đến else if rồi thay đổi theo else if còn các th còn lại thì giữ nguyên
        else if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= 32;
        }
    }
    return s;
}
int main(){
    string s;
    cout <<"nhập vào s: ";getline(cin,s);
    cout << chuoi(s);
    return 0;
}