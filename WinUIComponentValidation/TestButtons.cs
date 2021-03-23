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
        public static WeakReference weakRefCustomButton;
        public static WeakReference weakRefRegularButton;

        public static CustomButton GetCustomButton()
        {
            var customButton = new CustomButton();
            weakRefCustomButton = new WeakReference(customButton);
            return customButton;
        }

        public static Button GetRegularButton()
        {
            Button button = new Button
            {
                Content = "Button"
            };
            weakRefRegularButton = new WeakReference(button);
            return button;
        }

        public static string CheckIfReferencesAlive()
        {
            StringBuilder sb = new StringBuilder();
            if (weakRefRegularButton!=null && weakRefRegularButton.IsAlive) sb.Append("Regular Button alive; ");
            if (weakRefRegularButton!=null && weakRefCustomButton.IsAlive) sb.Append("Custom Button alive; ");
            return sb.ToString();
        }
    }
}
