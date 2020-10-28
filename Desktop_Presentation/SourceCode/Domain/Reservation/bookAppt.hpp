#pragma once
#include<string>
// this is our Domain for Authentication
namespace Domain::Reservation    // change folder name Library -> Reservation later
{
  // Reservation Package within the Domain Layer Abstract class
  class bookAppt
  {
  public:
    virtual ~bookAppt() noexcept = 0;
    virtual std::string getDoctor();
    virtual std::string getDate();
    virtual std::string getTime();

  protected:
    // Copy assignment operators, protected to prevent mix derived-type assignments
    bookAppt & operator=( const bookAppt & rhs ) = default;    // copy assignment
    bookAppt & operator=( bookAppt && rhs ) = default;         // move assignment
  
  };

  inline bookAppt::~bookAppt() noexcept = default;


}