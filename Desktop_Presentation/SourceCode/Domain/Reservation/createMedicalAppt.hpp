#pragma once
#include <string>
// this is our Domain for Authentication
namespace Domain::Reservation    // change folder name Library -> Reservation later
{
  // Reservation Package within the Domain Layer Abstract class
  class createMedicalAppt
  {
  public:
    virtual ~createMedicalAppt() noexcept = 0;
    virtual std::string getIssue();

  protected:
    // Copy assignment operators, protected to prevent mix derived-type assignments
    createMedicalAppt & operator=( const createMedicalAppt & rhs ) = default;    // copy assignment
    createMedicalAppt & operator=( createMedicalAppt && rhs ) = default;         // move assignment
  
  };

  inline createMedicalAppt::~createMedicalAppt() noexcept = default;


}