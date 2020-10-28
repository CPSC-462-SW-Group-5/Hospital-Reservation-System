#pragma once

// this is our Domain for Authentication
namespace Domain::Reservation    // change folder name Library -> Reservation later
{
  // Reservation Package within the Domain Layer Abstract class
  class reqPaymentOption
  {
  public:
    virtual ~reqPaymentOption() noexcept = 0;
    virtual int getCardNo();
    virtual int getCVV();
    
  protected:
    // Copy assignment operators, protected to prevent mix derived-type assignments
    reqPaymentOption & operator=( const reqPaymentOption & rhs ) = default;    // copy assignment
    reqPaymentOption & operator=( reqPaymentOption && rhs ) = default;         // move assignment
  
  };

  inline reqPaymentOption::~reqPaymentOption() noexcept = default;


}