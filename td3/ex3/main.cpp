#include <iostream>
#include <vector>
using namespace std;
void remplir(vector<int>& vec,int n){
    cout<<"entrez" <<n<<"valeurs entieres :\n";
    for(int i =0;i<n;i++){
        int val;
        cout<<"valeur"<<i+1<<" :";
        cin>> val;
        vec.push_back(val);
    }
}
int produit(vector<int>& vec1,vector<int>& vec2,int n){
    int p=1;
    for(int i=0;i<n;i++){
        p=p+vec1[i]*vec2[i];
    }
    return p;
}
int main()
{
    int n;
    cout<<"entrez la taille de vector";
    cin>>n;

    vector<int>vect1;
    vector<int>vect2;
    remplir(vect1,n);
    remplir(vect2,n);
    int p=produit(vect1,vect2,n);
    cout<<p;


    return 0;
}
