#include <iostream>
using namespace std;

main()
{
	system ("cls");
	string a,b,c;
	int(pil);
	cout<<"Masukkan Nama Depan		: ";
	cin>>a;
	cout<<"Masukkan Nama Tengah		: ";
	cin>>b;
	cout<<"Masukkan Nama Belakang		: ";
	cin>>c;
	cout<<"\n\nPilihan :\n";
	cout<<"1.Mundur\n";
	cout<<"2.Acak\n\n";
	cout<<"Pilihan Anda		: ";
	cin>>pil; 
	switch (pil)
	{
		case 1:cout<<"\n\nNama Yang Sudah Dibalik	:\n";
			cout<<c<<" "<<b<<" "<<a<<"\n";
		break;
		case 2:cout<<"\n\nNama Yang Sudah Diacak	:\n";
			cout<<b<<" "<<c<<" "<<a<<"\n";
		break;
		default :cout<<"Tidak Dapat Menampilkan Nama\n\n";
		cout<<"========================================================"<<endl;
		cout<<"By Riza Marsuciati D3-MI-01 16.02.9237"<<endl;
		
	}
	system ("pause");

return 0;
}
		
	
	