#include <iostream>
using namespace std;
const int nmaks=100;
typedef int larikint[nmaks+1];

void bacalarik(larikint l, int n);
void cari(larikint l, int n, int x, int *idx);

void bacalarik(larikint l, int n)
{
	int i;
	for(i=1; i<=n; i++)
	{
		cout<<"Masukan nilai L["<<i<<"]: ";cin>>l[i];
	}
}

void cari(larikint l, int n, int x, int *idx)
{
	int i;
	i=1;
	while(i<n && l[i] != x)
	{
		i++;
	}
	if(l[i]== x)
	*idx = i;
	else
	*idx = -1;
}

int main(){
	larikint l;
	int n, x, idx;
	cout<<"Berapa Jumlah Data = ";cin>>n;
	cout<<"Baca Data: "<<endl;
	bacalarik(l,n);
	cout<<"Ketika Nilai Yang Dicari: ";cin>>x;cari(l,n,x, &idx);
	if(idx == -1)
	cout<<"Tidak Ditemukan!";
	else
	cout<<"Nilai = "<<x<<" ditemukan pada index ke -"<<idx;
	cin.get();
	return 0;
}
