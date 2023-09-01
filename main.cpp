#include <iostream>
#include <fstream>
#include <vector>
#include <random>
using namespace std;

double ED(vector<float> a, vector<float> b, int d)
{
    double D = 0;
    for (int i = 0; i < d; i++)
    {
        D += (b[i] - a[i]) * (b[i] - a[i]);

    }
    D = sqrt(D);
    return D;
}


int main()
{

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0.0, 1.0);
    int d = 5000;                                           //cambiar dimensiones
    vector < vector<float>> nros;
    vector<float>  temp;
    vector<double> distancias;
    for (int n = 0; n < 100; n++)
    {
        temp.clear();
        for (int i = 0; i < d; ++i)
        {

            temp.push_back(dis(gen));

        }
        nros.push_back(temp);
    }
    for (int x = 0; x < 100; x++)
    {
        for (int y = x+1; y < 100; y++)
        {
            if(x!=y)
                distancias.push_back(ED(nros[x], nros[y], d));
        }
    }
    cout << distancias.size();
    ofstream MyFile("distancias5000.txt");
    for (int i = 0; i < distancias.size(); i++)
    {
        MyFile << distancias[i]<<"\n";
    }
    MyFile.close();
}
