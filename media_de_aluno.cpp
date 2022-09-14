#include <iostream>

using namespace std;

int main(){
    
    double aluno[4], media, exame, mediafinal; 
    
    cin >> aluno[0] >> aluno[1] >> aluno[2] >> aluno[3];

    aluno[0] = aluno[0] * .2;
    aluno[1] = aluno[1] * .3;
    aluno[2] = aluno[2] * .4;
    aluno[3] = aluno[3] * .1;
    media = aluno[0] + aluno[1] + aluno [2] + aluno [3];
    
    cout.precision(1);
    cout << fixed;
    cout << "Media: " << media << endl;

    if (media < 5.0){
        cout << "Aluno reprovado." << endl;
    }
    if ( media >=5.0 && media < 7){
        cout << "Aluno em exame." << endl;
        cin >> exame;
        cout.precision(1);
        cout << fixed;
        cout << "Nota do exame: " << exame << endl;
        mediafinal = (exame + media) / 2;
        if (mediafinal >= 5.0){
            cout << "Aluno aprovado." << endl;
        }
        else {
            cout << "Aluno reprovado." << endl;
        }
        cout.precision(1);
        cout << fixed;
        cout << "Media final: " << mediafinal << endl;
    }
    if (media >= 7.0){
        cout << "Aluno aprovado." << endl;
    }
    return 0;
}