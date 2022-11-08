#include "tstack.h"
#include <vector>
#include <gtest.h>

TEST(TStack, can_create_stack) {
	ASSERT_NO_THROW(TStack<int> st);
}


TEST(TStack, can_push_element_and_top_it) {
	TStack<int> st;

	st.push(1);
	st.push(2);

	EXPECT_EQ(2, st.top());
}

TEST(TStack, empty_is_working) {
	TStack<int> st;

	EXPECT_TRUE(2, st.empty());
}


TEST(TStack, can_pop_element) {
	TStack<int> st;

	st.push(1);
	st.push(2);
	st.pop();
	st.pop();

	EXPECT_TRUE(st.empty());
}

TEST(TStack, can_copy_stack) {
	TStack<int> st1;
	st1.push(1); st1.push(2);

	TStack<int> st2(st1);


}

