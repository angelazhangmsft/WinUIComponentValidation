#pragma once

#pragma push_macro("GetCurrentTime")
#undef GetCurrentTime

#include "MainWindow.g.h"

#pragma pop_macro("GetCurrentTime")

namespace winrt::CppApp::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();

        //WinUIComponentValidation::TestButtons testButtons;
        WinUIComponentValidation::CustomButton customButton;
        Microsoft::UI::Xaml::Controls::Button regularButton;

        void ReleaseRegularButton();
        void ReleaseCustomButton();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void acquireRegularButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
        void acquireCustomButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
        void releaseRegularButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
        void releaseCustomButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
        
        void isAliveRegularButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
        void isAliveCustomButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);

        /*void checkAliveReferences_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& e);*/
    };
}

namespace winrt::CppApp::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
