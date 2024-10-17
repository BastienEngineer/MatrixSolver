#ifndef DECLARATIONS_H_INCLUDED
#define DECLARATIONS_H_INCLUDED

#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <windows.h>
#include <cstdlib>
#define D Sleep(50)


// Classe Matrice
class Matrice
{
private:
    std::vector<std::vector<int>>m_mat;
    unsigned int m_Ncol;
    unsigned int m_Nlig;
    public:
    Matrice();
    Matrice(unsigned int Ncol, unsigned int Nlig);
    ~Matrice();
    int getCol(){return m_Ncol;}
    int getLig(){return m_Nlig;}
    Matrice init(Matrice &m);
    void saisirValeurs(Matrice &m);
    void additionnerMatrice(Matrice &m);
    void soustraireMatrice(Matrice &m);
    void multiplierMatrice(Matrice &m, double v);
    void afficher();
};

void M();
void A();
void menu();


#endif // DECLARATIONS_H_INCLUDED
