#pragma once
#include <string>

// this is our Domain for Authentication
namespace Domain::Reservation    // change folder name Library -> Reservation later
{
  // Reservation Package within the Domain Layer Abstract class
  class reqPayService
  {
  public:
    virtual ~reqPayService() noexcept = 0;
    virtual std::string getNameOfService();


  protected:
    // Copy assignment operators, protected to prevent mix derived-type assignments
    reqPayService & operator=( const reqPayService & rhs ) = default;    // copy assignment
    reqPayService & operator=( reqPayService && rhs ) = default;         // move assignment
  
  };

  inline reqPayService::~reqPayService() noexcept = default;


}