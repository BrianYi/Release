﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DEMOPARTIALCLASSES
#define VCZH_WORKFLOW_COMPILER_GENERATED_DEMOPARTIALCLASSES

#include "GacUI.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

namespace vl_workflow_global
{
	struct __vwsno1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
}

namespace demo
{
	class MainWindowConstructor;
	class MainWindow;

	class MainWindowConstructor : public ::vl::Object, public ::vl::reflection::Description<MainWindowConstructor>
	{
		friend struct ::vl_workflow_global::__vwsno1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindowConstructor>;
#endif
	protected:
		::vl::presentation::controls::GuiDocumentLabel* documentLabel = static_cast<::vl::presentation::controls::GuiDocumentLabel*>(nullptr);
		::demo::MainWindow* __vwsn_precompile_0 = static_cast<::demo::MainWindow*>(nullptr);
		::vl::presentation::controls::GuiTab* __vwsn_precompile_1 = static_cast<::vl::presentation::controls::GuiTab*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_2 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::controls::GuiTabPage* __vwsn_precompile_3 = static_cast<::vl::presentation::controls::GuiTabPage*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_4 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::Ptr<::vl::presentation::elements::GuiImageFrameElement> __vwsn_precompile_5 = ::vl::Ptr<::vl::presentation::elements::GuiImageFrameElement>();
		::vl::presentation::controls::GuiTabPage* __vwsn_precompile_6 = static_cast<::vl::presentation::controls::GuiTabPage*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_7 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_8 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		void __vwsn_initialize_instance_(::demo::MainWindow* __vwsn_this_);
	public:
		MainWindowConstructor();
	};

	class MainWindow : public ::vl::presentation::controls::GuiWindow, public ::demo::MainWindowConstructor, public ::vl::reflection::Description<MainWindow>
	{
		friend class ::demo::MainWindowConstructor;
		friend struct ::vl_workflow_global::__vwsno1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindow>;
#endif
	protected:
		void documentLabel_ActiveHyperlinkExecuted(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
	public:
		MainWindow();
		~MainWindow();
	};

}
/***********************************************************************
Global Variables and Functions
***********************************************************************/

namespace vl_workflow_global
{
	class Demo
	{
	public:

		static Demo& Instance();
	};

/***********************************************************************
Closures
***********************************************************************/

	struct __vwsno1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__
	{
		::demo::MainWindow* __vwsn_this_;
		::demo::MainWindowConstructor* __vwsnthis_0;

		__vwsno1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__(::demo::MainWindow* __vwsnctor___vwsn_this_, ::demo::MainWindowConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* __vwsno_1, ::vl::presentation::compositions::GuiEventArgs* __vwsno_2) const;
	};
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif
