﻿/***********************************************************************
Vczh Library++ 3.0
Developer: Zihan Chen(vczh)
GacUI::Partial Classes

This file is generated by: Vczh GacUI Resource Code Generator
************************************************************************
DO NOT MODIFY
***********************************************************************/

#include "Demo.h"

namespace demo
{
	// #region CLASS_MEMBER_GUIEVENT_HANDLER (DO NOT PUT OTHER CONTENT IN THIS #region.)

	void FindWindow::OnCreate()
	{
	}

	void FindWindow::OnDestroy()
	{
	}

	// #endregion CLASS_MEMBER_GUIEVENT_HANDLER

	FindWindow::FindWindow(Ptr<vm::IFindWindowViewModel> ViewModel)
	{
		InitializeComponents(ViewModel);
		OnCreate();
	}

	FindWindow::~FindWindow()
	{
		OnDestroy();
		ClearSubscriptions();
	}
}


namespace vl
{
	namespace reflection
	{
		namespace description
		{
			#define _ ,
			IMPL_CPP_TYPE_INFO(vm::IFindWindowViewModel)
			IMPL_CPP_TYPE_INFO(demo::AboutWindow)
			IMPL_CPP_TYPE_INFO(demo::FindWindow)
			IMPL_CPP_TYPE_INFO(demo::MainWindow)

			BEGIN_CLASS_MEMBER(vm::IFindWindowViewModel)
				CLASS_MEMBER_BASE(vl::reflection::IDescriptable)
				CLASS_MEMBER_METHOD(FindNext, { L"toFind" _ L"caseSensitive" _ L"down" });
			END_CLASS_MEMBER(vm::IFindWindowViewModel)

			BEGIN_CLASS_MEMBER(demo::AboutWindow)
				CLASS_MEMBER_BASE(vl::presentation::controls::GuiWindow)
				CLASS_MEMBER_CONSTRUCTOR(demo::AboutWindow*(), NO_PARAMETER)

				CLASS_MEMBER_GUIEVENT_HANDLER(documentLabel_ActiveHyperlinkExecuted, vl::presentation::compositions::GuiEventArgs)
			END_CLASS_MEMBER(demo::AboutWindow)

			BEGIN_CLASS_MEMBER(demo::FindWindow)
				CLASS_MEMBER_BASE(vl::presentation::controls::GuiWindow)
				CLASS_MEMBER_CONSTRUCTOR(demo::FindWindow*(Ptr<vm::IFindWindowViewModel>), { L"ViewModel" })

				CLASS_MEMBER_PROPERTY_READONLY_FAST(ViewModel)
			END_CLASS_MEMBER(demo::FindWindow)

			BEGIN_CLASS_MEMBER(demo::MainWindow)
				CLASS_MEMBER_BASE(vl::presentation::controls::GuiWindow)
				CLASS_MEMBER_CONSTRUCTOR(demo::MainWindow*(), NO_PARAMETER)

				CLASS_MEMBER_GUIEVENT_HANDLER(commandAbout_Executed, vl::presentation::compositions::GuiEventArgs)
				CLASS_MEMBER_GUIEVENT_HANDLER(commandEditCopy_Executed, vl::presentation::compositions::GuiEventArgs)
				CLASS_MEMBER_GUIEVENT_HANDLER(commandEditCut_Executed, vl::presentation::compositions::GuiEventArgs)
				CLASS_MEMBER_GUIEVENT_HANDLER(commandEditDelete_Executed, vl::presentation::compositions::GuiEventArgs)
				CLASS_MEMBER_GUIEVENT_HANDLER(commandEditFind_Executed, vl::presentation::compositions::GuiEventArgs)
				CLASS_MEMBER_GUIEVENT_HANDLER(commandEditPaste_Executed, vl::presentation::compositions::GuiEventArgs)
				CLASS_MEMBER_GUIEVENT_HANDLER(commandEditRedo_Executed, vl::presentation::compositions::GuiEventArgs)
				CLASS_MEMBER_GUIEVENT_HANDLER(commandEditSelect_Executed, vl::presentation::compositions::GuiEventArgs)
				CLASS_MEMBER_GUIEVENT_HANDLER(commandEditUndo_Executed, vl::presentation::compositions::GuiEventArgs)
				CLASS_MEMBER_GUIEVENT_HANDLER(commandFileExit_Executed, vl::presentation::compositions::GuiEventArgs)
				CLASS_MEMBER_GUIEVENT_HANDLER(commandFileNewText_Executed, vl::presentation::compositions::GuiEventArgs)
				CLASS_MEMBER_GUIEVENT_HANDLER(commandFileNewXml_Executed, vl::presentation::compositions::GuiEventArgs)
				CLASS_MEMBER_GUIEVENT_HANDLER(commandFileOpenText_Executed, vl::presentation::compositions::GuiEventArgs)
				CLASS_MEMBER_GUIEVENT_HANDLER(commandFileOpenXml_Executed, vl::presentation::compositions::GuiEventArgs)
				CLASS_MEMBER_GUIEVENT_HANDLER(commandFileOpen_Executed, vl::presentation::compositions::GuiEventArgs)
				CLASS_MEMBER_GUIEVENT_HANDLER(commandFileSaveAs_Executed, vl::presentation::compositions::GuiEventArgs)
				CLASS_MEMBER_GUIEVENT_HANDLER(commandFileSave_Executed, vl::presentation::compositions::GuiEventArgs)
				CLASS_MEMBER_GUIEVENT_HANDLER(window_Closing, vl::presentation::compositions::GuiRequestEventArgs)
			END_CLASS_MEMBER(demo::MainWindow)

			#undef _

			class DemoResourceLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(vm::IFindWindowViewModel)
					ADD_TYPE_INFO(demo::AboutWindow)
					ADD_TYPE_INFO(demo::FindWindow)
					ADD_TYPE_INFO(demo::MainWindow)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};

			class DemoResourcePlugin : public Object, public vl::presentation::controls::IGuiPlugin
			{
			public:
				void Load()override
				{
					GetGlobalTypeManager()->AddTypeLoader(new DemoResourceLoader);
				}

				void AfterLoad()override
				{
				}

				void Unload()override
				{
				}
			};
			GUI_REGISTER_PLUGIN(DemoResourcePlugin)
		}
	}
}

