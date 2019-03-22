#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> pav;
    int k;
    for (int i=0; i<5; i++)
    {
        cout <<"Iveskite sveikaji skaiciu: ";
        cin>>k;
        pav.push_back(k);
    }
    pav[3]=6;
    for (int &i: pav)
        cout <<i<<endl;

    return 0;
}
