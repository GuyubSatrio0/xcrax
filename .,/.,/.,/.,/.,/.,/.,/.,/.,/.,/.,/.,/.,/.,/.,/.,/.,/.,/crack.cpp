//CrackMadeFacker
#include <iostream>
using namespace std;

int main(){
    string yin;
    memeks:
    system("clear");
    system("sleep 2");
    cout << "PERINGATAN: " << endl << "untuk menggunakan tools ini kalian harus install bahan terlebih dahulu, dengan cara ketik Y, dan jika kalian sudah kedua kali menemukan output ini silakan pilih N, di lanjutkan dengan cada pilih Y" << endl;
    system("sleep 3");
    cout << "\nInstall Bahan?(y/n): ";
    cin >> yin;
    if(yin == "Y" || yin == "y"){
    cout << endl;
    cout << "Sedang Menginstall Bahan...." << endl;
    system("sleep 2");
    cout << "Mohon Tunggu....." << endl << endl;
    system("pkg install figlet -y");
    system("pkg install imagemagick -y");
    system("pkg install openssl -y");}
    else if(yin == "n" || yin == "N"){
    char bahan;
    bahan:
    cout << "Udah Pernah Nginstall Bahan?(y/n): ";
    cin >> bahan;
    if(bahan == 'y' || bahan == 'Y'){
    goto lolpai;}
    else if(bahan == 'n' || bahan == 'N'){
    system("sleep 1");
    cout << endl << "Gabisa!!!, Harus Install Bahan Dulu Biar Ijo!!" << endl;
    system("sleep 4");
    goto memeks;}
    else{
    goto memeks;}}
    else{
    goto bahan;}
    lolpai:
    system("sleep 2");
    cout << endl << "Install Bahan Selesai..." << endl;
    system("sleep 2");
    system("clear");
    int pilih;
    int bloks;
    string licen;
    cout << "+=+=+++=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << endl;
    system("figlet -f banner CRACK-V1");
    cout << "Version: 4.6                                 Server-01 : ON" << endl;
    cout << "Socket: ON                                    Proxy: Listen" << endl;
    cout << "+=+=+++=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << endl;
    cout << "\n<========================================================>" << endl;
    cout << "Masukan License: ";
    cin >> licen;
    if(licen == "YHU7-89FC-13CX-109I-26MK-17CC-18SQ"){
    system("sleep 3");
    cout << "License Expired..." << endl;
    goto sewa;}
    else if(licen == "H678-78JK-43SX-09LM-41YQ-TCC2-99CL"){
    system("sleep 3");
    cout << "License Benar✓..." << endl;
    system("sleep 2");
    cout << "\nMaaf Saat Ini Program Sedang Maintenance / Sedang Perawatan Server Untuk Meningkatkan Performance Ganja / Ijo, Silahkan Kembali Lagi Besok, Saya Ucapkan Mohon Maaf :)" << endl;
    system("exit");}
    else{
    system("sleep 2");
    cout << "License Tidak Valid / Belum Di Generate Oleh Author!!!" << endl;
    cout << "<========================================================>" << endl;
    sewa:
    system("sleep 3.5");
    cout << endl << "LIST HARGA SEWA" << endl;
    cout << "<========================================================>" << endl;
    cout << "1. 1 Bulan Trial : 50.000" << endl;
    cout << "2. 3 Bulan Trial : 100.000" << endl;
    cout << "3. 6 Bulan Trial : 200.000" << endl;
    cout << "4. Permanent     : 300.000" << endl;
    cout << "<========================================================>" << endl;
    cout << "+=+=+=+=+=+=" << endl;
    cout << "Pilihan?: ";
    cin >> pilih;
    cout << "+==+=+=+=+=+" << endl;
    if(pilih == 1 || pilih == 2 || pilih == 3 || pilih == 4){
    cout << endl << "PEMBAYARAN" << endl;
    cout << "+=+=+=+=+=+=+=+=+=+=+=+=+" << endl;
    cout << "1. DANA" << endl;
    cout << "+=+=+=+=+=+=+=+=+=+=+=+=+" << endl;
    cout << "Pilihan?: ";
    cin >> bloks;
    if(bloks == 1 || bloks == 01){
    cout << endl << "PEMBERITAHUAN: " << endl << "Anda Akan Di Arahkan Ke Browser / WhatsApp Untuk Membeli License Dan Atau Menghubungi Author Script, Silakan Tunggu Beberapa Detik...." << endl;
    system("sleep 10");
    system("xdg-open https://wa.me/6285955290090?text=Assalamualaikum+saya+mau+beli+license+script");}}}
cin.get();
return 0;
}
