#include "CollisionProfile.h"

UCollisionProfile::UCollisionProfile() {
    this->Profiles.AddDefaulted(77);
    this->DefaultChannelResponses.AddDefaulted(18);
    this->EditProfiles.AddDefaulted(19);
    this->ProfileRedirects.AddDefaulted(7);
    this->CollisionChannelRedirects.AddDefaulted(16);
}


