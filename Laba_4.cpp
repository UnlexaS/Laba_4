// Laba_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>


using namespace std;

class Mebel {
protected:

    double price;
    string material;

public:

    Mebel() {
        this->price = 0;
        this->material = ' ';
    }

    Mebel(double price1, string material1) {
        this->price = price1;
        this->material = material1;
    }

    ~Mebel() {}

    void printmebel() {
        cout << "Цена: " << this->price << endl;
        cout << "Материал: " <<  this->material << endl;
    }

};

class streetmebel : virtual public Mebel {

protected:

    std::string tipystanovki;
    std::string color;

public:

    streetmebel() {
        this->tipystanovki = ' ';
        this->color = ' ';
    }

    streetmebel(string tipystanovki1, string color1) {
        this->tipystanovki = tipystanovki1;
        this->color = color1;
    }

    ~streetmebel() {}

    void printstreetmebel() {
        cout << "Тип установки: " << this->tipystanovki << endl;
        cout << "Цвет: " << this->color << endl;
    }
};

class roommebel : virtual public Mebel {

protected:

    double dlina;
    double shirina;

public:

    roommebel() {
        this->dlina = 0;
        this->shirina = 0;
    }

    roommebel(double dlina1, double shirina1) {
        this->dlina = dlina1;
        this->shirina = shirina1;
    }

    ~roommebel() {}

    void printroommebel() {
        cout << "Длина: " << dlina  << endl;
        cout << "Ширина: " <<  shirina << endl;
    }

};

class skameika : virtual public streetmebel {

protected:

    string design;
    int kolvonozhek;

public:

    skameika() {
        this->kolvonozhek = 0;
        this->design = ' ';
    }

    skameika(int kolvonozhek1, string design1) {
        this->kolvonozhek = kolvonozhek1;
        this->design = design1;
    }

    ~skameika() {}

    void printskameika() {
        cout << "Кол-во ножек: " << kolvonozhek << endl;
        cout << "Дизайн: " << design << endl;
    }
};


class bed : virtual public roommebel {

protected:

    int spalnmesta;
    string obshivka;

public:

    bed() {
        this->spalnmesta = 0;
        this->obshivka = ' ';
    }

    bed(int spalnmesta1, string obshivka1) {
        this->spalnmesta = spalnmesta1;
        this->obshivka = obshivka1;
    }

    ~bed() {}

    void printbed() {
        cout << "кол-во спальных мест:" << spalnmesta << endl;
        cout << "Обшивка :" << obshivka << endl;
    }
};

class divan : virtual public skameika, virtual public bed {
protected:

    string napolnitel;
    double ves;

public:

    divan() {
        this->napolnitel = ' ';
        this->ves = 0;
    }

    divan(string napolnitel1, double ves1, double price1, string material1, string tipystanovki1, string color1,
        double dlina1, double shirina1, int kolvonozhek1, string design1, int spalnmesta1, string obshivka1) {
        this->napolnitel = napolnitel1;
        this->ves = ves1;
        this->price = price1;
        this->material = material1;
        this->tipystanovki = tipystanovki1;
        this->color = color1;
        this->dlina = dlina1;
        this->shirina = shirina1;
        this->kolvonozhek = kolvonozhek1;
        this->design = design1;
        this->spalnmesta = spalnmesta1;
        this->obshivka = obshivka1;

    }

    void printdivan() {
        cout << "Вид наполнителя: " << napolnitel << endl;
        cout << "Вес: " << ves << endl;
    }

    ~divan() {}

};



int main()
{
    setlocale(LC_ALL,"Russian");


    string napolnitel1; string material1; string tipystanovki1; string color1; string design1; string obshivka1;
    double ves1 = 0; double price1 = 0; double dlina1=0; double shirina1 = 0;
    int kolvonozhek1 = 0, spalnmesta1 = 0;

    cout << endl << "___________Мебель" << endl;
        bool a = true;
        do
        {
            cout << "Цена :";
            cin >> price1;
            if (cin.fail())
                cout << "Повторите попытку" << endl;
            else
                a = false;
            cin.clear();
            cin.ignore(cin.rdbuf()->in_avail());
        } while (a);
        bool a1 = true;
        do
        {
            cout << "Материал :";
            cin >> material1;
            if (cin.fail())
                cout << "Повторите попытку" << endl;
            else
                a1 = false;
            cin.clear();
            cin.ignore(cin.rdbuf()->in_avail());
        } while (a1);



    cout << endl << "___________Уличная мебель" << endl;
    bool a2 = true;
    do
    {
        cout << "Тип Установки :";
        cin >> tipystanovki1;
        if (cin.fail())
            cout << "Повторите попытку" << endl;
        else
            a2 = false;
        cin.clear();
        cin.ignore(cin.rdbuf()->in_avail());
    } while (a2);
    bool a3 = true;
    do
    {
        cout << "Цвет :";
        cin >> color1;
        if (cin.fail())
            cout << "Повторите попытку" << endl;
        else
            a3 = false;
        cin.clear();
        cin.ignore(cin.rdbuf()->in_avail());
    } while (a3);
		


    cout << endl << "___________Домашняя мебель" << endl;
    bool a4 = true;
    do
    {
        cout << "Длина :";
        cin >> dlina1;
        if (cin.fail())
            cout << "Повторите попытку" << endl;
        else
            a4 = false;
        cin.clear();
        cin.ignore(cin.rdbuf()->in_avail());
    } while (a4);
    bool a5 = true;
    do
    {
        cout << "Ширина :";
        cin >> shirina1;
        if (cin.fail())
            cout << "Повторите попытку" << endl;
        else
            a5 = false;
        cin.clear();
        cin.ignore(cin.rdbuf()->in_avail());
    } while (a5);
		


    cout << endl << "___________Скамейка" << endl;
    bool a6 = true;
    do
    {
        cout << "Дизайн :";
        cin >> design1;
        if (cin.fail())
            cout << "Повторите попытку" << endl;
        else
            a6 = false;
        cin.clear();
        cin.ignore(cin.rdbuf()->in_avail());
    } while (a6);
    bool a7 = true;
    do
    {
        cout << "Кол-во ножек :";
        cin >> kolvonozhek1;
        if (cin.fail())
            cout << "Повторите попытку" << endl;
        else
            a7 = false;
        cin.clear();
        cin.ignore(cin.rdbuf()->in_avail());
    } while (a7);
		


    cout << endl << "___________Кровать" << endl;
    bool a8 = true;
    do
    {
        cout << "Кол-во спальных мест :";
        cin >> spalnmesta1;
        if (cin.fail())
            cout << "Повторите попытку" << endl;
        else
            a8 = false;
        cin.clear();
        cin.ignore(cin.rdbuf()->in_avail());
    } while (a8);
    bool a9 = true;
    do
    {
        cout << "Материал обшивки :";
        cin >> obshivka1;
        if (cin.fail())
            cout << "Повторите попытку" << endl;
        else
            a9 = false;
        cin.clear();
        cin.ignore(cin.rdbuf()->in_avail());
    } while (a9);
			


    cout <<endl << "___________Диван" << endl;
    bool a10 = true;
    do
    {
        cout << "Наполнитель :";
        cin >> napolnitel1;
        if (cin.fail())
            cout << "Повторите попытку" << endl;
        else
            a10 = false;
        cin.clear();
        cin.ignore(cin.rdbuf()->in_avail());
    } while (a10);
    bool a11 = true;
    do
    {
        cout << "Вес :";
        cin >> ves1;
        if (cin.fail())
            cout << "Повторите попытку" << endl;
        else
            a11 = false;
        cin.clear();
        cin.ignore(cin.rdbuf()->in_avail());
    } while (a11);
			

   
    divan div(napolnitel1, ves1, price1, material1, tipystanovki1, color1,
        dlina1, shirina1, kolvonozhek1, design1, spalnmesta1, obshivka1);

    cout << endl;

    system("pause");

    div.printmebel();
    div.printstreetmebel();
    div.printroommebel();
    div.printskameika();
    div.printbed();
    div.printdivan();

    
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
