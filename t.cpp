#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int scelta, num=0, primo=0, vettore[10], valore=0, occorrenze=0, numero = 1, i=0, j=0;
    double PI = 3.141, area, circonferenza;
    char risposta;

    do {
        cout << "Menu:" << endl;
        cout << "1 - Visualizzare numeri pari in ordine inverso" << endl;
        cout << "2 - Verificare se un numero intero e' primo" << endl;
        cout << "3 - Contare vocali e consonanti in un vettore di lettere maiuscole" << endl;
        cout << "4 - Contare occorrenze di un valore in un vettore" << endl;
        cout << "5 - Calcolare circonferenza e area di cerchi" << endl;
        cout << "6 - Visualizzare successione di numeri con conferma utente" << endl;
        cout << "7 - Stampare premi compresi tra due valori" << endl;
        cout << "0 - Uscire" << endl;
        cout << "Scelta: ";
        cin >> scelta;

        switch (scelta) {
            case 1:
                cout << "La sequenza e':" << endl;
                for (int i = 100; i >= 1; i--) {
                    if (i % 2 == 0) {
                        cout << i << endl;
                    }
                }
            break;

            case 2:
                cout << "Inserisci un numero intero: ";
                cin >> num;
                if (num > 1) {
                    primo = 1;
                    for (int i = 2; i <= num / 2; i++) {
                        if (num % i == 0) {
                            primo = 0;
                        }
                    }
                    if (primo==1) {
                        cout << num << " e' un numero primo." << endl;
                    } else {
                        cout << num << " non e' un numero primo." << endl;
                    }
                } else {
                    cout << "Il numero deve essere maggiore di 1." << endl;
                }
            break;
            case 3:
                char lettere[10];
                int vocali = 0;
                int consonanti = 0;
                for(int i=0;i<10; i++)
                {
                    cout << "Inserisci le lettere (max. 10 caratteri): " << endl;
                    cout << i << ") ";            
                    cin >> lettere[i];
                }
                vocali = 0;
                consonanti = 0;                
                for (int i = 0; lettere[i] != '\0'; i++) {
                    char carattere = lettere[i];
                    if ((carattere >= 'A' && carattere <= 'Z') || (carattere >= 'a' && carattere <= 'z')) {
                        if (carattere == 'A' || carattere == 'E' || carattere == 'I' || carattere == 'O' || carattere == 'U' ||
                            carattere == 'a' || carattere == 'e' || carattere == 'i' || carattere == 'o' || carattere == 'u') {
                            vocali++;
                        } else {
                            consonanti++;
                        }
                    }
                }
                cout << "Numero di vocali: " << vocali << endl;
                cout << "Numero di consonanti: " << consonanti << endl;
            break;

            case 4:
                cout << "Inserisci gli elementi del vettore:" << endl;
                for (int i = 0; i < 10; i++) {
                    cout << "Elemento " << i + 1 << ": ";
                    cin >> vettore[i];
                }
                cout << "Inserisci il valore X da cercare nel vettore: ";
                cin >> valore;
                occorrenze=0;
                for (int i = 0; i < 10; i++) {
                    if (vettore[i] == valore) {
                        occorrenze++;
                    }
                }
                cout << "Il valore " << valore << " compare " << occorrenze << " volte nel vettore." << endl;
            break;

            case 5:
                for (int raggio = 1; raggio <= 20; raggio++) {
                    double circonferenza = 2 * PI * raggio;
                    double area = PI * pow(raggio, 2);
                    cout << "Il risultato e':" << endl;
                    cout << "Raggio: " << raggio << " - Circonferenza: " << circonferenza << " - Area: " << area << endl;
                }
            break;

            case 6:
                do {
                    cout << "Numero: " << numero << endl;
                    numero++;
                    cout << "Vuoi continuare? (s/n): ";
                    cin >> risposta;
                } while (risposta == 's' || risposta == 'S');
                cout << "Fine del programma." << endl;
            break;
            case 7:
                int premi[] = {100, 150, 200, 250, 300, 350, 400, 450, 500};
                cout << "Inserisci il valore di partenza del premio: ";
                cin >> i;
                cout << "Inserisci il valore di fine premio: ";
                cin >> j;
                if(i>=0 && j>=0)
                {
                    cout << "Premi compresi tra " << i << " e " << j << ":" << endl;
                    for (int k = 0; k < 9; k++) {
                        if (premi[k] >= i && premi[k] <= j) {
                            cout << premi[k] << endl;
                        }
                    }
                } else {
                    cout << "Mi hai dato valori negativi" << endl;
                }
            break;
        }

    } while (scelta != 0);

    return 0;
}
