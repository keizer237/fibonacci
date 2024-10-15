#include <iostream>

using namespace std;

//fonction recursive pour calculer le n-eme terme de la suite de fibonacci
int fibo(int target, int terme1, int terme2){
    cout << terme1 << " ";
    if (target == 0){
        return terme1;
    }
    else{
       return fibo(target - 1, terme2, terme1 + terme2); 
    }
    
}

int main() {
     int n;
     cout << "entrer le nombre de terme de la suite:";
     cin >> n;
     int treme1 = 0, treme2 = 0; //initialisation des 2 premier terme

     fibo(n-1, treme1, treme2); //appel de la fonction avec le nombre de terme -1

     return (0);
}


