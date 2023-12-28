using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Reflection.Emit;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace OficinaIF
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            FormLogin f = new FormLogin();

            while (CadastroUsuarios.UsuarioLogado == null)
            {
                Visible = false; //this.Visible
                f.ShowDialog();

                if (FormLogin.Cancelar == true)
                {
                    Application.Exit();
                    return;
                }
            }

            this.Text = "Menu Principal - Logado";
            Visible = true;
        }
    }
}
