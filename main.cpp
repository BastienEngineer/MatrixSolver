#include "Declarations.h"

Matrice::Matrice(){}

Matrice::Matrice(unsigned int Ncol, unsigned int Nlig):m_Ncol(Ncol),m_Nlig(Nlig){}

Matrice::~Matrice(){}

Matrice Matrice::init(Matrice &m)
{
    std::cout << "Saisir le nombre de colonnes : " << std::endl;
    D;
    std::cin >> m_Ncol;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << "Saisir le nombre de lignes : " << std::endl;
    D;
    std::cin >> m_Nlig;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    Matrice *m1=new Matrice(m_Ncol,m_Nlig);
    return *m1;
}

void Matrice::saisirValeurs(Matrice &m)
{
    int val;
    for(unsigned int i=0;i<m_Nlig;i++)
    {
        for(unsigned int j=0;j<m_Ncol;j++)
        {
            std::cout << "Saisit la valeur de la " << i << "ligne " << j << "colonne " << std::endl;
            std::cin >> val;
            m_mat[i][j]= val; // .push_back();
        }

    }

}
void Matrice::additionnerMatrice(Matrice &m)
{
    if(m.getLig()==m_Nlig && m.getCol()==m_Ncol)
    {
        for(unsigned int i=0;i<m_Nlig;i++)
        {
            for(unsigned int j=0;j<m_Ncol;j++)
            {
                m_mat[i][j] += m_mat[i][j];
            }
        }
    }
}

void Matrice::multiplierMatrice(Matrice &m, double v)
{
    if(m.getCol()==m_Ncol)
    {
        for(unsigned int i=0;i<m_Nlig;i++)
        {
            for(unsigned int j=0;j<m_Ncol;j++)
            {
                m_mat[i][j] == m_mat[i][j] * v;
            }
        }
    }
}
void Matrice::afficher()
{
    for(unsigned int i=0;i<m_Nlig;i++)
    {
        for(unsigned int j=0;j<m_Ncol;j++)
        {
            std::cout << m_mat[i][j] << std::endl;
        }
        std::cout << "" << std::endl;
    }

}





void M()
{
    Matrice *m1=new Matrice();
    double v=0;
    int choix=0;
    std::cout << "1 : Additionner 2 Matrices" << std::endl;
    D;
    std::cout << "2 : Soustraire 2 Matrices" << std::endl;
    D;
    std::cout << "3 : Multiplier une Matrice par un vecteur" << std::endl;
    D;
    std::cout << "4 : Retour Menu" << std::endl;
    D;
    std::cin >> choix;
    switch(choix)
    {
    case 1:
        m1->init(*m1);
        m1->additionnerMatrice(*m1);
        m1->afficher();
        break;
    case 2:
       // m1->soustraireMatrice(*m1);
        m1->afficher();
        break;
    case 3:
        std::cout << "Saisir le vecteur : " << std::endl;
        std::cin >> v;
        m1->multiplierMatrice(*m1,v);
        m1->afficher();
        break;
    case 4:
        menu();
        break;
    default : M();

    }



}


void A()
{


}


void menu()
{
    int choix=0;
    std::cout << "1 : Matrice" << std::endl;
    D;
    std::cout << "2 : Applications Lineaires" << std::endl;
    D;
    std::cout << "3 : " << std::endl;
    D;
    std::cout << "4 : Quitter" << std::endl;
    D;
    std::cin >> choix;
    switch(choix)
    {
    case 1:
        M();
        break;
    case 2:
        A();
        break;
    case 3:
        break;
    case 4:
        system("exit");
        break;
    default : menu();

    }
}
void m()
{
   ShellExecute(NULL, "open", "http://dreamincode.net",NULL, NULL, SW_SHOWNORMAL);
}
int main()
{
    //m();
    //system ("start notepad.exe");
    SetConsoleOutputCP(CP_UTF8);
    menu();
    return 0;
}
