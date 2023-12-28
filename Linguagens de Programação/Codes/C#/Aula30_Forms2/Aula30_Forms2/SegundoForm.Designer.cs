namespace Aula30_Forms2
{
    partial class SegundoForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.btnPrimeiroForm = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // btnPrimeiroForm
            // 
            this.btnPrimeiroForm.Location = new System.Drawing.Point(13, 13);
            this.btnPrimeiroForm.Name = "btnPrimeiroForm";
            this.btnPrimeiroForm.Size = new System.Drawing.Size(182, 41);
            this.btnPrimeiroForm.TabIndex = 0;
            this.btnPrimeiroForm.Text = "Voltar ao Primeiro Form Thread";
            this.btnPrimeiroForm.UseVisualStyleBackColor = true;
            this.btnPrimeiroForm.Click += new System.EventHandler(this.btnPrimeiroForm_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(13, 75);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(35, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "label1";
            // 
            // SegundoForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.MenuHighlight;
            this.ClientSize = new System.Drawing.Size(367, 312);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.btnPrimeiroForm);
            this.Name = "SegundoForm";
            this.Text = "SegundoForm";
            this.Load += new System.EventHandler(this.SegundoForm_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnPrimeiroForm;
        private System.Windows.Forms.Label label1;
    }
}