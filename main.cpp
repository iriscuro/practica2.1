#include <iostream>

using namespace std;

int main()
{
    //<<<<<<OPERADORES Y COMPARACIÓN>>>>>
    // Para dos números
    /*
    int number1 = 0;
    int number2 = 0;
    cout << "Enter two integers to compare: " << endl;
    cin >> number1 >> number2;

    if(number1 == number2) // Las intentaciones  no interesan
        cout << number1 << " == " << number2 << endl;
    if (number1 != number2){
        cout << number1 << " != " << endl; // Es necesario las llaves,sin ellas se realizara la primera de acción
        cout << "<<< son diferentes >>" << endl;
        }
    if (number1 < number2)
        cout << number1 << " < " << number2 << endl;//si hay solo una acción entoces no es necesario colocar llaves
    if (number1 > number2)
        cout << number1 << " > " << number2 << endl;
    if (number1 <= number2)
        cout << number1 << " <= " <<  number2 << endl;
    if (number1 >= number2)
        cout << number1 << " >= " << number2 << endl;
    */

    /*
    IF AND ELSE
    int numero1 = 0;
    int numero2 = 0;
    cout  << "Ingresa dos numeros: " << endl;
    cin >> numero1 >> numero2;
    if (numero1 == numero2)
        cout  << "son iguales" << endl;
    if (numero1 < numero2){
        cout << "El menor es: " << numero2 << endl;
        cout << "El mayor es: " << numero1 << endl;
        }
    */
    // TRES NUMEROS

    int a = 0, b = 0, c = 0;
    cout << "Ingresa tres numeros: " <<endl;
    cin >> a >> b >> c;

    if (a > b){
        if (b > c){
            cout << "El mayor es: " << a << endl;
            cout << "El menor  es: " << c << endl;}
         else {
            cout << "El mayor es: " << c << endl;
            cout << "El menor es: " << b << endl;}
            }
    else { // b > a
        if (a > c){
            cout << "El mayor es: " << b << endl;
            cout << "El menor es: " << c << endl;}
        else{
            cout << "El mayor es: " << c << endl;
            cout << "El menor es: " << a << endl;}

    }

    return 0;

}
