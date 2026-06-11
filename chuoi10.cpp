#include <iostream>
#include <string>
//Viết chương trình nhập vào một chuỗi, sắp xếp các chữ cái trong chuỗi đó theo thứ tự bảng 
//chữ cái. 
using namespace std;
string chuoi(string s){
    string ket_qua = "";
    //int min = 0;
    while (s.size() > 0){
        
        //để có thể cho nó cập nhật giá trị liên tục thì phải cho vào vòng lặp và cho lặp liên tục
        int min = 0;
        for(int i = 0;i < s.size();i++){
            if(s[i] < s[min]){
                min = i;
            }
        }
        ket_qua += s[min];

        s.erase(min,1);
    }
    return ket_qua;
}
int main(){
    string s;
    cout <<"nhập vào s: ";getline(cin,s);
    cout <<"chuỗi được viết lại theo bảng chữ cái là: " << chuoi(s);
    return 0;
}