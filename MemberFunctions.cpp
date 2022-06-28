/******************************************************************************
Project 9, in this project we will be creating a class which contains member
functions that perform the basic operations of complex numbers and real numbers.
We will create operator functions for this behavior, as imaginary numbers
have different behavior than regular numbers.
*******************************************************************************/
#include<iostream>

class Complex{
    private:
		int real;
		int imaginary;
    public:
    	Complex(int r, int i ):real(r), imaginary(i){}
    	Complex(int r):real(r), imaginary(0){}
    	Complex() :real(0), imaginary(0) {}
    	Complex operator+ ( const Complex& right ){
			Complex result ( this->real + right.real, this->imaginary + right.imaginary );
			std::cout << right.real;
 	 		return result;
    	}
    	Complex operator- ( const Complex& right ){
    		Complex result ( this->real - right.real, this->imaginary - right.imaginary );
    		return result;
    	}
    	Complex operator* ( const Complex& right ) {
    		Complex result ( this->real * right.real- this->imaginary * right.imaginary, this->real*right.imaginary+this->imaginary*right.real );
    		return result;
    	}
		int operator== ( const Complex& right ) const{
    		if ( (this->real == right.real) && (this->imaginary == right.imaginary) ){
				return 1;
    		}
			else 
				return 0;
    	}
		int operator!= ( const Complex& right ) const{
    		if ( (this->real != right.real) || (this->imaginary != right.imaginary) ){
				return 1;
    		}
			else 
				return 0;
    	}
    	Complex operator+ ( const int& right ){
    		Complex result ( this->real +right, this->imaginary );
    		return result;
    	}
    	Complex operator- ( const int& right ){
    		Complex result ( this->real - right, this->imaginary );
    		return result;
    	}
    	Complex operator* ( const int& right ){
    		Complex result ( this->real * right - this->imaginary *0, this->real*0 + this->imaginary*right );
    		return result;
    	}
		int operator== ( const int& right ){
    		if ( (this->real == right) && (this->imaginary == 0) ){
				return 1;
    		}
			else 
				return 0;
    	}
		int operator!= ( const int& right ){
    		if ( (this->real != right) || (this->imaginary != 0) ){
				return 1;
    		}
			else 
				return 0;
    	}
};
static Complex operator* ( int l, const Complex& r ){
	return  Complex(l)*r;
}