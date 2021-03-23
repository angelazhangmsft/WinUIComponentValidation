using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.UI.Xaml.Controls;

namespace WinUIComponentValidation
{
    public static class TestButtons
    {
        public static CustomButton GetCustomButton()
        {
            return new CustomButton();
        }

        public static Button GetRegularButton()
        {
            Button button = new Button
            {
                Content = "Button"
            };
            return button;
        }
    }
}
