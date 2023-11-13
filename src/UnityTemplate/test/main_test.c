#include "unity.h"
#include "calc.h"

void test_add() {
    TEST_ASSERT_EQUAL(4, add(1, 2));
}
void setUp (void) {} /* Is run before every test, put unit init calls here. */
void tearDown (void) {} /* Is run after every test, put unit clean-up calls here. */
int main() {
    UNITY_BEGIN();

    RUN_TEST(test_add);

    return UNITY_END();
}
