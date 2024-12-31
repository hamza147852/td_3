#include <iostream>
#include <vector>
#include <tuple>
using namespace std;
tuple<int,int> mini_maxi(const vector<int>& vect){
    int mini=vect[0];
    int maxi=vect[0];
    for(int val : vect){
        if(val<mini){
            mini=val;
        }
        if(val>maxi){
            maxi=val;
        }
    }
    return {mini,maxi};

}
void remplir_vector(vector<int>& vec, int n) {
    cout << "Entrez " << n << " valeurs entières :\n";
    for (int i = 0; i < n; i++) {
        int val;
        cout << "Valeur " << i + 1 << " : ";
        cin >> val;
        vec.push_back(val);
    }
}
int main()
{
    int n;
    cout << "donner la taille de vecteur" << endl;
    cin>>n;
    vector<int>vect;
    remplir_vector(vect,n);
    auto [mini, maxi] = mini_maxi(vect);
    cout << "Le minimum est : " << mini << endl;
    cout << "Le maximum est : " << maxi << endl;
    return 0;
}
