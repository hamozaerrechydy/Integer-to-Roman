#include <iostream>

int main() {
 //to print code in c++ : std::cout << ? ;
  int array[6];
  // enter your number to turn into array 
  int number = 3;
  // turn the number into array 
  for (int i = 5; i >= 0; i--) {
    array[i] = number % 10;
    number /= 10;
  }
  // convert the number into roman letter 
  // enter a number 
  /*
  Enter one of the following numbers : 
    0 - 1 - 2 - 3 - 5 - 10 - 50 - 100 - 500 - 1000
  */
  int num = 0;
  if(num == 0){
    std::cout << "Zero\n";
  }else if(num == 1){
    std::cout << "I\n";
  }else if(num == 2){
    std::cout << "II\n";
  }else if(num == 3){
    std::cout << "III\n";
  }else if(num == 5){
    std::cout << "V\n";
  }else if(num == 10){
    std::cout << "X\n";
  }else if(num == 50){
    std::cout << "L\n";
  }else if(num == 100){
    std::cout << "C\n";
  }else if(num == 500){
    std::cout << "D\n";
  }else if(num == 1000){
    std::cout << "M\n";
  }
}

/*
[x] turn the num to an arr 
[x] if x is 0 print "zero" to the console 
[x] if x is 1 print "I"
[x] if x is 2 print "II"
[x] if x is 3 print "III" 
[x] if x bigger or equal 5 print "V"
[x] if x >= 10 print "X"
[x] if x >= 50 print "L" 
[x] if x >= 100 print "C"
[x] if x >= 500 print "D"
[x] if x >= 1000 print "M"
*/
