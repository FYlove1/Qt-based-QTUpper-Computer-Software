#ifndef UDP_CONNECT_H
#define UDP_CONNECT_H

#include <winsock2.h>


// UDP_Connect类负责建立和管理UDP连接。
class UDP_Connect {
public:
    // 构造函数
    UDP_Connect();

    // 析构函数
    ~UDP_Connect();

    // 初始化WinSock并创建socket
    bool initialize();

    // 将socket绑定到指定端口
    bool bindSocket(unsigned short port);

    // 向指定的地址和端口发送数据
    int sendData(const char* data, int length, const sockaddr_in& recipient);

    // 从socket接收数据
    int receiveData(char* buffer, int bufferLength, sockaddr_in& sender);

    // 关闭socket
    void closeSocket();

private:
    SOCKET sockfd;           // 用于UDP通信的socket描述符
    bool isInitialized;     // 标识WinSock是否已初始化
};

#endif // UDP_CONNECT_H