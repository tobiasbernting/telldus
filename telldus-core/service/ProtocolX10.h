//
// Copyright (C) 2012 Telldus Technologies AB. All rights reserved.
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef PROTOCOLX10_H
#define PROTOCOLX10_H

#include "service/Protocol.h"
#include "service/ControllerMessage.h"

class ProtocolX10 : public Protocol
{
public:
	int methods() const;
	virtual std::string getStringForMethod(int method, unsigned char data, Controller *controller);

	static std::string decodeData(ControllerMessage& dataMsg);
};

#endif //PROTOCOLX10_H
