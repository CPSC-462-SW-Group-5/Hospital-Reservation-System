#pragma once
#include <string>
// this is our Domain for Authentication
namespace Domain::Reservation    // change folder name Library -> Reservation later
{
  // Reservation Package within the Domain Layer Abstract class
  class reqDoctor
  {
  public:
    virtual ~reqDoctor() noexcept = 0;
    virtual std::string getDoctor();

  protected:
    // Copy assignment operators, protected to prevent mix derived-type assignments
    reqDoctor & operator=( const reqDoctor & rhs ) = default;    // copy assignment
    reqDoctor & operator=( reqDoctor && rhs ) = default;         // move assignment
  
  };

  inline reqDoctor::~reqDoctor() noexcept = default;


}