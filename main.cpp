#include <iostream>
#include <vector>
using namespace std;

class produkt{
public:
    string nazwa_ = "Nowy produkt";
    float kod_;
    float cena_;

    void wypisz();

    void wypisz_dane(); //przeciazenie funkcji

    void odkoduj_cene()
    {
        cena_ = (kod_/471);
    }

    produkt(string n, int k)
    {
        nazwa_ = n;
        kod_ = k;
        odkoduj_cene();
    }
};

void produkt::wypisz()
{
    cout << "nazwa produkut: " << nazwa_ << endl;
    cout << "Cena: " << cena_ << endl;
    cout << "kod: " << kod_ << endl;
}


class produkt_na_wage :produkt{
public:
    float cena_kg_; //cena za kg produktu
    float waga_; //waga produktu

    void wypisz_dane(); //przeciazenie funkcji

    void oblicz_()
    {
        cena_kg_ = kod_/471/1000;
        cena_ = cena_kg_ * waga_;
    }

    produkt_na_wage(string n1, int k1, float w) : produkt(n1, k1)
    {
        nazwa_ = n1;
        waga_ = w;
        kod_ = k1;
        oblicz_();
    }
};

//przeciążenie funkcji

void produkt :: wypisz_dane(){
    cout << "cena: " << cena_ << endl;
    cout << "nazwa: " << nazwa_ << endl;
    cout << "kod: " << kod_ << endl;
}

void produkt_na_wage :: wypisz_dane(){
    cout << "cena: " << cena_ << endl;
    cout << "nazwa: " << nazwa_ << endl;
    cout << "kod: " << kod_ << endl;
    cout << "cena za kg: " << cena_kg_ << endl;
    cout << "waga: " << waga_ << endl;
}

int main()
{
    produkt chipsy ("LASY", 123456);
    produkt paluszki ("Lajkonik", 654321);
    produkt baton ("3bit", 214365);

    produkt_na_wage banan("banan", 123456, 2);
    produkt_na_wage pomidor("pomidor", 465798, 5);
    produkt_na_wage cytryna("cytryna", 789123, 2);

//przeciazenie funkcji
    cout << "\n\n";
    paluszki.wypisz_dane();
    cout << endl;
    baton.wypisz_dane();

//vector

    vector <produkt> p;
    p.push_back(chipsy);
    p.push_back(paluszki);
    p.push_back(baton);

    vector<produkt_na_wage> w;
    w.push_back(banan);
    w.push_back(pomidor);
    w.push_back(cytryna);


    cout << "\n\n\n";

    for (int i=0; i<3; i++)
    {
        p[i].wypisz();
        cout << endl;
    }
    for (int i=0; i<3; i++)
    {
        w[i].wypisz_dane();
        cout << endl;
    }

    return (0);
}