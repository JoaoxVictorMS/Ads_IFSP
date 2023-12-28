using MySql.Data.MySqlClient;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace OficinaIF
{
    public partial class FormLogin : Form
    {
        public static bool Cancelar = false;
        public FormLogin()
        {
            InitializeComponent();
        }

        private void btnCancelar_Click(object sender, EventArgs e)
        {
            Cancelar = true;
            this.Close();
        }

        private void btnEntrar_Click(object sender, EventArgs e)
        {
            string usuario = txtUsuario.Text;
            string senha = txtSenha.Text;

            if (CadastroUsuarios.Login(usuario, senha))
            {
                this.Close();
                
            }
            else
            {
                MessageBox.Show("Acesso negado!");
                txtUsuario.Text = "";
                txtSenha.Text = "";
                txtUsuario.Focus();
                this.Close();
            }

            
        }

        private void FormLogin_Load(object sender, EventArgs e)
        {
            
        }

        private void FormLogin_Shown(object sender, EventArgs e)
        {
            string strConn = "server=localhost;User Id=root;database=aula28;password=";
            MySqlConnection conexao = new MySqlConnection(strConn);
            try
            {
                conexao.Open();
                lblResultado.Text = "Conectado";
            }
            catch (Exception ex)
            {
                lblResultado.Text = "Não Conectado";
            }
        }

        private void txtUsuario_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
