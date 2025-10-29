// square each variable, add them up together, and return the square root
#ifndef ELECTRIC_FIELD_H
#define ELECTRIC_FIELD_H

#include <iostream>
#include <cmath>

/*
For E field:
Calculate the inner product of the electric field vector.
Output the inner product result to the screen.
*/
class Electric_Field
{
  private:
    double *E;
  public:
    // default constructor
	Electric_Field() {
		E = new double[3];
		E[0] = E[1] = E[2] = 0;
	}
	
	// constructor with parameters
	Electric_Field(double ex, double ey, double ev) {
		E = new double[3];
		E[0] = ex;
		E[1] = ey;
		E[2] = ev;
	}
	
	// deconstructor - to free the memory from constructor
	~Electric_Field() { // note: ~ syntax for deconstructor in C
		std::cout << "Deleting Electric Field..." << std::endl;
		delete[] E;
	}
	
	// set variables one by one
	void set_x(double ex) {
		E[0] = ex;
	}
	
	void set_y(double ey) {
		E[1] = ey;
	}
	
	void set_z(double ez) {
		E[2] = ez;
	}
	
	double get_x() {
		return E[0];
	}
	
	double get_y() {
		return E[1];
	}
	
	double get_z() {
		return E[2];
	}
	

/* - this was unecessary	
	// vector - GETTER
	double *vector() {
		double *vector = E;
		return E;
	}
	*/
	
	// unit vector
	double magnitude() const {
		//double *the_magnitude = (double *)malloc(sizeof(double));
		double calculate_magnitude = sqrt((E[0]*E[0])+(E[1]*E[1])+(E[2]*E[2]));
		return calculate_magnitude;		
	}
	
	// inner product
	double inner_product() const {
		double inner = ((E[0]*E[0])+(E[1]*E[1])+(E[2]*E[2]));
		return inner;
	}
};

#endif

