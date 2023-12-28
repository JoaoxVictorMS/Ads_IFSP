using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Aula34_Controles
{
    public partial class Form5 : Form
    {
        public Form5()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            for(int i=0; i<=100;  i++)
            {
                progress.Value = i;
                Thread.Sleep(10+(i*500));
                this.Text = progress.Value.ToString();
            }
        }
    }
}
