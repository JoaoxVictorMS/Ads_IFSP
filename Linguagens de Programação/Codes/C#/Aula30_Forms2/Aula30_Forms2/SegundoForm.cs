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
    public partial class SegundoForm : Form
    {
        //Propriedade
        public string Mensagem {  get; set; }

        public SegundoForm()
        {
            InitializeComponent();
        }

        public SegundoForm(string mensagem)
        {
            InitializeComponent();
            this.Mensagem = mensagem;
        }

        private void SegundoForm_Load(object sender, EventArgs e)
        {
            label1.Text = Mensagem;
        }

        private void btnPrimeiroForm_Click(object sender, EventArgs e)
        {
            this.Close();
            Thread t = new Thread(() =>
            {
                Application.Run(new Form1("Mensagem para o primeiro form"));
            });
            t.Start();
        }
    }
}
