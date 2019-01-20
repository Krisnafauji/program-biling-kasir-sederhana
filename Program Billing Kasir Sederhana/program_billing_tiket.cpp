 #include <iostream>
 #include <conio.h>
 #include <windows.h>
 #include <stdlib.h>
 using namespace std;
 
 int main()

 {
  string pesawat[100],nama,awal,tujuan,kode[100];
  long int harga[100],jumlah[100],total[100],total_b,jumlahb[100];
  int data;
  float diskon[100],ppn[100];
 system("color a");
  cout<<"======================================="<<endl;
  cout<<"    Program Penjualan Tiket Pesawat    "<<endl;
  cout<<"            ARI HANGGARA TICKET        "<<endl;
  cout<<"   Jl.Denpasar No.37 Telp.0411872780   "<<endl;
  cout<<"---------------------------------------"<<endl;

  cout<<"---------------------------------------"<<endl;
  cout<<"    Berikut adalah kode MASKAPAI    "<<endl;
  cout<<"    GI = GARUDA INDONESIA "<<endl;
  cout<<"    AA = AIR ASIA  "<<endl;
  cout<<"    LA = LION AIR  "<<endl;
  cout<<"    CTL = CITYLINK "<<endl;

  cout<<"   Jl.Matahari No.37 Telp.0411872780   "<<endl;
  cout<<"======================================="<<endl;
  cout<<"Masukkan Nama Penumpang   :" ;
  cin>>nama;
  cout<<"Bandara Awal              :";
  cin>>awal;
  cout<<"Bandara Tujuan            :";
  cin>>tujuan;
  cout<<"Masukkan Jumlah Data      :" ;
  cin>>data;
  for (int i=1; i<=data; i++)
  {cout<<"Data Ke-"<<i<<endl;
  cout<<"Masukkan Kode Pesawat     :" ;
  cin>>kode[i];
  if (kode[i] =="GI")
   { pesawat[i] ="Garuda Indonesia";
   harga[i] = 250000; }else
  if (kode[i] =="AA")
   { pesawat[i] ="AirAsia";
    harga[i] = 180000; }else
  if (kode[i] =="LA")
   { pesawat[i] ="Lion Air";
    harga[i] = 275000; }else
  if (kode[i] =="CTL")
   { pesawat[i] ="Citylink";
    harga[i] = 165000; }else
  
 if (kode[i] =="gi")
   { pesawat[i] ="Garuda Indonesia";
   harga[i] = 250000; }else
  if (kode[i] =="aa")
   { pesawat[i] ="Air Asia";
    harga[i] = 180000; }else
  if (kode[i] =="la")
   { pesawat[i] ="Lion Air";
    harga[i] = 275000; }else
  if (kode[i] =="ctl")
   { pesawat[i] ="citylink";
    harga[i] = 165000; }
  
  cout<<"Nama Pesawat              :"<<pesawat[i]<<endl;
  cout<<"Harga Pesawat             :"<<harga[i]<<endl;
  cout<<"Masukkan Jumlah Belli     :";
  cin>>jumlah[i];
   total[i] = harga[i]*jumlah[i];
  cout<<"Total                     :"<<total[i]<<endl;
  if (jumlah[i] >10)
  { diskon[i] = 0.1*total[i]; }
   else { diskon[i] = 0; }
 cout<<"Diskon                     :"<<diskon[i]<<endl;
 ppn[i] = 0.1 * total[i];
 cout<<"PPN                        :"<<ppn[i]<<endl;
 jumlahb[i]=total[i]-diskon[i]+ppn[i];  }
 
  system("cls");
 
 cout<<""<<endl;

 total_b=0;
 for ( int  j=1; j<=data; j++)
 {
 cout<<"----------ARI-------------------"<<endl;
 cout<<"-------TICKET PAY---------------"<<endl;
 cout<<"----Struk Pembayaran------------"<<endl;
 cout<<"********************************"<<endl;
 cout<<"No              :"<<j;
 cout<<""<<endl;
 cout<<"Nama Penumpang  :"<<nama;
 cout<<""<<endl;
 cout<<"Bandara Awal    :"<<awal;
 cout<<""<<endl;
 cout<<"Kode Maskapai   :"<<kode[j];
 cout<<""<<endl;
 cout<<"Nama Pesawat    :"<<pesawat[j]; 
 cout<<""<<endl;
 cout<<"Harga           :"<<harga[j];
 cout<<""<<endl;
 cout<<"Total           :"<<total[j];
 cout<<""<<endl;
 cout<<"Diskon          :"<<diskon[j];
 cout<<""<<endl;
 cout<<"PPN             :"<<ppn[j];
 cout<<""<<endl;
 cout<<"Jumlah Bayar    :"<<"Rp."<<jumlahb[j];
 cout<<""<<endl;
 total_b=total_b+jumlahb[j];
 }
 cout<<"Total :Rp."<<total_b<<endl;
 return 0;
}