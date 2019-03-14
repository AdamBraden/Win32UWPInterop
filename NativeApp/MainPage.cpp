#include "pch.h"
#include "MainPage.h"
// #include "ManagedWinMD.h"
// #include "Generated Files/winrt/ManagedWinMD.h"

using namespace winrt;
using namespace Windows::UI::Xaml;


namespace winrt::NativeApp::implementation
{
    MainPage::MainPage()
    {
		//Initialize Managed CLR
		// HRESULT hr = WINRT_RoInitialize(NULL);
        InitializeComponent();
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
	/*	ManagedWinMD::Class1 c1;
		int x = c1.ReturnPlusOne(5);
    */    
	   myButton().Content(box_value(L"Clicked"));
    }
	void MainPage::MyOtherButton_Click(IInspectable const& sender, RoutedEventArgs const& e)
	{
		//UnInitialize CLR
		// WINRT_RoUninitialize();
	}

}


