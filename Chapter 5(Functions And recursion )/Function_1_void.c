/*
 ?? FUNCTIONS IN C — QUICK SUMMARY ??

1??  What is a Function?
    ? A function is a reusable block of code that performs a specific task.
    ? It helps keep code organized, readable, and easy to debug.

2??  Basic Function Structure:
        return_type function_name(parameters) {
            // code
            return value;  // (if not void)
        }

3??  Function Placement:
    ? Functions must be written OUTSIDE main().
    ? Option 1: Define before main()  ?  no need for declaration.
    ? Option 2: Define after main()   ?  must declare (prototype) first.

4??  Function Declaration (Prototype):
        int add(int a, int b);
    ? Tells the compiler a function exists and what it returns.

5??  RETURN vs PRINT:
    ? 'return' sends a value back to the caller (can be used later).
    ? 'printf()' only displays output on the screen (cannot be reused).

6??  The 'void' Function:
    ? 'void' means the function does NOT return any value.
    ? It only performs an action (like printing, updating data, etc.).
    ? Example:
            void greet() {
                printf("Hello!\n");  // just prints, returns nothing
            }

7??  You CANNOT:
    ? Define a function inside main().
    ? Use 'return something;' inside a void function.
    ? Store the result of a void function in a variable.

8??  You CAN:
    ? Use 'return;' (without value) in void functions to exit early.
    ? Call a void function to perform tasks, not to get results.

?? Remember:
    ? 'return' talks to your PROGRAM (gives data back)
    ? 'printf' talks to the SCREEN (just shows info)

?? Tip:
    Use 'void' functions when you only need to DO something,
    not when you need to CALCULATE and RETURN a result.
*/


#include<stdio.h>
void welcome(){ // No declaration required before main( ).Recommended..
	printf("Welcome to C language \n");
}
int main(){
	welcome();
	greet();

	return 0;
}
void greet(); // Declaration required below main( ). Not recommended
void greet(){
	printf("Hello World!\n");
}
