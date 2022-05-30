#include <cstdio>
#include <drogon/HttpAppFramework.h>
#include <drogon/HttpResponse.h>
#include <drogon/drogon.h>
#include <drogon/utils/FunctionTraits.h>
#include <functional>
#include <jsoncpp/json/json.h>
#include <jsoncpp/json/value.h>
#include <string>
int main() {
  printf("启动服务器");
  // Set HTTP listener address and port
  // drogon::app().addListener("0.0.0.0",8080);
  // Load config file
  drogon::app().loadConfigFile("../config.json");
  // Run HTTP framework,the method will block in the internal event loop
  drogon::app().run();
  return 0;
}
