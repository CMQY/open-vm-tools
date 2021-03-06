/*
 *	 Author: bwilliams
 *  Created: Oct 22, 2010
 *
 *	Copyright (C) 2010-2016 VMware, Inc.  All rights reserved. -- VMware Confidential
 */

#ifndef CUnicastingDispatcher_h_
#define CUnicastingDispatcher_h_


#include "Integration/IMessageDispatcher.h"

#include "Integration/Core/CBroadcastingDispatcher.h"
#include "Integration/IErrorHandler.h"
#include "Integration/IIntMessage.h"
#include "Integration/IMessageHandler.h"

namespace Caf {

/// Sends responses/errors back to the client.
class INTEGRATIONCORE_LINKAGE CUnicastingDispatcher :
	public IMessageDispatcher {
public:
	CUnicastingDispatcher();
	virtual ~CUnicastingDispatcher();

public:
	void initialize(
		const SmartPtrIErrorHandler& errorHandler);

public: // IMessageDispatcher
	void addHandler(
		const SmartPtrIMessageHandler& messageHandler);

	void removeHandler(
		const SmartPtrIMessageHandler& messageHandler);

	bool dispatch(
		const SmartPtrIIntMessage& message);

private:
	typedef std::map<const void*, SmartPtrIMessageHandler> CIntMessageHandlerCollection;
	CAF_DECLARE_SMART_POINTER(CIntMessageHandlerCollection);

private:
	bool _isInitialized;
	SmartPtrIErrorHandler _errorHandler;
	SmartPtrCIntMessageHandlerCollection _messageHandlerCollection;

private:
	CAF_CM_CREATE;
	CAF_CM_CREATE_LOG;
	CAF_CM_DECLARE_NOCOPY(CUnicastingDispatcher);
};

CAF_DECLARE_SMART_POINTER(CUnicastingDispatcher);

}

#endif // #ifndef CUnicastingDispatcher_h_
