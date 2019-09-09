
* random numbers
  * in c++ random numbers can be retrieved using the cstlib function rand. `i = rand();` 
    * a roll of a six-sided die could be expressed as `i= rand() % 6;`
      * 6 is the scaling factor
    * rand is, however, psuedorandom
      * a function using it when ran, will produce the same results
  * srand is a seeded random number function. it takes a seed value and will return a non-deterministic random value
  * generalized formula for random integer generation: `int n = shiftingValue + rand() % scalingFactor;`
    * shiftingValue: starting value
    * scalingFactor: ending value