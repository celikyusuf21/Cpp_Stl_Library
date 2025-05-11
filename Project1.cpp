#include <iostream>
#include <queue>

using namespace std;

class Musteri{

    string ad;
    int adet;
    public:
        Musteri(string ad,int adet){  // :ad(ad),adet(adet)  te yazilabilir this yerine.
            this->ad=ad;
            this->adet=adet;

        }
        friend ostream& operator << (ostream&,Musteri&);


};

ostream& operator << (ostream& o, Musteri& m){
    
    o<< m.ad << " " << m.adet << " adet pide almak istiyor " << endl;
    return o; 

}

class Pideci{

    queue<Musteri*> kuyruk;
    public:
        void pideSat(){
            if(kuyruk.empty()){
                cout << "Pide almayi bekleyen musteri yok" << endl;
            }
            else{
                Musteri m = *kuyruk.front();
                cout << m << "Pidesi verildi" << endl;
                kuyruk.pop();
            }
        }

        void kuyrugaGir(Musteri* m){
            if(m){

                kuyruk.push(m);
            }
        }
        friend ostream& operator << (ostream&,Pideci&);
};

ostream& operator << (ostream& o,Pideci& p){

    if(p.kuyruk.empty()){

        o << "Kuyrukta bekleyen musteri yok" << endl;

    }
    else{
        
        int i=1;
        o << "Kuyrukta bekleyen msuteriler : " << endl;
        queue<Musteri*> kuyruk = p.kuyruk;
        while(!kuyruk.empty()){

            Musteri m=*kuyruk.front();
            o << i << " -> " << m << endl;
            kuyruk.pop();
            i++;
        }
        o << endl;
    }
    return o;
}

int main(){

    Pideci pideci;

    Musteri m("Yusuf",3);
    Musteri m2("Ahmet",7);
    Musteri m3("Ayşe",2);
    Musteri m4("Mahmut",9);
    Musteri m5("Melih",5);

    // cout << m << endl;
    
    pideci.kuyrugaGir(&m);
    pideci.kuyrugaGir(&m2);
    pideci.kuyrugaGir(&m3);
    pideci.kuyrugaGir(&m4);
    pideci.kuyrugaGir(&m5);
    // pideci.pideSat();

    cout << pideci;

    pideci.pideSat();
    cout << pideci;

    pideci.pideSat();
    pideci.pideSat();
    cout << pideci;
    pideci.pideSat();
    pideci.pideSat();
    cout << pideci;

  

}