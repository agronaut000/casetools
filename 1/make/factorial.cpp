/** 
   \file
   \brief Вычисление факториала числа

   Вычисляет факториал числа
*/

#include "functions.h"

/** \brief Вычисление факториала числа \f$ b \f$
   \param n - число, факториал которого необходимо вычислить
   \return \f$ n! \f$

   Функция вычисляет значения факториала числа \f$ n \f$, определяемое по формуле: \f[
   n! = \prod_{i = 1}^ n i
   \f]
*/
int factorial(int n){
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
