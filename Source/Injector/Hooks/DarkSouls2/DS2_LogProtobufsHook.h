/*
 * Dark Souls 3 - Open Server
 * Copyright (C) 2021 Tim Leonard
 *
 * This program is free software; licensed under the MIT license.
 * You should have received a copy of the license along with this program.
 * If not, see <https://opensource.org/licenses/MIT>.
 */

#pragma once

#include "Injector/Hooks/Hook.h"

// Writes the incoming and outgoing protobuf messages.
class DS2_LogProtobufsHook : public Hook
{
public:
    virtual bool Install(Injector& injector) override;
    virtual void Uninstall() override;
    virtual const char* GetName() override;

private:
    bool Install_SerializeWithCachedSizesToArray(Injector& injector);
    bool Install_ParseFromArray(Injector& injector);

};
