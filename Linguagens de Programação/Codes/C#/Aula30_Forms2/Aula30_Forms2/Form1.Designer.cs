namespace Aula30_Forms2
{
    partial class Form1
    {
        /// <summary>
        /// Variável de designer necessária.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpar os recursos que estão sendo usados.
        /// </summary>
        /// <param name="disposing">true se for necessário descartar os recursos gerenciados; caso contrário, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código gerado pelo Windows Form Designer

        /// <summary>
        /// Método necessário para suporte ao Designer - não modifique 
        /// o conteúdo deste método com o editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            this.btnSegundoForm = new System.Windows.Forms.Button();
            this.btnSegundoFormThread = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btnSegundoForm
            // 
            this.btnSegundoForm.Location = new System.Drawing.Point(13, 13);
            this.btnSegundoForm.Name = "btnSegundoForm";
            this.btnSegundoForm.Size = new System.Drawing.Size(196, 34);
            this.btnSegundoForm.TabIndex = 0;
            this.btnSegundoForm.Text = "Abrir Segundo Form";
            this.btnSegundoForm.UseVisualStyleBackColor = true;
            this.btnSegundoForm.Click += new System.EventHandler(this.btnSegundoForm_Click);
            // 
            // btnSegundoFormThread
            // 
            this.btnSegundoFormThread.Location = new System.Drawing.Point(13, 53);
            this.btnSegundoFormThread.Name = "btnSegundoFormThread";
            this.btnSegundoFormThread.Size = new System.Drawing.Size(196, 34);
            this.btnSegundoFormThread.TabIndex = 1;
            this.btnSegundoFormThread.Text = "Abrir Segundo Form com Threads";
            this.btnSegundoFormThread.UseVisualStyleBackColor = true;
            this.btnSegundoFormThread.Click += new System.EventHandler(this.btnSegundoFormThread_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(331, 289);
            this.Controls.Add(this.btnSegundoFormThread);
            this.Controls.Add(this.btnSegundoForm);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btnSegundoForm;
        private System.Windows.Forms.Button btnSegundoFormThread;
    }
}

