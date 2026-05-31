#include <iostream>
#include <string>
//Viết chương trình nhập vào một chuỗi, in ra chuỗi đó đảo ngược.
using namespace std;

int main(){
    string s;
    string dao_nguoc;
    cout<<"nhập vào s: "; getline(cin,s);
    for(int i = s.size() - 1; i >= 0;i--){ // duyệt ngược 
        dao_nguoc += s[i]; // mỗi lần duyệt phần tủ thì sẽ thêm phần tử đó vào chuỗi
    }
    cout << dao_nguoc;//in ra chuỗi đảo ngược
    return 0;
}
    
