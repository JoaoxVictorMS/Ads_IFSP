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

namespace Aula30_Forms2
{
    public partial class Form1 : Form
    {
        //Propriedade
        public string Mensagem { get; set; }
        public Form1()
        {
            InitializeComponent();
        }

        public Form1(string mensagem)
        {
            InitializeComponent();
            this.Mensagem = mensagem;
        }

        private void btnSegundoForm_Click(object sender, EventArgs e)
        {
            this.Hide();
            SegundoForm f = new SegundoForm();
            //f.Show();
            f.ShowDialog();
            this.Show();
        }

        private void btnSegundoFormThread_Click(object sender, EventArgs e)
        {
            this.Close();
            Thread t = new Thread(() => Application.Run(new SegundoForm("Olá")));
            t.Start();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            this.Text = Mensagem;
        }
    }
}
