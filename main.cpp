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

  return 0;
}
