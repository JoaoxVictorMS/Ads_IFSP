using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Aula34_Controles
{
    public partial class Form6 : Form
    {
        public Form6()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {

            browser.Navigate(txtUrl.Text);
        }

        private void btnVoltar_Click(object sender, EventArgs e)
        {
            browser.GoBack();
        }

        private void btnAvancar_Click(object sender, EventArgs e)
        {
            browser.GoForward();
        }
    }
}
