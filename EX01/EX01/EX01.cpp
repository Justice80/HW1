/* Name: Justice Martinez
   Date: 5/20/2015
   Assignment #1
   CS 172 */
   
   /* Results
   EX01: 20/20
   EX02: 19/20
       cout the shelflife whether you change it or not
   EX03: 18/20
       char tab = '\t';  //(you had the wrong \)
   EX04: 20/20
   EX05: 16/20
       ex05c and ex05d should take a size: void ex05c(int array[], int size)
   
   TOTAL: 93
   */

/* EX 01_01:
   a) Central Processing Unit
   b) Main Memory
   c) i) on a disk
   d) v) a binary digit, like 0 or 1
   e) Address
   f) Eight
   g) iv) allocates resources like memory to programs that are running
   h) ii) is any software that is runs with the support of the operating system.  
   */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include "Functions.h"
#include "OtherFunctions.h"
using namespace std;

int main() {

	srand(time(NULL));
	ex02();
	ex03();
	ex04();
	ex05();

	return 0;
}
