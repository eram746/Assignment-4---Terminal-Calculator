#include <iostream>
#include <stdlib.h>
void menu() {
	std::cout << "Main Menu\n";
	std::cout << "1.Addition\n";
	std::cout << "2.Subtraction\n";
	std::cout << "3.Multiplication\n";
	std::cout << "4.Division\n";
	std::cout << "5.Exit\n";
}

void addition(double a, double b) {
	std::cout << "The answer is " << a + b << std::endl;
}

void subtraction(double a, double b) {
	std::cout << "The answer is " << a - b << std::endl;
}

void multiplicattion(double a, double b) {
	std::cout << "The answer is " << a * b << std::endl;
}

void division(double a, double b) {
	if (b == 0) {
		std::cout << "Impossible to divide by Zero.\n";
	} else {
	    std::cout << "The answer is " << a / b << std::endl;
	}
}

void input_validator(){
    if (!std::cin) {
		std::cout << "Not a valid number, discarding input\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

int main() {
	int choice;
	double num1;
	double num2;

	

    while (choice != 5){
        menu();

	std::cin >> choice;
	input_validator(); 
    if (choice == 5) {
        std::cout << "Thank you for using the C++ Console Calculator\n"; 
        break;
    }
    else if(choice > 5){
        std::cout << "Okay... I will indulge you\n"; 
    }
	std::cout << "Enter number 1\n";
	std::cin >> num1;
	input_validator(); 
	
	std::cout << "Enter number 2\n";
	std::cin >> num2; 
	input_validator(); 
        
        switch (choice){
    	case 1:{
    	    addition(num1, num2);
    	    break; 
    	}
    	case 2:{
    	    subtraction(num1, num2); 
    	    break;
    	}
    	case 3:{
    	    multiplicattion(num1, num2); 
    	    break;
    	}
    	case 4:{
    	    division(num1, num2); 
    	    break;
    	}
    	
    	default:{
    	    std::cout << "You have wasted your time. Pick from the menu 1 - 5\n";
    	    break; 
    	}

        }

         
    }}