
#include <iostream>
#include <vector>
using namespace std;

void remplirvecteur(vector<int>& vec ,int n){
    cout<<"entre"<<n<<"valeur entieres :\n";
    for(int i=0;i<n;i++){
        int val;
        cout<<"valeur"<<i+1<<":";
        cin>> val;
        vec.push_back(val);
    }
}
int comptepositif(const vector<int>& vec){
    int c=0;
    for(int val : vec){
        if(val>0){
            c++;
        }
    }
    return c;
}
int main()
{
    int n;
    cout<<"entre la taille de vector : ";
    cin>>n;
    vector<int>vect;
    remplirvecteur(vect,n);
    int c=comptepositif(vect);
    cout<<"nombre de valeur positives :"<< c <<endl;
    return 0;
}

