#include<iostream>
#include<windows.h>
#include"Enemy.h"
#include<stdio.h>
#include<stdlib.h>
#include"Template.h"
#include"Animal.h"

int main() {

    Animal* animal1 = new Dog();  
    Animal* animal2 = new Cat();  

    animal1->sound();  
    animal2->sound();  

    delete animal1;
    delete animal2;
   
    return 0;
}