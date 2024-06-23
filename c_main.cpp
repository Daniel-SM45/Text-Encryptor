#include<iostream>
#include<stdlib.h>
#include"c_source_data.h"

int main() {
	main_title();
	char user_op_input, user_op_end_input;
	std::cout << " >>>: ";
	std::cin >> user_op_input;
	user_option(user_op_input);
	std::cout << " Continuar com o programa ? [S] [N]\n";
	std::cin >> user_op_end_input;
	user_program_end_dialog(user_op_end_input);
	return 0;
}
