#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace WinUIComponentValidation;
using namespace Microsoft::UI::Xaml::Controls;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::CppApp::implementation
{

    MainWindow::MainWindow()
    {
        InitializeComponent();

        /*myStackPanel().Children().Append(customButton);
        myStackPanel().Children().Append(regularButton);*/
    }

    void MainWindow::acquireRegularButton_Click(IInspectable const& sender, RoutedEventArgs const& args)
    {
        regularButton = TestButtons::GetRegularButton();
    }

    void MainWindow::acquireCustomButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        customButton = TestButtons::GetCustomButton();
    }

    void MainWindow::ReleaseRegularButton()
    {
        regularButton = NULL;
    }

    void MainWindow::ReleaseCustomButton()
    {
        customButton = NULL;
    }

    void MainWindow::releaseRegularButton_Click(IInspectable const& sender, RoutedEventArgs const& args)
    {
        ReleaseRegularButton();
    }

    void MainWindow::releaseCustomButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        ReleaseCustomButton();
    }

    void MainWindow::isAliveRegularButton_Click(IInspectable const& sender, RoutedEventArgs const& args)
    {
        bool result = TestButtons::isAliveRegularButton();
        aliveRegularButton().Content(box_value(to_hstring(result)));
    }

    void MainWindow::isAliveCustomButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        bool result = TestButtons::isAliveCustomButton();
        aliveCustomButton().Content(box_value(to_hstring(result)));
    }

    /*void MainWindow::checkAliveReferences_Click(IInspectable const&, RoutedEventArgs const&)
    {
        hstring result = TestButtons::CheckIfReferencesAlive();
        checkAliveReferences().Content(box_value(result));
    }*/

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}

