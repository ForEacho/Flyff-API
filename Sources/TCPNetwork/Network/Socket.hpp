#pragma once

#include "framework.hpp"

#include <WinSock2.h>
#include <WS2tcpip.h>

#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib, "Mswsock.lib")
#pragma comment(lib, "AdvApi32.lib")

#include "Network.hpp"

class API_DECLSPEC Socket
{
protected:
	SOCKET	_socket = INVALID_SOCKET;

public:
	virtual ~Socket() {}
	virtual void	clean(void) = 0;
	virtual void	shutdown(void) = 0;
	SOCKET	getSocket(void) const { return _socket; }
};
