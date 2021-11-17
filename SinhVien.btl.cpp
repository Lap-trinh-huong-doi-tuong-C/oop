#include <iostream>
#include<string.h>
#include<vector>
#include <Windows.h>
#include<iomanip>
using namespace std;

void textcolor(int x)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}

class SinhVien
{
protected:
		string MSSV;
		string Ho;
		string TenDem;
		string Ten;
		int Ngay, Thang, Nam;
		string DiaChi;
		long long HocPhi;
	public:
		SinhVien();
		~SinhVien();
		virtual void Nhap();
		virtual void Xuat();
		virtual void TinhHocPhi()=0;
		float getHocPhi();
		string getTen();
		string getMSSV();
		string getDiaChi(); 
		string getNganhHoc();
};
SinhVien::SinhVien()
{
	this->MSSV = "";
	this->Ho = "";
	this->TenDem = "";
	this->Ten = "";
	this->Ngay = this->Thang = this->Nam = 0;
	this->DiaChi = "";
	this->HocPhi = 0;
} 
SinhVien::~SinhVien()
{
} 
void SinhVien::Nhap()
{
	textcolor(15);
	cout << "\t\t\t\tNhap ma so sinh vien: ";
	cin.ignore(256, '\n');
	getline(cin, MSSV);
	cout << "\t\t\t\tNhap ho cua sinh vien: ";
	fflush(stdin);
	getline(cin, Ho);
	cout << "\t\t\t\tNhap ten dem cua sinh vien: ";
	fflush(stdin);
	getline(cin, TenDem);
	cout << "\t\t\t\tNhap ten cua sinh vien: ";
	fflush(stdin);
	getline(cin, Ten);
	cout<<"\t\t\t\tNhap nam sinh: ";
	cin >> Nam;
	if(Nam < 0){
		do
		{
			cout << "\n\t\t\t\tDinh dang nam khong dung.";
			cout << "\n\t\t\t\tNhap lai nam: ";
			cin >> Nam;
		}
		while (Nam < 0);
	}
	if (Nam % 4 == 0 )
	{
		cout << "\t\t\t\tNhap thang: ";
		cin >> Thang;
		if (Thang <= 0 || Thang >12)
		{
			do
			{
				cout << "\n\t\t\t\tDinh dang thang khong dung.";
				cout << "\n\t\t\t\tNhap lai thang: ";
				cin >> Thang;
			}
			while (Thang <= 0 || Thang >12);
		}
		if(Thang < 8)
		{
			if(Thang % 2 != 0)
			{
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if (Ngay <= 0 || Ngay >=32)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;	
					}
					while(Ngay <= 0 || Ngay >=32);
				}
			}
		}
		if(Thang < 8)
		{
			if(Thang % 2 == 0 && Thang != 2)
			{
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=31)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;
					}
					while(Ngay <= 0 || Ngay >=31);
				}
			}
		}
		if(Thang == 2)
		{
			cout << "\t\t\t\tNhap ngay: ";
			cin >> Ngay;
			if(Ngay <= 0 || Ngay >=30)
			{
				do
				{
					cout << "\n\t\t\t\tDinh dang ngay khong dung.";
					cout << "\n\t\t\t\tNhap lai ngay: ";
					cin >> Ngay;
				}
				while(Ngay <= 0 || Ngay >=30);
			}
		}
		if(Thang > 8)
		{
			if(Thang % 2 != 0)
			{
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=31)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;
					}
					while(Ngay <= 0 || Ngay >=31);
				}
			}
		}
		if(Thang > 8)
		{
			if(Thang % 2 == 0)
			{
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=32)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;	
					}
					while(Ngay <= 0 || Ngay >=32);
				}
			}
		}
		if(Thang == 8)
		{
			cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=32)
				{
					cout << "\n\t\t\t\tDinh dang ngay khong dung.";
					cout << "\n\t\t\t\tNhap lai ngay: ";
					cin >> Ngay;	
				}
				while(Ngay <= 0 || Ngay >=32);
		}
	}
	if(Nam % 4 != 0)
	{
		cout << "\t\t\t\tNhap thang: ";
		cin >> Thang;
		if(Thang <= 0 || Thang >12)
		{
			do
			{
				cout << "\n\t\t\t\tDinh dang thang khong dung.";
				cout << "\n\t\t\t\tNhap lai thang: ";
				cin >> Thang;
			}while(Thang <= 0 || Thang >12);
		}
		if(Thang < 8)
		{
			if(Thang % 2 != 0){
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=32)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;	
					}while(Ngay <= 0 || Ngay >=32);
				}
			}
		}
		if(Thang < 8)
		{
			if(Thang % 2 == 0 && Thang != 2)
			{
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=31)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;
					}
					while(Ngay <= 0 || Ngay >=31);
				}
			}
		}
		if(Thang == 2)
		{
			cout << "\t\t\t\tNhap ngay: ";
			cin >> Ngay;
			if(Ngay <= 0 || Ngay >=29)
			{
				do
				{
					cout << "\n\t\t\t\tDinh dang ngay khong dung.";
					cout << "\n\t\t\t\tNhap lai ngay: ";
					cin >> Ngay;
				}
				while(Ngay <= 0 || Ngay >=29);
			}
		}
		if(Thang > 8)
		{
			if(Thang % 2 != 0)
			{
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=31)
				{
					do{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;
					}
					while(Ngay <= 0 || Ngay >=31);
				}
			}
		}
		if(Thang > 8)
		{
			if(Thang % 2 == 0)
			{
				cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=32)
				{
					do{ 
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;	
					}
					while(Ngay <= 0 || Ngay >=32);
				}
			}
		}
		if(Thang == 8)
		{
			cout << "\t\t\t\tNhap ngay: ";
				cin >> Ngay;
				if(Ngay <= 0 || Ngay >=32)
				{
					do
					{
						cout << "\n\t\t\t\tDinh dang ngay khong dung.";
						cout << "\n\t\t\t\tNhap lai ngay: ";
						cin >> Ngay;	
					}
					while(Ngay <= 0 || Ngay >=32);
				}
		}
	}
	cout << "\t\t\t\tNhap dia chi sinh vien: ";
	fflush(stdin);
	getline(cin, DiaChi);
}

void SinhVien::Xuat()
{
	cout << "\t\t\t\tMa so sinh vien: " << MSSV << endl;
	cout << "\t\t\t\tHo ten sinh vien: "<< Ho << " " << TenDem << " " << Ten << endl;
	cout << "\t\t\t\tNgay/thang/nam sinh: "<< Ngay << "/" << Thang << "/" << Nam << endl;
	cout << "\t\t\t\tDia chi : "<< DiaChi << endl; 
}

float SinhVien::getHocPhi()
{
	return HocPhi;
}
string SinhVien::getTen()
{
	return Ten;
}
string SinhVien::getMSSV()
{
	return MSSV;
}
string SinhVien::getDiaChi()
{
	return DiaChi;
}
//tao class con SinhVienKiThuat ke thua class cha SinhVien
class SinhVienKiThuat : public SinhVien
{
	private:
		string NganhHoc;
		int Khoa;
		int SoTinChi;
	public:
		SinhVienKiThuat();
		~SinhVienKiThuat();
		void Nhap();
		void Xuat();
		void TinhHocPhi();
};
SinhVienKiThuat::SinhVienKiThuat():SinhVien()
{
	SoTinChi=0; 
} 
SinhVienKiThuat::~SinhVienKiThuat()
{
}
void SinhVienKiThuat::Nhap()
{
	cout << "\t\t\t\tNhap nganh hoc cua sinh vien: ";
	fflush(stdin);
	getline(cin, NganhHoc);
	cout << "\t\t\t\tNhap khoa: ";
	cin >> Khoa;
	SinhVien::Nhap();
	cout << "\t\t\t\tNhap so tin chi: ";
	cin >> SoTinChi;
}

void SinhVienKiThuat::Xuat()
{
	cout << "\t\t\t\t_______________________________________________" << endl;
	cout << "\t\t\t\t\t   ==== THONG TIN SINH VIEN ====" << endl;
	cout << "\t\t\t\tNganh: " << NganhHoc << endl;
	cout << "\t\t\t\tKhoa: " << Khoa << endl;
	SinhVien::Xuat();
	cout << "\t\t\t\tSo tin chi: "<<SoTinChi <<endl;
	this->TinhHocPhi();
	cout << "\t\t\t\tHoc phi: " << HocPhi << " vnd" << endl;
	cout << "\t\t\t\t_______________________________________________"  << endl; 
}

void SinhVienKiThuat::TinhHocPhi()
{
	this->HocPhi = this->SoTinChi * 330400;
}

//tao class con SinhVienKinhTe ke thua class cha SinhVien
class SinhVienKinhTe : public SinhVien
{	
	private:
		string NganhHoc;
		int Khoa;
		int SoTinChi;
	public:
		SinhVienKinhTe();
		~SinhVienKinhTe();
		void Nhap();
		void Xuat();
		void TinhHocPhi();
};
SinhVienKinhTe::SinhVienKinhTe():SinhVien()
{
	SoTinChi=0; 
} 
SinhVienKinhTe::~SinhVienKinhTe()
{
}
void SinhVienKinhTe::Nhap()
{
	cout << "\t\t\t\tNhap nganh hoc cua sinh vien: ";
	fflush(stdin);
	getline(cin, NganhHoc);
	cout << "\t\t\t\tNhap khoa: ";
	cin >> Khoa;
	SinhVien::Nhap();
	cout << "\t\t\t\tNhap so tin chi: ";
	cin >> SoTinChi;
}

void SinhVienKinhTe::Xuat()
{
	cout << "\t\t\t\t_______________________________________________" << endl;
	cout << "\t\t\t\t\t   ==== THONG TIN SINH VIEN ====" << endl;
	cout << "\t\t\t\tNganh: " << NganhHoc << endl;
	cout << "\t\t\t\tKhoa: " << Khoa << endl;
	SinhVien::Xuat();
	cout << "\t\t\t\tSo tin chi: "<<SoTinChi <<endl;
	this->TinhHocPhi();
	cout << "\t\t\t\tHoc phi: " << HocPhi << " vnd" << endl;
	cout << "\t\t\t\t_______________________________________________"  << endl; 
}

void SinhVienKinhTe::TinhHocPhi()
{
	this->HocPhi = this->SoTinChi*275200;
}


class QuanLySinhVien
{
    private:
        vector<SinhVien *> SV;
    public:
        void NhapDS();
        void XuatDS();
        void SapXepTangDan();
        void SapXepGiamDan();
        void MaxHocPhi();
        void MinHocPhi();
        void TongHocPhi();
        void TimTen();
		void TimMaSoSinhVien();
		void TimSinhVienTheoDiaChi(); 
		void Xoa();
		void XoaSinhVien();
		void SapXepSinhVienTangDanTheoMssv(); 
		void SapXepSinhVienTangDanTheoTen();
};

void QuanLySinhVien :: NhapDS()
{
	SinhVien *sv;
        int n, m;
        cout << "\n\t\t\t\tNhap so luong sinh vien ky thuat: ";
        cin >> n;
        if (n > 0)
        {
        	textcolor(14);
        	cout << "\t\t\t\t\t _______________________________________\n\t\t\t\t\t|   ===== Cac nganh dao dao UTC2 =====  |\t\t\n\t\t\t\t\t|-Kien truc\t\t\t\t|\n\t\t\t\t\t|-Ky thuat dien\t\t\t\t|\n\t\t\t\t\t|-Ky thuat o to\t\t\t\t|\n\t\t\t\t\t|-Ky thuat xay dung\t\t\t|\n\t\t\t\t\t|-Cong nghe thong tin\t\t\t|\n\t\t\t\t\t|-Ky thuat co dien tu\t\t\t|\n\t\t\t\t\t|-Ky thuat co khi dong luc\t\t|\n\t\t\t\t\t|-Ky thuat dien tu, vien thong\t\t|\n\t\t\t\t\t|-Ky thuat dieu khien va tu dong hoa\t|\n\t\t\t\t\t|_______________________________________|" << endl;
        	textcolor(15);
    	}
        for (int i = 0; i < n; i++)
		{
            sv = new SinhVienKiThuat;
            cout << "\n\t\t\t\tNhap sinh vien thu "<<i+1<<endl;
            sv->Nhap();
            SV.push_back(sv);
        }
        cout << "\t\t\t\t_________________________________________________" << endl;
        cout << "\n\t\t\t\tNhap so luong sinh vien kinh te: ";
        cin >> m;
        if (m > 0)
		{
			textcolor(14);
        	cout << "\t\t\t\t\t _______________________________________\n\t\t\t\t\t|   ===== Cac nganh dao dao UTC2 =====  |\t\t\n\t\t\t\t\t|-Ke toan\t\t\t\t|\n\t\t\t\t\t|-Kinh te\t\t\t\t|\n\t\t\t\t\t|-Kinh te van tai\t\t\t|\n\t\t\t\t\t|-Kinh te xay dung\t\t\t|\n\t\t\t\t\t|-Quan ly xay dung\t\t\t|\n\t\t\t\t\t|-Khai thac van tai\t\t\t|\n\t\t\t\t\t|-Quan tri kinh doanh\t\t\t|\n\t\t\t\t\t|-Logistic va Quan ly chuoi cung ung\t|\t\t\t\t\t\t\t\t\t\t\t|_______________________________________|" << endl;
        	textcolor(15);
    	}
        for (int i = 0; i < m; i++)
		{
            sv = new SinhVienKinhTe;
            cout << "\n\t\t\t\tNhap sinh vien thu "<<i+1<<endl;
			sv->Nhap();
            SV.push_back(sv);
        }
}

void QuanLySinhVien :: XuatDS()
{
	if(SV.size()==0)
	{
		cout << "\n\t\t\t\t\t********** Danh sach rong **********" << endl;
	}
	else
	{
		for(int i = 0; i < this -> SV.size(); i++)
		{
			textcolor(7);
			cout<<"\n\t\t\t\t\t Thong tin sinh vien thu "<<i+1<<endl; 
        	this->SV.at(i)->Xuat();
        	cout << endl;
        	textcolor(15);
		}
	}
}

void QuanLySinhVien :: SapXepTangDan()
{
	if(SV.size()==0){
		cout << "\n\t\t\t\t\t********** Danh sach rong *********" << endl;
	}
	else
	{
		for (int i=0; i < SV.size()-1; i++)
		{
        for (int j = i + 1; j < SV.size(); j++)
		{
            if(SV.at(i)->getHocPhi() > SV.at(j)->getHocPhi())
			{
                SinhVien *t= SV.at(i);
                SV.at(i)=SV.at(j);
                SV.at(j)=t;
            }
        }
    }
    XuatDS();
	}
}

void QuanLySinhVien :: SapXepGiamDan()
{
	if(SV.size()==0)
	{
		cout << "\n\t\t\t\t\t********** Danh sach rong **********" << endl;
	}
	else
	{
		for (int i=0; i < SV.size()-1; i++)
		{
        for (int j = i + 1; j < SV.size(); j++)
		{
            if(SV.at(i)->getHocPhi() < SV.at(j)->getHocPhi())
			{
                SinhVien *t= SV.at(i);
                SV.at(i)=SV.at(j);
                SV.at(j)=t;
            }
        }
    }
    XuatDS();
	}
}

void QuanLySinhVien :: MaxHocPhi()
{
    if(SV.size()==0)
	{
		cout << "\n\t\t\t\t\t********** Danh sach rong **********" << endl;
	}
	else{
		SinhVien *max = SV.at(0);
    	for (int i = 1; i < SV.size(); i++)
		{
        	if (SV.at(i)->getHocPhi() > max->getHocPhi())
            	max = SV.at(i);
    	}
    	max->Xuat();
    }
}

void QuanLySinhVien :: MinHocPhi()
{
    if(SV.size()==0)
	{
		cout << "\n\t\t\t\t\t********** Danh sach rong **********" << endl;
	}
	else
	{
		SinhVien *min = SV.at(0);
    	for (int i = 1; i < SV.size(); i++)
		{
       	 	if (SV.at(i)->getHocPhi() < min->getHocPhi())
           	 	min = SV.at(i);
    	}
    	min->Xuat();
    }
}

void QuanLySinhVien::TongHocPhi()
{
    float Tong = 0;
    if(SV.size()==0){
		cout << "\n\t\t\t\t\t******** Danh sach rong ********" << endl;
	}
	else
	{
    	for(int i = 0; i < SV.size(); i++)
		{
        	Tong += SV.at(i)->getHocPhi();
    	}
    	cout << endl << "\n\t\t\t\tTong hoc phi cua sinh vien trong truong: "<<setprecision(2)<<fixed<<Tong<<endl;
    }
}
void QuanLySinhVien::TimTen(){
	
		if(SV.size()==0){
		cout << "\n\n\t\t\t************ Danh sach rong ************" << endl;
		}
		else {
			SinhVien *ten; 
			string timten;
            cout<<" nhap ten can tim:";
			fflush(stdin);
			getline(cin,timten);
			 
            for(int i=0;i<SV.size();i++){
			
                if(SV.at(i)->getTen()==timten){	
				    ten = SV.at(i);	
            	}
		   
		} 
        cout<<"Thong tin  sinh vien can tim la : "<<endl;		
        ten->Xuat();
   }
}
void QuanLySinhVien::TimMaSoSinhVien(){
		
		if(SV.size()==0){
		cout << "\n\n\t\t\t************ Danh sach rong ************" << endl;
		}
		else{
			SinhVien *maso ; 
			string TimMaSo;
            cout<<" nhap ma so can tim:";
            fflush(stdin);
			getline(cin,TimMaSo);
			 
            for(int i=0;i<SV.size();i++){
			
                if(SV.at(i)->getMSSV()==TimMaSo){		
                   maso = SV.at(i);
            		
            			
		        }
            }
			cout<<"Thong tin ma so cua sinh vien can tim la "<<endl;		
        	maso->Xuat();
        	
    	}
	}
void QuanLySinhVien::TimSinhVienTheoDiaChi(){
		
		if(SV.size()==0){
		cout << "\n\n\t\t\t************ Danh sach rong ************" << endl;
		}
		else{
			SinhVien *diachi ;
			string TimDiaChi;
            cout<<" nhap dia chi can tim:";
            fflush(stdin);
			getline(cin,TimDiaChi);
			 
            for(int i=0;i<SV.size();i++){
			
                if(SV.at(i)->getDiaChi()==TimDiaChi){		
                   diachi = SV.at(i);
            				
		        }
            }
			cout<<"thong tin dia chi cua sinh vien can tim la "<<endl;		
        	diachi->Xuat();
    	}
	}


void QuanLySinhVien::Xoa()
{
	if(SV.size()==0)
	{
		cout << "\n\t\t\t\t\t********** Danh sach rong **********" << endl;
	}
	else{		
  
 	int k; 
 	int n=SV.size(); 
	for(int i=k;i<n;i++){
		SV.at(i)=SV.at(i+1);
		n--;
}
}
}

void QuanLySinhVien::XoaSinhVien(){
	if(SV.size()==0)
	{
		cout << "\n\t\t\t\t\t******** Danh sach rong ********" << endl;
	}
	else
	{
		SinhVien *xoa;
		string ms;
        cout << "\n\t\t\t\tNhap ms can xoa: ";
        fflush(stdin);
		getline(cin, ms);
		for(int i=0; i<SV.size()-1; i++){
		
		if(SV.at(i)->getMSSV()==ms){
			xoa=SV.at(i); 
			Xoa();
			break; 
		}
	}
		xoa->Xuat(); 
		
}
}
void QuanLySinhVien ::SapXepSinhVienTangDanTheoMssv(){
	if(SV.size()==0){
		cout << "\n\n\t\t\t************ Danh sach rong ************" << endl;
	}
	else{
		for (int i=0; i < SV.size()-1; i++){
        for (int j = i + 1; j < SV.size(); j++){
            if(SV.at(i)->getMSSV() > SV.at(j)->getMSSV()){
                SinhVien *t= SV.at(i);
                SV.at(i)=SV.at(j);
                SV.at(j)=t;
            }
        }
    }
    XuatDS();
	}
}

int main()
{
    QuanLySinhVien a;
    int luachon;
    while(69)
    {
    	system("cls");	//xoa man hinh
		textcolor(10);
    	cout << endl;	 
    	cout << "\t\t\t\t      ****   ****  *******  ***    **  **     **        "<<endl;
		cout << "\t\t\t\t      ** ** ** **  **       ****   **  **     **        "<<endl;
		cout << "\t\t\t\t      **  ***  **  *******  ** **  **  **     **        "<<endl;
		cout << "\t\t\t\t      **       **  **       **  ** **  **     **        "<<endl;
		cout << "\t\t\t\t      **       **  *******  **   ****  *********        "<<endl;	
		textcolor(9);		 
		cout << "\t\t\t\t******************************************************************* ";	 	 		 
    	cout << "\n\t\t\t\t***       1. Nhap danh sach sinh vien                           *** ";
    	cout << "\n\t\t\t\t***       2. In danh sach sinh vien                             *** ";
    	cout << "\n\t\t\t\t***       3. Sap xep danh sach sinh vien theo hoc phi tang dan  *** ";
    	cout << "\n\t\t\t\t***       4. Sap xep danh sach sinh vien theo hoc phi giam dan  *** ";
    	cout << "\n\t\t\t\t***       5. In sinh vien co hoc phi cao nhat                   *** ";
    	cout << "\n\t\t\t\t***       6. In sinh vien co hoc phi thap nhat                  *** ";
    	cout << "\n\t\t\t\t***       7. Tong hoc phi cua sinh vien trong truong            *** ";
    	cout << "\n\t\t\t\t***       8. Tim kiem sinh vien                                 *** ";
    	cout << "\n\t\t\t\t***       9. Xoa sinh vien                                      *** ";
    	cout << "\n\t\t\t\t***      10. Sap xep sinh vien tang dan theo mssv               *** ";
    	cout << "\n\t\t\t\t***       0. Ket thuc                                           *** ";
    	cout << "\n\t\t\t\t***                ============ END =============               *** ";
    	cout << "\n\t\t\t\t******************************************************************* ";
    	cout << "\n\n\t\t\t\tNhap lua chon: ";
    	cin >> luachon;
    	if (luachon!=0 && luachon !=1 && luachon != 2 && luachon!=3 && luachon!=4 && luachon!=5 && luachon!=6 && luachon!=7 && luachon!=8 && luachon!=9 && luachon!=10 && luachon!=0)
		{
			cout << "\nLua chon khong hop le. Xin kiem tra lai!" << endl;
			system("pause");
		}
		else if (luachon == 1)
		{
			textcolor(13);
			cout << "\n\n\t\t\t\t============ NHAP DANH SACH SINH VIEN ============" << endl;
			textcolor(15);
			a.NhapDS();
			system("pause");
		}
		else if (luachon == 2)
		{
			textcolor(13);
			cout << "\n\n\t\t\t\t============ DANH SACH SINH VIEN DA NHAP ============" << endl;
			textcolor(15);
			a.XuatDS();
			system("pause");
		}
		else if (luachon == 3)
		{
			textcolor(13);
			cout << "\n\n\t\t\t============ DANH SACH SINH VIEN DA SAP XEP THEO HOC PHI TANG DAN ============" << endl;
			textcolor(15);
			a.SapXepTangDan();
			system("pause");
		}
		else if (luachon == 4)
		{
			cout << "\n\n\t\t\t============ DANH SACH SINH VIEN DA SAP XEP THEO HOC PHI GIAM DAN ============" << endl;
			a.SapXepGiamDan();
			system("pause");
		}
		else if (luachon == 5)
		{
			textcolor(13);
			cout << "\n\n\t\t\t\t============ SINH VIEN CO HOC PHI CAO NHAT ============" << endl;
			textcolor(15);
			a.MaxHocPhi();
			system("pause");
		}
		else if (luachon == 6)
		{
			textcolor(13);
			cout << "\n\n\t\t\t\t============ SINH VIEN CO HOC PHI THAP NHAT ============" << endl;
			textcolor(15);
			a.MinHocPhi();
			system("pause");
		}
		else if (luachon == 7)
		{
			textcolor(13);
			cout << "\n\n\t\t\t============ TONG HOC PHI CUA SINH VIEN TRONG TRUONG ============" << endl;
			textcolor(15);
			a.TongHocPhi();
			system("pause");
		}
		else if (luachon == 8)
		{
			textcolor(9);
			int luachon1;
			system("cls");
			cout << "\n\n\t\t\t\t============ TIM KIEM SINH VIEN  ============" << endl;
			cout << "\n\t\t\t\t1. Tim kiem sinh vien theo ten";
    		cout << "\n\t\t\t\t2. Tim kiem sinh vien theo ma so sinh vien";
    		cout << "\n\t\t\t\t3. Tim kiem sinh vien theo dia chi";
    		cout << "\n\t\t\t\t0. Quay lai";
    		textcolor(15);
    		cout << "\n\n\t\t\t\tNhap lua chon: ";
    		cin >> luachon1;
			if (luachon1 != 0 && luachon1 !=1 && luachon1 != 2 && luachon1 != 3)
			{
				cout << "\nLua chon khong hop le. Xin kiem tra lai!" << endl;
				system("pause");
			}
			else if (luachon1 == 1)
			{
				textcolor(13);
				cout << "\n\n\t\t\t\t============ TIM SINH VIEN THEO TEN  ============" << endl;
				textcolor(15);
				a.TimTen();
				system("pause");
			}
			else if (luachon1 == 2)
			{
				textcolor(13);
				cout << "\n\n\t\t\t\t============ TIM SINH VIEN THEO MA SO  ============" << endl;
				textcolor(15);
				a.TimMaSoSinhVien();
				system("pause");
			}
			else if (luachon1 == 3)
			{
				textcolor(13);
				cout << "\n\n\t\t\t\t============ TIM SINH VIEN THEO DIA CHI  ============" << endl;
				textcolor(15);
				a.TimSinhVienTheoDiaChi();
				system("pause");
			}
		}
		else if (luachon == 9)
		{
			textcolor(13);
			cout << "\n\n\t\t\t\t============ THONG TIN SINH VIEN DA XOA LA  ============" << endl;
			textcolor(15);
			a.XoaSinhVien(); 
			system("pause");
		}
		else if (luachon == 10)
		{
			textcolor(13);
			cout << "\n\n\t\t\t\t============ THONG TIN SINH VIEN DA SAP XEP TANG DAN THEO MSSV LA  ============" << endl;
			textcolor(15);
			a.SapXepSinhVienTangDanTheoMssv(); 
			system("pause");
		}
		else
		{
			break;
		}
	}
    system("pause");
    return 0;
}
