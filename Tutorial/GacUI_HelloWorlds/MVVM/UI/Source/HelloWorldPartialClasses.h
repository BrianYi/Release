﻿/***********************************************************************
Vczh Library++ 3.0
Developer: Zihan Chen(vczh)
GacUI::Partial Classes

This file is generated by: Vczh GacUI Resource Code Generator
************************************************************************
DO NOT MODIFY
***********************************************************************/

#ifndef VCZH_GACUI_RESOURCE_CODE_GENERATOR_HelloWorld_PARTIAL_CLASSES
#define VCZH_GACUI_RESOURCE_CODE_GENERATOR_HelloWorld_PARTIAL_CLASSES

#include "GacUIReflection.h"

namespace vm
{
	class IViewModel;
}
namespace helloworld
{
	class MainWindow;

}
namespace vm
{
	class IViewModel : public virtual vl::reflection::IDescriptable, public vl::reflection::Description<IViewModel>
	{
	public:
		virtual vl::WString GetUserName() = 0;
		virtual void SetUserName(vl::WString value) = 0;
		virtual vl::WString GetPassword() = 0;
		virtual void SetPassword(vl::WString value) = 0;
		virtual vl::WString GetUserNameError() = 0;
		vl::Event<void()> UserNameErrorChanged;
		virtual vl::WString GetPasswordError() = 0;
		vl::Event<void()> PasswordErrorChanged;
		virtual bool SignUp() = 0;
	};

}
namespace helloworld
{
	template<typename TImpl>
	class MainWindow_ : public vl::presentation::controls::GuiWindow, public vl::presentation::GuiInstancePartialClass<vl::presentation::controls::GuiWindow>, public vl::reflection::Description<TImpl>
	{
		friend struct vl::reflection::description::CustomTypeDescriptorSelector<TImpl>;
	private:
		Ptr<vm::IViewModel> ViewModel_;
		bool HasLoggedIn_;
	protected:
		vl::presentation::controls::GuiButton* buttonCancel;
		vl::presentation::controls::GuiButton* buttonSignUp;
		vl::presentation::controls::GuiWindow* self;
		vl::presentation::controls::GuiSinglelineTextBox* textBoxPassword;
		vl::presentation::controls::GuiSinglelineTextBox* textBoxUserName;

		void InitializeComponents(Ptr<vm::IViewModel> ViewModel)
		{
			ViewModel_ = ViewModel;
			if (InitializeFromResource())
			{
				GUI_INSTANCE_REFERENCE(buttonCancel);
				GUI_INSTANCE_REFERENCE(buttonSignUp);
				GUI_INSTANCE_REFERENCE(self);
				GUI_INSTANCE_REFERENCE(textBoxPassword);
				GUI_INSTANCE_REFERENCE(textBoxUserName);
			}
			else
			{
				ViewModel_ = 0;
			}
		}
	public:
		MainWindow_()
			:vl::presentation::GuiInstancePartialClass<vl::presentation::controls::GuiWindow>(L"helloworld::MainWindow")
			,vl::presentation::controls::GuiWindow(vl::presentation::theme::GetCurrentTheme()->CreateWindowStyle())
			,buttonCancel(0)
			,buttonSignUp(0)
			,self(0)
			,textBoxPassword(0)
			,textBoxUserName(0)
		{
			this->HasLoggedIn_ = vl::reflection::description::UnboxValue<bool>(vl::reflection::description::Value::From(L"false", reflection::description::GetTypeDescriptor<bool>()));
		}

		Ptr<vm::IViewModel> GetViewModel()
		{
			return ViewModel_;
		}

		vl::Event<void()> HasLoggedInChanged;

		bool GetHasLoggedIn()
		{
			return HasLoggedIn_;
		}

		void SetHasLoggedIn(bool value)
		{
			HasLoggedIn_ = value;
			HasLoggedInChanged();
		}
	};

}
namespace vl
{
	namespace reflection
	{
		namespace description
		{
			DECL_TYPE_INFO(vm::IViewModel)
			DECL_TYPE_INFO(helloworld::MainWindow)

		}
	}
}

#endif
