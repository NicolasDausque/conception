#include "Route.hpp"

bool Route::operator==(const Route & r) const {

  if(distance_==r.distance_ &&( villeA_==r.villeA_ && villeB_==r.villeB_)||( villeA_==r.villeB_ && villeB_==r.villeA_)){
    return true;
  }
    return false;
}

bool Route::operator!=(const Route & r) const {
  return !(*this==r);
}


