#include <iostream>
#include "funcs.h"
#include "coord3d.h"

int main()
{

  std::cout<<"\n---------------------\n";
  std::cout<<"Task A \n";
  Coord3D pointP = {10, 20, 30};
  std::cout << length(&pointP) << std::endl;
  return 0;
}
