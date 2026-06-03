#include <iostream>
#include <string>
//Viết chương trình nhập vào một chuỗi, xóa bỏ các chữ cái trùng nhau trong chuỗi đó.
using namespace std;

int main() {
    string s;
    cout << "Nhập vào chuỗi s: ";
    getline(cin, s);

    // Vòng lặp i: Chọn ký tự làm mốc để so sánh
    for (int i = 0; i < s.size(); i++) {
        
        // Vòng lặp j: Quét các ký tự đứng sau ký tự mốc i
        for (int j = i + 1; j < s.size(); j++) {
            
            // Nếu tìm thấy ký tự s[j] giống hệt ký tự mốc s[i]
            if (s[i] == s[j]) {
                s.erase(j, 1); // Xóa đúng 1 ký tự tại vị trí j
                
                j--; // Lùi j lại vì sau khi xóa, 
                     // các ký tự phía sau bị dồn sang trái, tránh bỏ sót phần tử.
            }
        }
    }

    cout << "Chuỗi sau khi xóa trùng: " << s << endl;

    return 0;
}