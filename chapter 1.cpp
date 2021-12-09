/*
// What is C++?
      It was a one of the programming  language.
	  It is made for a, make a convecation from human to computer and vice versa.

  // We use C++	in:
                 gaming, manufacturing, office, graphics, etc.

  // How it work?                                                                                    // Important ponits:
        programing << program << compile << app. // For writing program we want source code.                // 1.interest
        source code << hardware << software or app. // it is called executing or running the program.      // 2.patience
                                                                                                          // 3.fun and
                                                                                                         // 4.practise.
  // machine language:
	     10101010010010101                        // It is very hard to understand, so......
 // assembley language:
	     mov , h1;                               // It is also little hard, so......
// high level  language:
	     C , C++ , java , js , python.          // Example for C++ : main()

// compiler:
	         It is used for convert programing language (high level language) into machine language , and vice versa.
			 It is main source or main software for programing. compiler will be ignore the blank lines.

// rules:
          For example we use "semicolon ';'0 " in end of the statement,
          because it is one of the rule.

// Guide:
    1.Problem
    2.Solution   // Always think multiple or alternative solution.
    3.Program
    4.Compile
    5.Result

// library file:
              It was also called a collection of data. It is used for compressing the program.

// linker:
         It will link the the library file and the program.

// primary section:
    1.statements
	2.function - main()
	3. syntax - correct sentence, eg hi it is correct, ih it is not.

// variables:
          computer will take all the things as data.
		  eg a=5; a is variable and 5 is value.

// data types:
        1. int - 1,2,3,-1,0.
		2. char - a to Z.
		3. string - word.
		4. float - 1.2, 2.012, 4.3.
		5. bool - true or false.
		and etc.

// assignment operator:
                     its syntax is = and it will  assign the value to the variable, and it will always assign the value from right to left.

// function:
		A job of a function is do something and in the program there is a bunch of functions in it.
		Its syntax is '()'. The bacis function is main because it will present in the all C++ program.
*/

#include<iostream>  // "#include" use for to mention that we going to use a library file.// In iostream, i stand for input and o stand for output.
// Its syntax is "#include<>".

using namespace std; // std stands for standard.

int main()    // It is the base for coding, and its also like a key for a car.

{
	int n= 5; // int is data type, number is variable, 5 is value and assignment operator.
	cout<<n<<endl;  // dont give the double quotes to the variable.

	char alphabet= 'A' ; // use single quotes to mention it is character.
	cout<<alphabet<<"\n"; // use "\n" to end the line.
	// std stands for standard and '::' its use for
	// join them.

	/* first type to  assign
	int a=15;
	// second type to assign
	int b;
	b=12;
	// third type to assign
	int a, b; // , will be separate variables.
	int a=5, b=5;*/
// dont use same variable name twice because compiler will be confuse.

//cout
	cout<<"welcome\n"; // cout stands for character out, its syntax is '<<'. use double quots "" to enter a word.

// mathamatics oprator - +,-,%,*,/.
	int a=12;
	int b=3;
	cout<<a+b-a<<std::endl<<std::endl; // use two endl to skip the line.

// task
	int a1=12,b1=3;
	int add;
	int div;
	cout<<"Add and mutiply by 5:\n";
	add=(a1+b1)*5;
	cout<<add<<std::endl;
	cout<<"divide and multiply by 5:\n";
	div=(a1/b1)*5;
	cout<<div<<std::endl<<"\n";

//cin
	int x,y;
	cout<<"Enter any two numbers.\n";
	cin>>x>>y;
	cout<<"Total value of your numbers is:\n"<<x+y;
	return 0;
} // when we use int we want to use return 0 because we use integer data type so the program must return 0.
// It is like saying program is working fine.
// Byeeeeeeeeeeeeeeeeeeee
