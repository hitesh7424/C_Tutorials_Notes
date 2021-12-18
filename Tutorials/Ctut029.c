/*

Recirsions are slow in getting fibonacci series
because it has to call multiple function for single value
and this results in time consuming task

*/

/*

Recursions are not always good and time efficient

quiz 

how many times fib(19) be called in calculation of fib(19)?

    answer> 3 times

recurtion tree =>

                         fib(22)
                          /  \
                         /    \
                        /      \
                     fib(21)   fib(20)
                    / \             / \
                   /   \           /   \
                  /     \         /     \
            fib(20)  fib(19)   fib(19)  fib(18)
            /  \ 
           /    \
     fib(19)   fib(18)
*/

/*

BECAUSE @>

    @> Recursions is a good aproach when comes to a problem solving

    @> However, a programmer needs to evaluate the need and impact of using ecursive/iterative approach
       while solving a particular problem.

    @> In case of factorial calculation, recursion saved a lot of lines of code.

    @> However in case of fibonacci series, recursion resulted in some extra unnecessary function
       calls which was an extra overhead!

    @> Running time for fibonacce series grows exponentially with input in case of recursive approach! 

*/