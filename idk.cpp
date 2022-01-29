#include <iostream>
using namespace std;
int kali(int a, int b, int c) 
{
	return a*b*c;
}

int main()
{
	cout<<"Masukkan Panjang : ";
	cin>>p;
	cout<<"Masukkan Lebar : ";
	cin>>l;
	cout<<"Tinggi : ";
	cin>>t;
	cout<<"Volume : "<< kali(p,l,t)<<endl;
}
