#include<bits/stdc++.h>
using namespace std ; 
struct sinhvien {
	string mssv ; 
	string ten; 
	double toan , anh, ly ; 
	bool gt ; 
}; 
void hienthongtin(sinhvien x ){
cout <<"--------------mssv"<< x.mssv << endl ; 
cout<<"ten:"<< x.ten << endl ; 
cout <<"diem toan "<<x.toan <<endl; 
cout <<"diem anh " <<x.anh << endl ; 
cout <<"diem ly " << x.ly << endl ; 
string gt ; 
if (x.gt ) gt  = "nam "; 
else x.gt  = "nu" ; 
cout << "gioi tinh "<<gt <<endl ;


}
int main(){
	int gt ; 
	struct sinhvien x ; 
	cin >>x.mssv ; 

	cin >> x.ten ;  
	cin >> x.toan >> x.anh>> x.ly  ;
	cin>>gt ; 
	if (gt == 1 ) x.gt = true 
	; 
	else x.gt =false  ; 

	hienthongtin(x) ; 
}
