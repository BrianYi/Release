﻿/***********************************************************************
Vczh Library++ 3.0
Developer: Zihan Chen(vczh)
GacUI::MainWindow

This file is generated by: Vczh GacUI Resource Code Generator
***********************************************************************/

#include "Demo.h"

namespace demo
{
	// #region CLASS_MEMBER_GUIEVENT_HANDLER (DO NOT PUT OTHER CONTENT IN THIS #region.)

	void MainWindow::buttonCalculate_Clicked(GuiGraphicsComposition* sender, vl::presentation::compositions::GuiEventArgs& arguments)
	{
		bool successA = false;
		bool successB = false;
		auto a = wtoi_test(textBoxA->GetText(), successA);
		auto b = wtoi_test(textBoxB->GetText(), successB);
		auto c = (successA&&successB)
			? itow(a + b)
			: L"<ERROR>"
			;
		textBoxC->SetText(c);
	}

	void MainWindow::OnCreate()
	{
	}

	void MainWindow::OnDestroy()
	{
	}

	// #endregion CLASS_MEMBER_GUIEVENT_HANDLER

	MainWindow::MainWindow()
	{
		InitializeComponents();
		OnCreate();
	}

	MainWindow::~MainWindow()
	{
		OnDestroy();
		ClearSubscriptions();
	}
}
