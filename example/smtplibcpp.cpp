//Example file of how to use smtplibcpp
#include "lib/socket.cpp"
#include "lib/smtplibcpp.h"
using namespace std;
int main()
{
myemail("youremail@something.com");
send("Hi", "something@gmail.com");
return 0;
}
