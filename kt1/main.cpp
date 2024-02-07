#include <iostream>
#include <cstdlib>
#include <ctime>
#include <game.h>

int game(int maxnum);


int main()
{
    int arvaustenMaara = game(40);

    std::cout << "Onneksi olkoon! Arvasit oikein. Arvausten määrä: " << arvaustenMaara << std::endl;

    return 0;
}
int game(int maxnum) {
    srand(static_cast<unsigned int>(time(0)));

    int etsittavaLuku = rand() % maxnum + 1;

    int pelaajanArvaus;

    int arvaustenMaara = 0;

    do {
        std::cout << "Arvaa luku väliltä 1-" << maxnum << ": ";
        std::cin >> pelaajanArvaus;
        if (pelaajanArvaus < etsittavaLuku) {
            std::cout << "Luku on suurempi." << std::endl;
        } else if (pelaajanArvaus > etsittavaLuku) {
            std::cout << "Luku on pienempi." << std::endl;
        } else {
            std::cout << "Oikea vastaus!" << std::endl;
        }


        arvaustenMaara++;

    } while (pelaajanArvaus != etsittavaLuku);


    return arvaustenMaara;
}
