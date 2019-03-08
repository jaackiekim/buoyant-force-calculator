//  Jacqueline Kim
//  This program calculates the buoyant force to determine whether a sphere will sink or float in water.
//  Last modified 3/6/19

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int weight = 1, radius = 1;
    int sphereVolume = 0, buoyantForce = 0;
    const int WATER_WEIGHT = 62.4;
    const double SPHERE_VOLUME_FRACTION = (4/3), PI = 3.1415;
    char repeat = 'y';
    
    while ( repeat == 'y' || repeat == 'Y' ) {
    
    cout << "Press the RETURN key after inputting a value.\n" << endl;
        
    cout << "Enter the weight of the sphere (pounds): \n";
        cin >> weight;
    cout << "Enter the radius of the sphere (feet): \n";
        cin >> radius;
        
        cout << endl;
    
    sphereVolume = SPHERE_VOLUME_FRACTION * PI * pow(radius, 3);
    buoyantForce = sphereVolume * WATER_WEIGHT;
        
        if ( buoyantForce >= weight ) {
        
            cout << "The weight of the sphere is " << weight << " pounds "
            << "and \nthe buoyant force is " << buoyantForce << ".\n"
            << "Since the buoyant force is greater than the weight \n"
            << "of the sphere, the sphere will float.\n";
            cout << endl;
            
        }
            
        else {
                
                cout << "The weight of the sphere is " << weight << " pounds "
                << "and \nthe buoyant force is " << buoyantForce << ".\n"
                << "Since the buoyant force is less than the weight \n"
                << "of the sphere, the sphere will sink.\n";
                cout << endl;
        
        }
            
        cout << "Repeat program? (Y for yes)\n";
        cin >> repeat;
        cout << endl;
        
    }
    
    return 0;
}

/* console:
 
 Press the RETURN key after inputting a value.
 
 Enter the weight of the sphere (pounds):
 400
 Enter the radius of the sphere (feet):
 1
 
 The weight of the sphere is 400 pounds and
 the buoyant force is 186.
 Since the buoyant force is less than the weight
 of the sphere, the sphere will sink.
 
 Repeat program? (Y for yes)
 n
 
 Program ended with exit code: 0
 
 */
