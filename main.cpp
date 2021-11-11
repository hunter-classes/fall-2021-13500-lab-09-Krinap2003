/*
Author: Krina Patel
Instructor: Proffesor Mike Zamansky
Assignment: Lab 9
*/
#include <iostream>
#include "funcs.h"
#include "coord3d.h"

int main()
{

  std::cout<<"\n---------------------\n";
  std::cout<<"Task A \n";
  Coord3D pointA = {10, 20, 30};
  std::cout << length(&pointA) << std::endl;


  std::cout<<"\n---------------------\n";
  std::cout<<"Task B \n";
  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};
  std::cout << "Address of P: " << &pointP << " "<<length(&pointP)<< std::endl;
  std::cout << "Address of Q: " << &pointQ <<" " <<length(&pointQ) << std::endl;
  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
  std::cout << "ans = " << ans << std::endl;


  std::cout<<"\n---------------------\n";
  std::cout<<"Task C \n";
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;
  // prints: 2 -10 100.4


  std::cout<<"\n---------------------\n";
  std::cout<<"Task E \n";
  std::cout << "Position: 10, 20, 30 \n";
  Coord3D *ppos = createCoord3D(10, 20, 30);
  std::cout << "Velocity: 5.5, -1.4, 7.77 \n";
  Coord3D *pvel = createCoord3D(5.5, -1.4, 7.77);
  move(ppos, pvel, 10.0);
  std::cout << "Coordinates after 10 seconds: " 
  << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;
  deleteCoord3D(ppos); // release memory
  deleteCoord3D(pvel);

  
  return 0;
}
