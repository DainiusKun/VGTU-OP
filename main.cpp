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
    ///fghfghfghgfhgfh
    for (int &i: pav)
        cout <<i<<endl; /// fgfgfgfg

    return 0;
}
