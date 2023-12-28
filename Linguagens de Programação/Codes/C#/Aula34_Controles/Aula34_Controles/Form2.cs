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
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void Form2_Load(object sender, EventArgs e)
        {
            checklist.Items.Add("Carro",true);
            checklist.Items.Add("Avião");
            checklist.Items.Add("Bicicleta", false);

            checklist.Items.AddRange(new object[]
            {
                "Barco","Moto","Caminhão"
            });
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //if (checklist.Items.Contains("Moto"))
            //{
            //    MessageBox.Show("Existe moto");
            //}

            //checklist.Items.Remove("Moto");
            //checklist.Items.RemoveAt(1);

            var itens = checklist.CheckedItems;
            string res = "";
            foreach (var item in itens)
            {
                res+= item.ToString()+"\n";
            }
            MessageBox.Show(res);
        }
    }
}
