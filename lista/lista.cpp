#include <iostream>
#include <stdlib.h>
#include <cmath>





/*Para executar as funções das questões é só chamar na main, as que estão lá é porque precisa, só executar e GG ;)*/




using namespace std;
//Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe
//as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os
//valores das variáveis antes e após a modificação.
void Questao1(){

  int inteiro = 5;
  
  float real = 1.0;
  
  char letra = 'a';

  int *ponteiro = &inteiro;
  float *ponteiro2 = &real;
  char *ponteiro3 = &letra;

  cout << "Valores antes da modificação:\n[" << inteiro << "]\n[" << real << "]\n[" << letra <<"]" << endl;

  *ponteiro = 7;
  *ponteiro2 = 2.3;
  *ponteiro3 = 'b';

  cout << "Valores depois da modificação:\n[" << inteiro << "]\n[" << real << "]\n[" << letra <<"]" << endl;
}


// Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B. A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função ao principal.

void Questao2(int A, int B){
  
  int valor;
  valor = A + B;

  int *ponteiro;

  ponteiro = &valor;
  
  cout << "Valor da soma: " << *ponteiro << endl;
}


/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada
posição desse array.*/

void Questao3(){

  float array[10];
  float *ponteiro;

  for(int i = 1; i <= 10; i++){
    array[i] = 1.5;
    ponteiro = array;

    cout << "Posição " << i << ": " << ponteiro << endl;
  }
}

/*Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima o endereço de
cada posição dessa matriz.*/

void Questao4(){

  int *ponteiro;
  int array[3][3];

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      array[i][j] = 0;
      ponteiro = &array[i][j];
      cout << ponteiro << " ";
      }
    cout << endl;
    }
}

/*Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética de
ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.*/

void Questao5(){
  int array[5];
  int *ponteiro;


  cout << "Digite 5 valores: " << endl;
  
  for(int i = 0; i < 5; i++){
    cin >> array[i];
    ponteiro = array;
  }

  for(int i = 0; i < 5; i++){
    cout << "Valores dobrados: " << ponteiro[i] * 2 << endl;
  }
}


/*Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima
o endereço das posições contendo valores pares.*/

void Questao6(){

    int array[5];
    int *ponteiro;

    cout << "Digite 5 valores: " << endl;

    for(int i = 0; i < 5; i++){
    cin >> array[i];
    ponteiro = array;
  }

    for(int i = 1; i < 6; i++){
        if(*ponteiro % 2 == 0){
            cout << "Endereço dos valores pares: " << &i << endl;
        }
        ponteiro++;
    }
}

/*Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que leia a variável a e calcule e
exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve
ser usada para calcular o dobro, C o triplo e D o quádruplo.*/

void Questao7(){
    
    int A, *B, **C, ***D;

    B = &A;
    C = &B;
    D = &C;

    cout << "Valor de A: ";
    cin >> A;

    cout << "Valor de A duplicado: " << *B * 2 << endl;
    cout << "Valor de A triplicado: " << **C * 3 << endl;
    cout << "Valor de A quadruplicado: " << ***D * 4 << endl;
}

/*Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de entrada e
retorne eles ordenados, ou seja, o menor valor na primeira variável, o segundo menor valor na variável do
meio, e o maior valor na última variável. A função deve retornar o valor 1 se os três valores forem iguais e 0 se
existirem valores diferentes. Exibir os valores ordenados na tela.*/

void Questao8(){

    int A, B, C, aux;
  
    cout << "Dê valores para A, B e C: \n";
    cin >> A;
    cin >> B;
    cin >> C;

  if(A == B && B == C){
    cout << "1" << endl;
  }

  if (A != B || B != C){
    cout << "0" << endl;
  }

  if(A>C){
    aux = A;
    A = C;
    C = aux;
  }

  if(A>B){
    aux = A;
    A = B;
    B = aux;
  } if (B > C){
    aux = B;
    B = C;
    C = aux;
  }

  cout << "Array ordenada: " << A << " " << B << " " << C << endl;
  
}

/*Escreva uma função que dado um número real passado como parâmetro, retorne à parte inteira e a parte
fracionaria deste número. Escreva um programa que chama a função Prototipo: void frac(float num, int*
inteiro, float* frac);*/

void Questao9(float num, int * inteiro, float * frac){

    *inteiro = (int) num;
    *frac = num - (int) num;

}

/*Implemente uma função que receba como parâmetro um array de números reais de tamanho N e retorne
quantos números negativos há nesse array. Essa função deve obedecer ao protótipo: int negativos(float *vet,
int N);*/

void Questao10(float * vet, int N){

    int negativos;
    cout << "Digite os valores para preencher o array: " << endl;

    for(int i = 0; i < 5; i++){
        cin >> *vet;
        if (*vet < 0){
            negativos += 1;
        }
        vet++;
    }
    cout << "Temos " << negativos << " números negativos." << endl;
    
}

/*Escreva uma função que receba um array de inteiros V e os endereços de duas variáveis inteiras, min e max, e
armazene nessas variáveis o valor mínimo e máximo do array. Escreva também uma função ao main que use
essa função.*/

void Questao11(int *V, int tamanho){

    int maior, menor;

    maior = *V;
    menor = *V;
    V++;
    for(int i = 1; i < tamanho; i++){
        
        if(*V > maior){
            maior = *V;
            
        } if (*V < menor){
            menor = *V;
            
        }
        V++;
    }

    cout << "O maior número foi " << maior << endl;
    cout << "O menor número foi " << menor << endl;
}

/*Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas respectivas
quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro para um terceiro vetor, x3, alocado
dinamicamente, contendo a união de x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3. Sendo x1
= {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 4, 5, 6, 7, 8}. Assinatura da função: int* uniao(int *x1, int
*x2, int n1, int n2, int* qtd);*/

void Questao12(int *x1, int *x2, int n1, int n2){

    int cont12 = 0;

    for (int i = 0; i < 5; i++){
        if (x1[i] == x2[i]){
            cont12++;
        }
        else{
            cont12 = cont12 + 2;
        }
    }

    int *vet12;

    vet12 =  (int *) malloc(cont12 * sizeof(int));

    if(vet12){
        cout << "Memória alocada!" << '\n';
        for(int i = 0; i < cont12; i++)
            vet12[i]= rand() % 100;
    }
    else{
        cout << "Erro de alocação!" << '\n';
    }

    int j = 0;
    int v1 = 0;
    int v2 = 0;
    
    for (int i = 0; i < 5; i++){

        
        if (x1[v1] == x2[v2]){
            vet12[j] = x1[v1];
            j++;
            v1++,
            v2++;
        }
        if (x1[v1] < x2[v2]){
            vet12[j] = x1[v1];
            j++;
            v1++;
        }
        if (x2[v2] < x1[v1]){
            vet12[j] = x2[v2];
            j++;
            v2++;
        }

        if ((v1 == 6) && (v2 == 4)){
            vet12[6] = x2[4];
        }
    }

    cout << "O vetor organizado: ";
    for (int i = 0; i < cont12; i++){
        cout << vet12[i] << " ";

    }

    cout << '\n';

}

/*Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas respectivas
quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro para um terceiro vetor, x3, alocado
dinamicamente, contendo a intersecção de x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3. Sendo
x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 6}. Assinatura da função: int* interseccao(int *x1, int
*x2, int n1, int n2, int *qtd);*/

void Questao13(int *x1, int *x2, int n1, int n2, int *qtd){

    int cont13 = 0;

    for (int i = 0; i < n1; i++){
        if (x1[i] == x2[i]){
            cont13++;
        }
    }

    int *vet13;

    vet13 =  (int *) malloc(cont13 * sizeof(int));

    if(vet13){
        cout << "Memória alocada!" << '\n';
        for(int i = 0; i < cont13; i++)
            vet13[i]= rand() % 100;
    }
    else{
        cout << "Erro de alocação!" << '\n';
    }

    int j = 0;
    
    for (int i = 0; i < n2; i++){

        if (x1[i] == x2[i]){
            vet13[j] = x1[i];
            j++;
        }
    }

    cout << '\n';

    cout << "O vetor intercecção é: ";
    for (int i = 0; i < cont13; i++){
        cout << vet13[i] << " ";

    }

    cout << '\n';

    qtd = &cont13;

}

/*Faça um programa que leia a quantidade de elementos n e crie dinamicamente um vetor de n elementos e
passe esse vetor para uma função que irá ler os elementos desse vetor. Depois, no programa principal, o vetor
preenchido deve ser impresso.*/

void Questao14(int *vet, int n){

     for(int i = 0; i < n; i++)
        cout << (vet[i]) << " ";

    cout << '\n';
    
}

int main(){

    int n14;
    int *vet14;

    cout << "Digite o tamano do vetor: ";
    cin >> n14;

    vet14 =  (int *) malloc(n14 * sizeof(int));

    if(vet14){
        cout << "Memória alocada!" << '\n';
        for(int i = 0; i < n14; i++)
            vet14[i] = rand() % 100;
    }
    else{
        cout << "Erro de alocação!" << '\n';
    }
 
    Questao14(vet14, n14);

    cout << "\n";

    int vetx1[] = {1, 3, 5, 6, 7};
    int vetx2[] = {1, 3, 4, 6, 8};

    int tamx1 = sizeof vetx1/sizeof vetx1[0];
    int tamx2 = sizeof vetx2/sizeof vetx2[0];

    int *px1 = &vetx1[0];
    int *px2 = &vetx2[0];
    
    Questao12(px1, px2, tamx1, tamx2);

    /*Analise o código abaixo e determine o valor das variáveis ao final da execução. int i=34,j; int *p; p = &i; *P++;
    j = *p + 33;*/
    cout << "\n";
    cout << "Questão 15";
    cout << "int i=34,j; --> Declarado as variáveis i com valor 34 e j sem valor" ; 
    cout << "\n\n";
    cout << "int *p; --> criado um ponteiro p";
    cout << "\n\n";
    cout << "*p++; --> é adicionado 4bytes ao valor de memória alocado no ponteiro, no caso i ainda será 34";
    cout << "\n\n";
    cout << "j = *p + 33; --> j terá o valor de 33, uma vez que o valor de memória que deveria ser de i, foi adicionado de 4bytes, ficando o valor 0";
    cout << "\n\n";
    cout << "i --> 34";
    cout << "\n\n";
    cout << "j --> 33";
    cout << "\n\n";
    cout << "______________________________";
    cout << "\n\n";

  return 0;
}