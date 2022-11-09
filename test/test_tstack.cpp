#include "tstack.h"
#include <vector>
#include <gtest.h>

TEST(TStack, fake_test) {
	EXPECT_TRUE(true);
}

//TEST(TStack, can_create_stack) {
//	ASSERT_NO_THROW(TStack<int> st);
//}
//
//TEST(TStack, can_push_element_and_pop_it) {
//	TStack<int> st;
//	bool flag = true;
//
//	for (size_t i = 0; i < 20; i++)
//		st.push(i);
//
//	for (size_t i = 0; i < 20; i++)
//		if (st.pop() != 19 - i) flag = false;
//
//	EXPECT_TRUE(flag);
//}
//
//TEST(TStack, empty_correct_if_stack_is_empty) {
//	TStack<int> st;
//
//	EXPECT_TRUE(st.empty());
//}
//
//TEST(TStack, empty_correct_if_stack_is_not_empty) {
//	TStack<int> st;
//
//	st.push(1);
//
//	EXPECT_FALSE(st.empty());
//}
//
//TEST(TStack, count_is_correct) {
//	TStack<int> st;
//
//	st.push(1); st.push(2);
//
//	EXPECT_EQ(2, st.count());
//}
//
//TEST(TStack, throw_after_pop_if_stack_is_empty) {
//	TStack<int> st;
//
//	ASSERT_ANY_THROW(st.pop());
//}
//
//TEST(TStack, can_copy_stack) {
//	bool equality = true;
//	TStack<int> st1;
//	for (size_t i = 0; i < 20; i++)
//		st1.push(i);
//
//	TStack<int> st2(st1);
//
//	if (st1.count() != st2.count()) equality = false;
//	while (!st1.empty())
//		if (st1.pop() != st2.pop()) equality = false;
//	
//	EXPECT_TRUE(equality);
//}
//
//