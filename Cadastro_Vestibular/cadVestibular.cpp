#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cstring>
#define MAX 30

using namespace std;

typedef struct{
	string nome;
	string cpf;
	int idade;
	char situacao;
}CANDIDATO;

typedef struct{
	CANDIDATO dados[];
	int numCand;
}LISTA;

void criaLista(LISTA *l){
	l->numCand = 0;
}

void verificaListaCheia(LISTA *l){
	if (l->numCand == MAX)
		cout << "\nNão é possível inserir novos dados, pois o sistema se encontra no limite de cadastrados\n";
}

void inserirDados(CANDIDATO *c, LISTA *l){
	cout << "\nNos informe seu nome\n";
	cin.ignore();
	getline(cin, c->nome);
	cout << "\nOk, agora nos informe seu CPF (Por favor sem os pontos, somente os números.)\n";
	cin.ignore();
	getline(cin, c->cpf);
	cout << "\nAgora entre com a sua idade: ";
	cin >> c->idade;
	cout << "\nPor último, informe sua situação de aprovação\nSe Aprovado entre com a\nCaso tenha sido reprovado, entre com r\n";
	cin >> c->situacao;
	
	cout << "\nDados cadastrados com Sucesso!\n";
}

void imprimeDados(CANDIDATO *c){
	cout << "\nNome: " << c->nome;
	cout << "\nIdade: " << c->idade;
	cout << "\nCPF: " << c->cpf;
	
	if (c->situacao == 'a')
		cout << "\nSituação: Aprovado\n";
	else
		cout << "\nSituação Reprovado\n";
}

void consultarDados(LISTA *l, CANDIDATO *c){
	
}

int main(){
	
	CANDIDATO c;
	LISTA l;
	int op;
	
	criaLista(&l);
	
	do {
		cout << "\tCADASTRO PARA VESTIBULAR\n";
		cout << "\nSelecione a opção desejada\n";
		cout << "\n\tMENU";
		cout << "\n1 - CADASTRAR\n";
		cout << "2 - MOSTRAR DADOS\n";
		cout << "3 - CONSULTAR DADOS\n";
		cout << "0 - Sair do Menu\n";
		cin >> op;
		
		switch (op){
			case 1:
				inserirDados(&c);
				system("pause");
				system("cls");
			break;
			case 2:
				imprimeDados(&c);
				system("pause");
				system("cls");
			break;
			case 3:
				consultarDados(&l, &c);
				system("pause");
				system("cls");
			break;
		}
	}
	while (op != 0);
	cout << "\nSaindo...\n";
}
