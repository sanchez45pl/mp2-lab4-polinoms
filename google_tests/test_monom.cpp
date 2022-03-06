#include "gtest/gtest.h"
#include "monom.h"


TEST(Monom, can_create_monom) {
    ASSERT_NO_THROW(Monom monom(1,1));
}

TEST(Monom, cannot_create_monom_with_negative_power) {
    ASSERT_ANY_THROW(Monom monom(1,-1));
}

TEST(Monom, cannot_create_monom_with_big_power) {
    ASSERT_ANY_THROW(Monom monom(1,1000));
}