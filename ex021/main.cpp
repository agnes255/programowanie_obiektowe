#include <iostream>

using namespace std;
class Dziecko
{
private:
    string imie;
    string nazwisko;
    int waga;
    float wzrost;
public:
    Dziecko(string imie, int waga, float wzrost)
    {
        cout<<"tworze nowy obiekt"<<endl;
        this->imie=imie;
        this->waga=waga;
        this->wzrost=wzrost;
    }

        Dziecko(string imie, string nazwisko, int waga, float wzrost)
    {
        cout<<"tworze nowy obiekt"<<endl;
        this->imie=imie;
        this->nazwisko=nazwisko;
        this->waga=waga;
        this->wzrost=wzrost;
    }
    void wyswietl()
    {
        cout<<imie << " " << nazwisko << " " << waga << " " <<wzrost<<endl;
    }
    void setNazwisko(string nazwisko)
    {
        this->nazwisko = nazwisko;
    }
    void setImie(string imie)
    {
        this->imie = imie;
    }
    void setWaga(int waga)
    {
        this->waga = waga;
    }
    void setWzrost(float wzrost)
    {
        this->wzrost = wzrost;
    }

    string getNazwisko()
    {
        return nazwisko;
    }
    string getImie()
    {
        return imie;
    }
    int getWaga()
    {
        return waga;
    }
    float getWzrost ()
    {
        return wzrost;
    }
};
int main()
{
    Dziecko Ania("Ania", 4500, 45);
    Dziecko *Kasia = new Dziecko("Kasia", "Nowak", 4000, 54.2);
    Ania.setWaga(Ania.getWaga()*2);

//    Ania.imie = "Ania";
//   Ania.nazwisko = "Kowalska";
//    Ania.waga = 1500;
//    Ania.wzrost = 35.5;
    Ania.setNazwisko("Kowalska");
    Ania.wyswietl();

//    Kasia->imie = "Kasia";
//    Kasia->nazwisko = "Nowak";
//    Kasia->waga = 2000;
//    Kasia->wzrost = 40;
    Kasia->wyswietl();
    return 0;
}
