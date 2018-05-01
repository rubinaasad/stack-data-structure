// stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<stdio.h>

using namespace std;

struct DLL
{
	struct stack
	{
		int data;
		stack* next;
		
		stack()
		{
			data=0;
			next=0;
		}
	};
	typedef stack* stkptr;
	stkptr top;
	DLL()
	{
		top=0;
	}

	void push(int info)
	{
		stkptr ptr=new stack;
		ptr->data=info;
		ptr->next=top;
		top=ptr;
		cout<<"pushed " <<top->data <<endl;
	}

	bool isempty()
	{
		if(top==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}


	void pop()
	{
		int topdata;
		if(isempty())
		{
			return;
		}
		else
		{
			topdata=top->data;
			cout<<"popped " <<topdata <<endl;
			top=top->next;
			
		}
	}

	void readtop()
	{
		if(isempty())
		{
			return;
		}
		else
		{
			cout<<"top " <<top->data <<endl;
		}
	}
};



int _tmain(int argc, _TCHAR* argv[])
{
	DLL l1;
	l1.push(6);
	l1.push(7);
	l1.push(8);
	l1.readtop();
	l1.pop();
	l1.readtop();

	system("pause");

	return 0;
}

