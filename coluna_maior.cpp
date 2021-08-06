#include <iostream>
using namespace std;

#define MAX 20 //define como tamanho maximo uma matriz do tipo 20x20 (linhas x colunas);

void procura_maior(int lin, int col, int matriz[MAX][MAX]);

int main(){
    int lin, col;
    int matriz[MAX][MAX];
    cout << "\nCODIGO EM C++ PARA VERIFICAR QUAL O MAIOR VALOR DE CADA COLUNA DE UMA MATRIZ";
    cout << "\n\nDIGITE A QUANTIDADE LINHAS: ";
    cin >> lin;
    cout << "DIGITE A QUANTIDADE COLUNAS: ";
    cin >> col;
    cout << "DIGITE OS ELEMENTOS DA MATRIZ\nCADA LINHA EM SEQUENCIA: \n";

    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){ //recebe os valores de cada linha em sequência.
            cin >> matriz[i][j];
        }
    }

    procura_maior(lin, col, matriz); //chama a função do tipo void, para procura do maior valor.

}
// declaração da função de procurar maior valor
void procura_maior(int lin, int col, int matriz[MAX][MAX]){
    int maior_valor_col = 0; //variável auxiliar 
    cout << "OS MAIORES ELEMENTOS DE CADA COLUNA SAO:\n";
    for(int j=0; j<col; j++){ // faz a passagem da matriz
        for(int i=0; i<lin; i++){ // faz a passagem da matriz, fixando a coluna e percorrendo as linhas
            if(matriz[i][j] > maior_valor_col){
                maior_valor_col = matriz[i][j]; // faz a passagem de cada coluna,atribuindo a maior_valor_col
                                                // o elemento maior.
            }
        }
        cout << maior_valor_col << " ";  // imprime na tela os maiores valores, para as
                                         // colunas em sequência.
        maior_valor_col = 0; // reinicia a contagem do maior valor, para a próxima coluna
    }
}