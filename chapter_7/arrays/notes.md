* in c++, arrays are consecutive memory locations of the same type. 
  * declared like `type arrayName[size]`
  * initializing arrays
    * the values in static arrays are initialized to 0, they are not in automatic variables
  * passing arrays to function:
    * in cpp, arrays are pass-by-reference. one typically passes the array size at the same time. just pass the array name into the function
      * according to the principle of least privilege, outside functions should not modify arrays in main. declaring an array as const prevents this, as it will result in a compliation error
    * individual array elements are pass by value
* searching
  * linear:
    * good for small arrays or unsorted arrays 