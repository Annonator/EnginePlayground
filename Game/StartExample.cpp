//
// Created by Andreas Pohl on 09.01.16.
//
#include <Engine/Render/RenderBuildExample.h>
#include <iostream>


int main(int argc, char *argv[]){
  RenderBuildExample test;
  test.openGLInitTest();

  std::cout << "Hello World!";

  return 0;
}