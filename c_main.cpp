#include<iostream>
#include<stdlib.h>
#include"c_source_data.h"
using namespace std;

int main() {
	main_title();
	char user_op_input, user_op_end_input;
	cout << " >>>: ";
	cin >> user_op_input;
	user_option(user_op_input);
	cout << " Continuar com o programa ? [S] [N]\n";
	cin >> user_op_end_input;
	user_program_end_dialoge(user_op_end_input);
	return 0;
}