#include <gtest/gtest.h>
#include "../database.hpp"
#include "../student.hpp"

TEST(CheckStructure, CanAddStudentToDb_Req1_Req2) {
  Student json{
    "Json", 
    "Kowalski", 
    "ul. Bobrza 45, 21-370 Warszawa",
    134,
    "12345678901",
    Gender::Male
  };

  Database db;
  EXPECT_TRUE(db.add(json));
  EXPECT_FALSE(db.add(json));
}