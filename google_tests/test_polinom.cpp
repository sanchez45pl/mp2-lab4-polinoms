#include "gtest/gtest.h"
#include "polinom.h"


TEST(Polinom, can_create_polinom) {
    ASSERT_NO_THROW(Polinom polinom);
}

TEST(Polinom, can_add_first_monom) {
    Polinom polinom;
    polinom.add_monom(1,111);
    EXPECT_EQ(polinom.first_monom->coefficient, 1);
    EXPECT_EQ(polinom.first_monom->powers, 111);
}

TEST(Polinom, throw_when_get_power_out_of_range_while_multiplying) {
    Polinom first_polinom;
    Polinom second_polinom;
    first_polinom.add_monom(1,555);
    second_polinom.add_monom(1,666);
    EXPECT_ANY_THROW(first_polinom*second_polinom);
}
