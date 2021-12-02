#pragma once
#include <iostream>
using std::string;
using std::endl;
using std::cout;

class Socket
{
public:
	virtual ~Socket();
	virtual string SocketInput() const = 0;
};

class AmericanSocket : public Socket {
	string SocketInput() const {
		return "Input American Standard Socket";
	}
};

class ChineseSocket : public Socket {
	string SocketInput() const {
		return "Input Chinese Standard Socket";
	}
};

