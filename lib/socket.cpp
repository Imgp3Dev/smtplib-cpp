#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string>
#define PORT 993
// 
//
//
//
//__note this is the standard client Socket code from source: geeksforgeeks.com
//
//
//
int main(int argc, char const *argv[])
{
struct sockaddr_in address;
int sock = 0, valread;
struct sockaddr_in serv_addr;
char send = ""
char buffer[1024] = {0};
if((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
{
 std::cout("\n Socket creation error \n")
 return -1;
}
memset(&serv_addr, '0', sizeof(serv_addr));
serv_addr.sin_family = AF_INET;
serv_addr.sin_port = htons(PORT);
if(inet_pton(AF_INET, "74.125.141.108", &serv_addr.sin_addr)<=0)
{
 std::cout("\nInvalid address/ Address not supported \n"); 
 return -1; 
}
if(connect(sock(struct socketaddr*)&serv_addr)) < 0)
{
std::cout("\nConnection Failed \n"); 
        return -1; 
}
send(sock, message, strlen(message),0);
std::cout("Message sent");
valread = read(sock, buffer, 1024);
return 0;
}

