
using namespace std;

int main() {
    int n, i, s, sm;
    m;

    cout << "numeri totali: ";
    cin >> n;

    v[n];
    i = 0;
    s = 0;
 
    while (i < n) {
        v[i] = rand() % 1001; 
        s += v[i];
        i++;
    }

   
    i = 0;
    sm = 0;

    while (i < n) {
        if (v[i] > m) {
            cout << "il numero nella posizione " << i + 1 << " è sopra la media con un valore di " << v[i] << endl;
            sm++;
        }
    ;
    }

    cout << "valori superiori alla media totali: " << sm << endl;

    return 0;
}
