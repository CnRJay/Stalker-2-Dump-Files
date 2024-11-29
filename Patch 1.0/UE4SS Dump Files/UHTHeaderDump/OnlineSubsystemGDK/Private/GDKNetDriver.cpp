#include "GDKNetDriver.h"

UGDKNetDriver::UGDKNetDriver() : UIpNetDriver(FObjectInitializer::Get()) {
    this->ChannelDefinitions.AddDefaulted(3);
}


