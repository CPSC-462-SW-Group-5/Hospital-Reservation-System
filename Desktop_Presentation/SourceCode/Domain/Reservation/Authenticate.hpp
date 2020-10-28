#pragma once
// this is our Domain for Authentication
namespace Domain::Reservation    // change folder name Library -> Reservation later
{
  // Reservation Package within the Domain Layer Abstract class
  class Authenticate
  {
  public:
    virtual ~Authenticate() noexcept = 0;


  protected:
    // Copy assignment operators, protected to prevent mix derived-type assignments
    Authenticate & operator=( const Authenticate & rhs ) = default;    // copy assignment
    Authenticate & operator=( Authenticate && rhs ) = default;         // move assignment
  
  };

  inline Authenticate::~Authenticate() noexcept = default;


}