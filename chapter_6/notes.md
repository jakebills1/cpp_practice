* argument coercion
  * refers to the c++ compiler's ability to convert certain data types when a function is called with arguments that do not match it's prototype. an int can be converted to a double. a double can be converted to an int, though its decimal part will be truncated, resulting in data loss
    * this can result in undefined behavior and incorrect results. 
* storage class: the period in which the identifier exists in memory. Can range from brief to the entire execution of the program
  * auto: variables local to a function that exist only when the function is being executed. Default for local vars
  * register: "suggests" to the compiler that the variable be stored in the computers hardware register. Frequently used variables like a counter may see performance benefits by being set as register
  * static: variables that stay in memory during entire execution of program
    * extern: refers to global variables
    * local: local variables declared as static will retain their value between calls to a function
* scope
  * function scope: labels ( start: ) have function scope
  * global namespace scope: an identifier declared outside any function or class
  * local scope: identifiers within a block, or set of curly braces, or function parameters
  * function-prototype scope: names used in the arguments list in a function prototype
  * class scope:
  * namespace scope:
* call stack
  * is a stack data structure (LIFO). Each time a function calls another function, an activation record or stack frame is pushed onto the call stack. it contains the return address that the called function needs to return to the calling function
* other c++ keywords:
  * inline: when used before a function definition ( not a function prototype), it requests that the compiler not make a function call, but copy the function into main. this saves stack space, but may results in multiple copies of the function being in main
  * const: before a a variable, indicates that a function will not change the value of that variable. 