#pragma once
// this is our Domain for Authentication
namespace Domain::Reservation    // change folder name Library -> Reservation later
{
  // Reservation Package within the Domain Layer Abstract class
  class generateServicesList
  {
  public:
    virtual ~generateServicesList() noexcept = 0;
    virtual int getVisitNumber();


  protected:
    // Copy assignment operators, protected to prevent mix derived-type assignments
    generateServicesList & operator=( const generateServicesList & rhs ) = default;    // copy assignment
    generateServicesList & operator=( generateServicesList && rhs ) = default;         // move assignment
  
  };

  inline generateServicesList::~generateServicesList() noexcept = default;


}