// square each variable, add them up together, and return the square root
#ifndef MAGNETIC_FIELD_H
#define MAGNETIC_FIELD_H

#include <iostream>
#include <cmath>

/*
For M field:
Calculate the unit vector of the magnetic field.
Output the magnetic field unit vector to the screen.
*/
class Magnetic_Field
{
  private:
    double *M;
  public:
    // default constructor
	Magnetic_Field() {
		M = new double[3];
		M[0] = M[1] = M[2] = 0;
	}
	
	// constructor with parameters
	Magnetic_Field(double mx, double my, double mv) {
		M = new double[3];
		M[0] = mx;
		M[1] = my;
		M[2] = mv;
	}
	
	// deconstructor - to free the memory from constructor
	~Magnetic_Field() { // note: ~ syntax for deconstructor in C
		std::cout << "Deleting Magnetic Field..." << std::endl;
		delete[] M;
	}
	
	// set variables one by one
	void set_x(double mx) {
		M[0] = mx;
	}
	
	void set_y(double my) {
		M[1] = my;
	}
	
	void set_z(double mz) {
		M[2] = mz;
	}
	
	double get_x() {
		return M[0];
	}
	
	double get_y() {
		return M[1];
	}
	
	double get_z() {
		return M[2];
	}
	
	// unit vector
	double magnitude() const {		
		double calculate_magnitude = sqrt((M[0]*M[0])+(M[1]*M[1])+(M[2]*M[2]));
		return calculate_magnitude;		
	}
	
	void unit_vector() const {
		double magnitude = (M[0]*M[0])+(M[1]*M[1])+(M[2]*M[2]);
		if (magnitude == 0) {
			std::cout << "Cannot calculate a unit vector without a magnitude. 0 on all fronts!" << std::endl;			
		}
		else {
			std::cout << "Unit vector of Magnetic Field: <" << M[0]/magnitude << "," << M[1]/magnitude << "," << M[2]/magnitude << ">" << std::endl;
		}
	}
};

#endif

