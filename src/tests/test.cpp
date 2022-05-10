#include <gtest/gtest.h>
#include "../database.hpp"
#include "../student.hpp"

struct DatabaseTest : ::testing::Test
{
  Database db;
};

TEST_F(DatabaseTest, DisplayEmptyDatabase) {
  auto content = db.show();
  auto expected = "";
  EXPECT_EQ(content, expected);
}

TEST_F(DatabaseTest, DisplayNonEmptyDatabase) {
  Student json {
    "Json", 
    "Kowalski", 
    "ul. Bobrza 45, 21-370 Warszawa",
    134,
    "12345678901",
    Gender::Male
  };
  db.add(json);
  // check adding the same person twice

  auto content = db.show();
  auto expected = "Json Kowalski; ul. Bobrza 45, 21-370 Warszawa; 134; 12345678901; Male";
  EXPECT_EQ(content, expected);
}
