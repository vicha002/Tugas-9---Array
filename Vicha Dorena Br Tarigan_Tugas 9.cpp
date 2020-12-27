#include <iostream>
using namespace std;
main(){
	int i = 1, x = 1, angka[i], m1 = 0, min = 0, b[999] = {0}, m2= 0, i_min;
	float a, rata;
	
	cout <<"----------------------------------------------------"<<endl;
	cout <<"TUGAS 9 PRAKTIKUM ALGORITMA DAN PEMROGRAMAN I"<<endl;
	cout <<"----------------------------------------------------"<<endl;
	cout <<"nama\t\t = Vicha Dorena Br Tarigan"<< endl;
	cout <<"NIM\t\t = 124200031"<< endl;
	cout <<"----------------------------------------------------"<<endl;
	cout <<endl;
	
	cout<< "Masukkan Banyak Angka : "; cin>> x;
		for(i=0;i<x;i++)
		{
		cout<< "Angka ke-" << i + 1 << " : "; cin>> angka[i];
		a += angka[i];
		}
	cout<<endl;
	
	cout<<"======================Hasil=========================="<<endl;
	cout<< "Deret\t\t : "; //deret
	for(i=0;i<x;i++)
		{
		cout<< angka[i]<<" ";
		}
	cout<<endl;
	
	m1 = angka[0];
	for(i=0;i<x;i++)
		{
		if(angka[i] > m1)
			{
			m1 = angka[i];
			}
		}
		
	cout<< "Maksimum\t : "<< m1 <<endl; //maksimum
	min = angka[0];
	for(i=0;i<x;i++)
		{
		if(angka[i] < min)
			{
			min = angka[i];
			}
		}
	cout<< "Minimum\t\t : "<< min <<endl; //minimum
	
		rata = a/x;
		
	cout<< "Rata-rata\t : "<< rata <<endl; //rata-rata
	cout<< "Selisih Max\t : "; 
	for(i=1;i<=x;i++)
		{
		if(i<x)i_min=i+1;
		b[i] = angka[i] - angka[i_min];
		if(b[i]<0) b[i] = b[i] * (-1);
		m2 = b[1];
		for(i=1;i<=x;i++)
			{
			if(b[i]>m2)
				{
				m2=b[i];
				}
			}
		}
	cout<< m2 <<endl; 
}
