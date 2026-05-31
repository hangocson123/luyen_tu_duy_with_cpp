

#include <iostream>
#include <string>
using namespace std;

class Sach{
	private:
		string MaSAch;//mã sách
		string TenSach;// tên sách
		string TacGia;//tác giả
		double GiaBan; //giá bán
	//hàm khởi tạo khi chưa có đầu vào
	public:
		Sach(){
			MaSAch = "chưa có mã sách";
			TenSach = "chưa có tên sách";
			TacGia = "chưa có tác giả";
			GiaBan = 0;
		}
		//tạo ra hàm khởi tạo có tham số truyền vào
		Sach(string changeMS, string changeTS, string changeTG, double changeGB){
			MaSAch = changeMS;
			TenSach = changeTS;
			TacGia = changeTG;
			GiaBan = changeGB;

		}
		~Sach(){
			cout <<"sách đã được hủy"<<endl;
		}
		void nhapMS(string ms){
			if(ms.empty())
				cout <<"tên sách không được để trống"<<endl;
			else
				MaSAch = ms;
		}
		void nhapTS(string ts){
			if(ts.empty())
				cout <<"tên sách không được để trống"<<endl;
			else
				TenSach = ts;
		}
		void nhapTG(string tg){
			if(tg.empty())
				cout<<"tên tác giả không được để trống " <<endl;
			else
				TacGia = tg;
		}
		void nhapGB(double gb){
			if(gb <= 0)
				cout <<"giá bán không thế bằng hoặc nhỏ hơn 0" << endl;
			else
				GiaBan = gb;
		}
		string xuatMS(){
			return MaSAch;
		}
		string xuatTS(){
			return TenSach;
		}
		string xuatTG(){
			return TacGia;
		}
		double xuatGB(){
			return GiaBan;
		}
		void nhapTT(){
			string MASACH;
			string TENSACH;
			string TACGIA;
			double GIABAN;
			cout <<"nhập vào mã sách: ";getline(cin, MASACH);
			cout << "nhập vào tên sách: ";getline(cin, TENSACH);
			cout <<"nhập vào giá bán: "; cin >> GIABAN;
			cout <<"nhập vào tác giả: "; getline(cin, TACGIA);
			cin.ignore(1000, '\n');
			// địt mẹ cái này nha cái này phải có hàm thì mới truy cập được để ý 1 tý vào

			nhapMS(MASACH);
			nhapTS(TENSACH);
			nhapTG(TACGIA);
			nhapGB(GIABAN);

		}
		void xuatTT(){
			cout << "mã sách là " << xuatMS() << endl;
			cout << "tên sách là " << xuatTS() <<endl;
			cout <<"tác giả tên là " << xuatTG() <<endl;
			cout <<"gia bán là " << fixed << xuatGB() << endl;

		}
};

int main(){
	int n;
	cout <<"nhập vào số lượng cuốn sách: "; cin >> n;
	Sach* ds = new Sach[n];
	Sach s;
	for(int i = 0; i < n; i++){
		cout <<"nhập vào thông tin người dùng thứ " << i + 1 << endl;
		ds[i].nhapTT();//cần phải đưa thông tin người dùng vào mảng
	}
		cout <<"===========================đây là phần xuất thông tin=========================";

	for(int i = 0;i < n; i++){
		ds[i].xuatTT();
	}

	//cout <<"===========================đây là phần xuất thông tin=========================";

	delete[] ds;
	return 0;
}