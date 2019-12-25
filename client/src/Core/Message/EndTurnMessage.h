#ifndef AIC20_CLIENT_CPP_END_TURN_MESSAGE_H
#define AIC20_CLIENT_CPP_END_TURN_MESSAGE_H

#include "EventMessage.h"

class EndTurnMessage final : public EventMessage {
public:

    inline explicit EndTurnMessage(const std::string& type, const std::vector<Json::Value>& args)
            : EventMessage(type, args)
    {
    }
};

#endif // AIC20_CLIENT_CPP_END_TURN_MESSAGE_H