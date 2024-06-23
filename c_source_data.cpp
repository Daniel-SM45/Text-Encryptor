#include<iostream>
#include<stdlib.h>
#include"c_source_data.h"
using namespace std;

unsigned int ASCII = 126;

void main_title() {
	cout << "########## CriptMensage ########## \n";
	cout << "\n Escolha uma das opcoes abaixo\n";

	cout << "\n [1] Criptografar";
	cout << "\n [2] Descriptografar \n";
	cout << "-----------------------------------\n";
}
void user_option(char user_choice) {


    if (user_choice == '1') {
		char encrip_words[1000];
		system("cls");
		cout << "\n Digite a palavra que queira criptografar >>: ";
		cin >> encrip_words;
	    cript_main(encrip_words);
	 }
	    else if (user_choice == '2') {
		char dec_words[1000];
		system("cls");
		cout << "\n Digite a palavra que queira descriptografar >>: ";
		cin >> dec_words;
		//cript_main(dec_words);
		decript_main(dec_words);
		}
	else
		cout << " Comando invalido! " << endl;

}
template<typename Cript>
void cript_main(Cript& getWords) {
	for (int index = 0; (index <= ASCII && getWords[index] != '\0'); index++) {
		getWords[index] += 3;
	}
	cout << " OUTPUT >>>: " << getWords << "\n";
}
template<typename Decript>
void decript_main(Decript& getWords) {
	for (int index = 0; (index <= ASCII && getWords[index] != '\0'); index++) {
		getWords[index] -= 3;
	}
	cout << " OUTPUT >>>: " << getWords << "\n";
}

void user_program_end_dialog(char user_choice_end) {
    if (user_choice_end == 'S' || user_choice_end == 's') {
		
	}
      else if (user_choice_end == 'N' || user_choice_end == 'n') {
		cout << "Programa finalizado.";
		system("exit");
		}		
}
