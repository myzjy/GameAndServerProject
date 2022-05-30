//
// Created by Apple on 2022/5/25.
//
#define DROGON_TEST_MAIN

#include <drogon/drogon.h>
#include <stdio.h>

using namespace std;

int main() {
  drogon::app().loadConfigFile("../config.json");
  // Run HTTP framework,the method will block in the internal event loop
  drogon::app().run();
  return 0;
}
