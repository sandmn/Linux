#include<stdio.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<sys/socket.h>
int main()
{
    struct sockaddr_in addr1;
    struct sockaddr_in addr2;
    addr1.sin_addr.s_addr = 0;
    addr2.sin_addr.s_addr = 0xffff;

    char* ptr1 = inet_ntoa(addr1.sin_addr);
    char* ptr2 = inet_ntoa(addr2.sin_addr);
    printf("%s %s\n",ptr1,ptr2);
    return 0;
}
