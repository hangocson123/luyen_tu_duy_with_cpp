#include <iostream>
#include <string>
//Viết chương trình nhập vào một chuỗi, tính số lượng chữ cái, số lượng chữ số và số lượng ký 
//tự đặc biệt trong chuỗi đó. 
using namespace std;
//done
int main(){
    string s;
    //tạo ra biến đếm


    int ki_tu = 0;
    int chu_so = 0;
    int ki_tu_DB = 0;


    cout <<"nhập vào s: ";getline(cin,s);//nhập đầu vào

    //phần logic
    for(int i = 0; i < s.size();i++){
        //kiểm tra kí tự nếu mà kí tự thuộc trong khoảng là kí tự hoa hoặc thường từ a - z thì sẽ thỏa mãn
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            //khi thỏa mãn một lần thi biến đếm sẽ cộng một lần
            ki_tu++;
        }
        else if(s[i] >= '0' && s[i] <= '9'){
            chu_so++;
        }
        else{
            ki_tu_DB++;
        }
    }
    //in ra
    cout <<"số lượng kí tự là: " <<ki_tu <<" số lượng chữ số là: " << chu_so<<" số lượng kí tự đặc biệt là: " <<ki_tu_DB<<endl;
    return 0;
}