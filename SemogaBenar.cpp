#include <iostream>
using namespace std;

class segitiga{
    private:
    float LuasSegitigi(float x, float y){
        return (x * y)/2;
    }
    
    float KelilingSegitiga(float x,float y,float z){
        return x+y+z;
    }
    
    public:
    float Alas, Tinggi,Sisi1,Sisi2,Sisi3;

    void inputLuas(){
        cout << "Menghitung Luas Segitigi : "<< endl;
             cout << "Masukkan Alas (1-50) : ";
             cin >> Alas;
             while (Alas < 1 ||Alas > 50){
                cout << "Input alas tidak valid (1-50). Ulangi: ";
                cin >> Alas;} 
                
             cout << "Masukkan Tinggi (1-50) : ";
             cin >> Tinggi;
             while (Tinggi < 1 || Tinggi > 50){
            cout << "Input alas tidak valid (1-50). Ulangi: ";
            cin >> Tinggi;} 
    }
    void inputKeliling(){
        cout << "Menghitung Keliling Segitiga : "<< endl;
             cout << "Masukkan Sisi 1 : ";
             cin >> Sisi1;
             while (Sisi1 < 1 ||Sisi1 > 50){
                cout << "Input alas tidak valid (1-50). Ulangi: ";
                cin >> Sisi1;} 
             cout << "Masukkan Sisi 2 : ";
             cin >> Sisi2;
             while (Sisi2 < 1 ||Sisi2 > 50){
                cout << "Input alas tidak valid (1-50). Ulangi: ";
                cin >> Sisi2;} 
             cout << "Masukkan Sisi 3 : ";
             cin >> Sisi3 ;
             while (Sisi3 < 1 ||Sisi3 > 50){
                cout << "Input alas tidak valid (1-50). Ulangi: ";
                cin >> Sisi3;} 
    }

    void outputLuas(){
    cout << "Luas Segitigi : "<< LuasSegitigi(Alas,Tinggi) << endl;
    }

    void outputKeliling(){
    cout << "Keliling Segitiga : "<< KelilingSegitiga(Sisi1,Sisi2,Sisi3) << endl;
             
    } 
};

int main(){
    segitiga s;
    int pilihan;

    do {
        cout << "==Menu==" << endl;
        cout << "1. Luas Segitigi" << endl;
        cout << "2. Keliling Segitiga" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilih Menu : ";
        cin >> pilihan;

        switch(pilihan){
            case 1 :
            s.inputLuas();
            s.outputLuas();
            break;

            case 2 :
            s.inputKeliling();
            s.outputKeliling();
            break;
            }
        }while (pilihan != 3);
        return 0;
        
}
        
    
