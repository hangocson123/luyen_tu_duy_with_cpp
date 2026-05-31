#include <iostream>
//Viết chương trình nhập vào một chuỗi, in ra chuỗi đó viết hoa. 
using namespace std;
string chuoi(string s){
    for(int i = 0; i < s.size();i++){ // duyệt chuỗi
        if('a' <= s[i] && 'z' >= s[i]){ //kiểm tra điều kiện xem đã là kí tự hoa chưa
            s[i] -= 32;// nếu chưa thì - đi 32
        }
    }
    return s;
}
int main(){
    string s;
    cout <<"nhập vào s: "; getline(cin,s);//nhập vào chuỗi
    cout << chuoi(s);//in chuỗi ra
    return 0;
}