#include <iostream>
#include <vector>
#include <string>
#include "tableau.h"
using namespace std;

struct Ville {
    string nom;
    double latitude;
    double longitude;
};

bool recherche_ville(const vector<Ville>& villes, const string& nom_recherche, double& latitude, double& longitude) {
    for (const auto& ville : villes) {
        if (ville.nom == nom_recherche) {
            latitude = ville.latitude;
            longitude = ville.longitude;
            return true;
        }
    }
    return false;
}

int main() {
    // Liste des villes
    vector<Ville> villes = {
        {"Tunis", 36.8065, 10.1815},
        {"Sfax", 34.7406, 10.7603},
        {"Sousse", 35.8256, 10.6362},
        {"Kairouan", 35.6781, 10.0963},
        {"Gabès", 33.8815, 10.0982}
    };

    string nom_recherche;
    cout << "Entrez le nom de la ville à rechercher : ";
    cin >> nom_recherche;

    double latitude, longitude;
    if (recherche_ville(villes, nom_recherche, latitude, longitude)) {
        cout << "La ville " << nom_recherche << " se trouve à la position (" << latitude << ", " << longitude << ")." << endl;
    } else {
        cout << "Ville introuvable." << endl;
    }

    return 0;
}
//version de unorded_map
/*
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    // Carte des villes avec leur position
    unordered_map<string, pair<double, double>> villes = {
        {"Tunis", {36.8065, 10.1815}},
        {"Sfax", {34.7406, 10.7603}},
        {"Sousse", {35.8256, 10.6362}},
        {"Kairouan", {35.6781, 10.0963}},
        {"Gabès", {33.8815, 10.0982}}
    };

    string nom_recherche;
    cout << "Entrez le nom de la ville à rechercher : ";
    cin >> nom_recherche;

    auto it = villes.find(nom_recherche);
    if (it != villes.end()) {
        cout << "La ville " << nom_recherche << " se trouve à la position ("
             << it->second.first << ", " << it->second.second << ")." << endl;
    } else {
        cout << "Ville introuvable." << endl;
    }

    return 0;
}
*/
