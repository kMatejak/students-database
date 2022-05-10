#include <gtest/gtest.h>
#include "../database.hpp"
#include "../student.hpp"

struct DatabaseTest : ::testing::Test 
{
  Database db;
}

TEST_F(DatabaseTest, CanAddStudentToDb_Req1_Req2) {
  Student json{
    "Json", 
    "Kowalski", 
    "ul. Bobrza 45, 21-370 Warszawa",
    134,
    "12345678901",
    Gender::Male
  };

  EXPECT_TRUE(db.add(json));
  EXPECT_FALSE(db.add(json));
}

TEST_F(DatabaseTest, DisplayEmptyDatabase) {
  auto content = db.show();
  auto expected = "";
  EXPECT_EQ(content, expected);
}

// TEST(DisplayDb, DisplayEmptyDatabase) {
//   Database db;

//   Student json {
//     "Json", 
//     "Kowalski", 
//     "ul. Bobrza 45, 21-370 Warszawa",
//     134,
//     "12345678901",
//     Gender::Male
//   };
//   EXPECT_TRUE(db.add(json));

//   db.display();
// }
