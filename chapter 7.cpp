#include<iostream>
using namespace std;
/*
//Multidimensal arrays:
			It is similar to the array but in this we can declare two arrays in same time
			and it seems like tabular coloum and its syntax is '[][]={}'.
			In first box we want to mention how many rows and in second box we want to mention how many coloum that we wanted.
			For ex:
			3 rows and 2 coloum means,
			a[3][2]
			and it seems like
			1st row|1st coloum	|2nd coloum |
			2nd row| 			|		 	|
			3rd row| 			| 			|
			and also if we want to make 3 rows we want to make 3 scope inside the main scope and 
			if we want to make 2 coloum we want to mention 2 numbers in inside the scope and it is also
			start in 0 by default.

//Class and object
			It was awesome for every C++ learner, in this we can store funtions by using class and
			we can call the specifice function by using object. We can use it for grouping similar functions.
			syntax of class is 'class (class name){};' and syntax of object is '(class name) (variable name) (variable name).(function name)'.
			If you want to make a function in class, first we want to declare it is "public" or "private",
			public means we can call that function in any function that placed inside the class or outside the class but
			private means we can call that function in any function that only inside the class, for example check the line 55 and 61.   
			and if we want to call that function in outside we want to use object and for using object we want to declare 
			the class and a variable name and declare that variable name and give the function name that you want to call. 
			We can store infinity funtions in class and many of the people are use capital alphabets for naming class and 
			we want to use semicolon when the class scope end. If we call the private function in public function and 
			if we call that public function in any funtion it will out private function also it somewhat like cheating,
			for example check the line 58,64 and 76.						 
						 
*/

int main()
{  

//multidimensal arrays
	int a[2][3]={{1,2,3},{4,5,6}};
	
	cout<<"Example for Multidimensal array:\n";
	for(int i=0;i<2;i++) // outing like box
	{
		for(int o=0;o<3;o++)
		{
			cout<<"|"<<a[i][o];
		}
		
		cout<<"|"<<endl;
	}
	
//class and object
 
//Class
    class abc
    {	
    	private:
    		a()
    		{
    			cout<<"hi";
			}
    		
    	public:
    		b()
    		{
    			a();
    			cout<<" hello";
			}
    	
			
	};
		  
//Object
	cout<<"\nExample for class and object:\n";
	abc name;
	name.b();
		  	



return 0;}
