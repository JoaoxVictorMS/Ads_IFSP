using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Aula25_Cadastro2
{
    public partial class Form1 : Form
    {
        List<Pessoa> pessoas;
        public Form1()
        {
            InitializeComponent();
            pessoas = new List<Pessoa>();
            cmbEstadoCivil.Items.Add("Solteiro(a)");
            cmbEstadoCivil.Items.Add("Casado(a)");
            cmbEstadoCivil.Items.Add("Divorciado(a)");
            cmbEstadoCivil.Items.Add("Viúvo(a)");
            cmbEstadoCivil.SelectedIndex = 0;
        }

        private void btnCadastrar_Click(object sender, EventArgs e)
        {
            int index = -1;

            foreach(Pessoa pessoa in pessoas)
            {
                if(pessoa.Nome == txtNome.Text)
                {
                    index = pessoas.IndexOf(pessoa);
                } 
            }

            if (txtNome.Text == "")
            {
                MessageBox.Show("Preencha o campo nome!");
                txtNome.Focus();
                return;
            }

            if (txtTelefone.Text == "(  )      -")
            {
                MessageBox.Show("Preencha o campo telefone!");
                txtTelefone.Focus();
                return;
            }

            char sexo;

            if (radioFem.Checked)
            {
                sexo = 'F';
            } else if (radioMas.Checked)
            {
                sexo = 'M';
            } else
            {
                sexo = 'O';
            }

            Pessoa p = new Pessoa();
            p.Nome = txtNome.Text;
            p.DataNascimento = dtmData.Text;
            p.EstadoCivil = cmbEstadoCivil.SelectedItem.ToString();
            p.Telefone = txtTelefone.Text;
            p.CasaPropria = chkCasa.Checked;
            p.Veiculo = chkVeiculo.Checked;
            p.sexo = sexo;

            if (index == -1)
            {
                // Novo Cadastro
                pessoas.Add(p);
            } else
            {
                // Pessoa já cadastrada
                pessoas[index] = p;
            }

            // Limpar os campos
            btnLimpar_Click(btnLimpar, EventArgs.Empty);
            Listar();

        }

        private void btnExcluir_Click(object sender, EventArgs e)
        {
            if (lstLista.SelectedItem == null)
            {
                MessageBox.Show("Selecione um item para excluir!");
            } else
            {
                pessoas.RemoveAt(lstLista.SelectedIndex);
                MessageBox.Show("Usuário deletado com sucesso!");
            }
            btnLimpar_Click(btnLimpar, EventArgs.Empty);
            Listar();
        }

        private void btnLimpar_Click(object sender, EventArgs e)
        {
            txtNome.Text = "";
            dtmData.Text = "";
            cmbEstadoCivil.SelectedIndex = 0;
            txtTelefone.Text = "";
            chkCasa.Checked = false;
            chkVeiculo.Checked = false;
            radioFem.Checked = true;
            txtNome.Focus();
        }

        private void Listar()
        {
            // Primeiro, limpamos o listbox
            lstLista.Items.Clear();

            foreach(Pessoa pess in pessoas)
            {
                lstLista.Items.Add(pess.Nome);
            }
        }

        private void lstLista_MouseDoubleClick(object sender, MouseEventArgs e)
        {
            int indice = lstLista.SelectedIndex;
            Pessoa p = pessoas[indice];
            txtNome.Text = p.Nome;
            dtmData.Text = p.DataNascimento;
            cmbEstadoCivil.SelectedItem = p.EstadoCivil;
            txtTelefone.Text = p.Telefone;
            chkCasa.Checked = p.CasaPropria;
            chkVeiculo.Checked = p.Veiculo;

            switch(p.sexo)
            {
                case 'M':
                    radioMas.Checked = true;
                    break;
                case 'F':
                    radioFem.Checked = true;
                    break;
                default:
                    radioOut.Checked = true;
                    break;
            }
            txtNome.Focus();
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            switch(e.KeyCode)
            {
                case Keys.F10:
                    MessageBox.Show("aaa");
                    btnExcluir_Click(sender, e);
                    break;
                default:
                    break;
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
