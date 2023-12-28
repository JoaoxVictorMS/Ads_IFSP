using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Aula28_ReposicaoLogin
{
    public partial class FormLogin : Form
    {
        public static bool Cancelar = false;

        public FormLogin()
        {
            InitializeComponent();
        }

        private void btnEntrar_Click(object sender, EventArgs e)
        {
            string usuario = txtUsuario.Text;
            string senha = txtSenha.Text;

            if(CadastroUsuarios.Login(usuario, senha))
            {
                this.Close();
            } else
            {
                MessageBox.Show("Acesso negado!");
                txtUsuario.Text = "";
                txtSenha.Text = "";
                txtUsuario.Focus();
                this.Close();
            }
        }

        private void btnCancelar_Click(object sender, EventArgs e)
        {
            Cancelar = true;
            this.Close();
        }
    }
}
