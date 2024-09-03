#pragma once

class CStack {
public://전체공개
	int stack_buff[256];
	int top;

	void push();

	void pop();

	void print_stack();

	void save_stack();

	void load_stack();
};