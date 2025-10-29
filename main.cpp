#include <stdio.h>
#include <iostream>

#include "Electric_Field.h"
#include "Magnetic_Field.h"

int main() {
	std::cout << "ELECTRIC FIELD E_default (code contains \"Electric_Field E_default;\") " << std::endl;
	Electric_Field E_default;
	std::cout << "Inner product: " << E_default.inner_product() << std::endl;	// calls function from class to print inner product; should be 0
	
	std::cout << "\nELECTRIC FIELD E_components " << std::endl;	
	Electric_Field E_components(1e5, 10.9, 1.7e2);
	std::cout << "Inner Product of Electric Field: " << E_components.inner_product() << std::endl;
	double get_the_y = E_components.get_y(); // tests getter
	std::cout << "Print Y variable via getter: " << get_the_y << std::endl; // printout of getter
	
	
	
	// new electric field	
	std::cout << "\nELECTRIC FIELD e_one #1: " << std::endl;
	Electric_Field e_one = Electric_Field(4e3, 3e7, 9.2); // calls on class to construct
	double e_mag = e_one.magnitude(); // calls on class to calculate magnitude
	std::cout << "Magnitude: " << e_mag << std::endl;
	e_one.inner_product();
	
	// new Magnetic Field
	std::cout << "\nMAGNETIC FIELD m_two: " << std::endl;
	Magnetic_Field m_two;
	m_two.unit_vector();	// tests printout of unit vector with defaults <0, 0, 0>
	std::cout << "\nUsing setters: <8e-2, 1e-1, 10e-3> " << std::endl;
	m_two.set_x(8e-2);
	m_two.set_y(1e-1);
	m_two.set_z(10e-3);
	m_two.unit_vector();	// tests it after using setters	
	
	// new magnetic field
	// Magnetic_Field m_one = new Magnetic_Field(1e4, 10.44, 8e6);
	
	
	return 0;
}

