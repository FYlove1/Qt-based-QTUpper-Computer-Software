#include "UDP_Connect.h"
#include <iostream>

// 构造函数
UDP_Connect::UDP_Connect() : sockfd(INVALID_SOCKET), isInitialized(false) {}

// 析构函数
UDP_Connect::~UDP_Connect() {
    // 如果WinSock已初始化，则进行清理
    if (isInitialized) {
        WSACleanup();
    }
    // 如果socket已创建，则关闭socket
    if (sockfd != INVALID_SOCKET) {
        closeSocket();
    }
}

// 初始化WinSock并创建socket
bool UDP_Connect::initialize() {
    // 初始化WinSock库
    WSADATA wsaData;
    int result = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (result != 0) {
        std::cerr << "WSAStartup failed: " << result << std::endl;
        return false;
    }
    isInitialized = true; // 标记WinSock已初始化
    return true;
}

// 将socket绑定到指定端口
bool UDP_Connect::bindSocket(unsigned short port) {
    // 检查WinSock是否已初始化
    if (!isInitialized) {
        std::cerr << "WinSock not initialized." << std::endl;
        return false;
    }

    // 创建UDP socket
    sockfd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (sockfd == INVALID_SOCKET) {
        std::cerr << "Socket creation failed: " << WSAGetLastError() << std::endl;
        return false;
    }

    // 设置服务器地址信息
    sockaddr_in servaddr;
    memset(&servaddr, 0, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = INADDR_ANY;  // ip4 地址
    servaddr.sin_port = htons(port);  // 端口 

    // 绑定socket到服务器地址
    if (bind(sockfd, (sockaddr*)&servaddr, sizeof(servaddr)) == SOCKET_ERROR) {
        std::cerr << "Bind failed: " << WSAGetLastError() << std::endl;
        closesocket(sockfd);
        return false;
    }
    return true;
}

// 向指定的地址和端口发送数据
int UDP_Connect::sendData(const char* data, int length, const sockaddr_in& recipient) {
    // 使用sendto函数发送数据
    return sendto(sockfd, data, length, 0, (sockaddr*)&recipient, sizeof(recipient));
}

// 从socket接收数据
int UDP_Connect::receiveData(char* buffer, int bufferLength, sockaddr_in& sender) {
    // 设置sender信息的长度
    int senderLen = sizeof(sender);
    // 使用recvfrom函数接收数据
    return recvfrom(sockfd, buffer, bufferLength, 0, (sockaddr*)&sender, &senderLen);
}

// 关闭socket
void UDP_Connect::closeSocket() {
    // 如果socket已创建，则关闭socket
    if (sockfd != INVALID_SOCKET) {
        closesocket(sockfd);
        sockfd = INVALID_SOCKET;
    }
}