#include <iostream>
#include <array>
#include <vector>

using namespace std;

void remplir_tableau(int tableau[], int n) {
    cout << "Entrez " << n << " valeurs entières :\n";
    for (int i = 0; i < n; i++) {
        cout << "Valeur " << i + 1 << " : ";
        cin >> tableau[i];
    }
}

void recherche_tableau(int tableau[], int n, int V) {
    for (int i = 0; i < n; i++) {
        if (tableau[i] == V) {
            cout << "V se trouve dans le tableau à la position " << i << endl;
            return;
        }
    }
    cout << "V ne se trouve pas dans le tableau." << endl;
}

// Version array
template <size_t N>
void remplir_array(array<int, N>& arr) {
    cout << "Entrez " << N << " valeurs entières :\n";
    for (size_t i = 0; i < N; i++) {
        cout << "Valeur " << i + 1 << " : ";
        cin >> arr[i];
    }
}

template <size_t N>
void recherche_array(const array<int, N>& arr, int V) {
    for (size_t i = 0; i < N; i++) {
        if (arr[i] == V) {
            cout << "V se trouve dans le tableau à la position " << i << endl;
            return;
        }
    }
    cout << "V ne se trouve pas dans le tableau." << endl;
}

// Version avec std::vector
void remplir_vector(vector<int>& vec, int n) {
    cout << "Entrez " << n << " valeurs entières :\n";
    for (int i = 0; i < n; i++) {
        int val;
        cout << "Valeur " << i + 1 << " : ";
        cin >> val;
        vec.push_back(val);
    }
}

void recherche_vector(const vector<int>& vec, int V) {
    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i] == V) {
            cout << "V se trouve dans le tableau à la position " << i << endl;
            return;
        }
    }
    cout << "V ne se trouve pas dans le tableau." << endl;
}

int main() {
    int a;
    cout << "Choisir la nature de tableau" << endl;
    cout << "1) Tableau classique" << endl;
    cout << "2) std::array" << endl;
    cout << "3) std::vector" << endl;
    cin >> a;

    int n, V;


    cout << "Entrez la taille du tableau : ";
    cin >> n;

    switch (a) {
        case 1: {
            int tableau[n];

            remplir_tableau(tableau, n);
            cout << "Entrez la valeur à rechercher : ";
            cin >> V;
            recherche_tableau(tableau, n, V);
            break;
        }
        case 2: {
            array<int, 100> tableau;

            remplir_array(tableau);
            cout << "Entrez la valeur à rechercher : ";
            cin >> V;
            recherche_array(tableau, V);
            break;
        }
        case 3: {
            vector<int> vect;

            remplir_vector(vect, n);
            cout << "Entrez la valeur à rechercher : ";
            cin >> V;
            recherche_vector(vect, V);
            break;
        }
        default:
            cout << "Choix invalide!" << endl;
            break;
    }

    return 0;
}
