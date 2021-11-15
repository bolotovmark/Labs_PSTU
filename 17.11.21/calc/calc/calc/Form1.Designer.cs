namespace calc
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.plus_button = new System.Windows.Forms.Button();
            this.first_a = new System.Windows.Forms.TextBox();
            this.vvedite = new System.Windows.Forms.Label();
            this.second_b = new System.Windows.Forms.TextBox();
            this.first = new System.Windows.Forms.Label();
            this.second = new System.Windows.Forms.Label();
            this.minus_button = new System.Windows.Forms.Button();
            this.div_button = new System.Windows.Forms.Button();
            this.multiple_button = new System.Windows.Forms.Button();
            this.type = new System.Windows.Forms.Label();
            this.output_box = new System.Windows.Forms.TextBox();
            this.output = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // plus_button
            // 
            this.plus_button.Font = new System.Drawing.Font("Microsoft Sans Serif", 28.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.plus_button.ImageAlign = System.Drawing.ContentAlignment.TopCenter;
            this.plus_button.Location = new System.Drawing.Point(28, 231);
            this.plus_button.Name = "plus_button";
            this.plus_button.Size = new System.Drawing.Size(75, 71);
            this.plus_button.TabIndex = 0;
            this.plus_button.Text = "+";
            this.plus_button.UseVisualStyleBackColor = true;
            this.plus_button.Click += new System.EventHandler(this.button1_Click);
            // 
            // first_a
            // 
            this.first_a.Location = new System.Drawing.Point(130, 97);
            this.first_a.Name = "first_a";
            this.first_a.Size = new System.Drawing.Size(97, 22);
            this.first_a.TabIndex = 1;
            this.first_a.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // vvedite
            // 
            this.vvedite.AutoSize = true;
            this.vvedite.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.vvedite.Location = new System.Drawing.Point(21, 41);
            this.vvedite.Name = "vvedite";
            this.vvedite.Size = new System.Drawing.Size(292, 36);
            this.vvedite.TabIndex = 2;
            this.vvedite.Text = "Введите два числа";
            this.vvedite.Click += new System.EventHandler(this.label1_Click);
            // 
            // second_b
            // 
            this.second_b.Location = new System.Drawing.Point(130, 125);
            this.second_b.Name = "second_b";
            this.second_b.Size = new System.Drawing.Size(97, 22);
            this.second_b.TabIndex = 3;
            this.second_b.TextChanged += new System.EventHandler(this.textBox2_TextChanged);
            // 
            // first
            // 
            this.first.AutoSize = true;
            this.first.Location = new System.Drawing.Point(25, 97);
            this.first.Name = "first";
            this.first.Size = new System.Drawing.Size(99, 16);
            this.first.TabIndex = 4;
            this.first.Text = "Первое число";
            this.first.Click += new System.EventHandler(this.label2_Click_1);
            // 
            // second
            // 
            this.second.AutoSize = true;
            this.second.Location = new System.Drawing.Point(25, 131);
            this.second.Name = "second";
            this.second.Size = new System.Drawing.Size(97, 16);
            this.second.TabIndex = 5;
            this.second.Text = "Второе число";
            this.second.Click += new System.EventHandler(this.label3_Click);
            // 
            // minus_button
            // 
            this.minus_button.Font = new System.Drawing.Font("Microsoft Sans Serif", 28.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.minus_button.ImageAlign = System.Drawing.ContentAlignment.TopCenter;
            this.minus_button.Location = new System.Drawing.Point(109, 231);
            this.minus_button.Name = "minus_button";
            this.minus_button.Size = new System.Drawing.Size(75, 71);
            this.minus_button.TabIndex = 6;
            this.minus_button.Text = "-";
            this.minus_button.UseVisualStyleBackColor = true;
            this.minus_button.Click += new System.EventHandler(this.button2_Click);
            // 
            // div_button
            // 
            this.div_button.Font = new System.Drawing.Font("Microsoft Sans Serif", 28.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.div_button.ImageAlign = System.Drawing.ContentAlignment.TopCenter;
            this.div_button.Location = new System.Drawing.Point(109, 308);
            this.div_button.Name = "div_button";
            this.div_button.Size = new System.Drawing.Size(75, 71);
            this.div_button.TabIndex = 8;
            this.div_button.Text = "÷";
            this.div_button.UseVisualStyleBackColor = true;
            this.div_button.Click += new System.EventHandler(this.button3_Click);
            // 
            // multiple_button
            // 
            this.multiple_button.Font = new System.Drawing.Font("Microsoft Sans Serif", 28.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.multiple_button.ImageAlign = System.Drawing.ContentAlignment.TopCenter;
            this.multiple_button.Location = new System.Drawing.Point(28, 308);
            this.multiple_button.Name = "multiple_button";
            this.multiple_button.Size = new System.Drawing.Size(75, 71);
            this.multiple_button.TabIndex = 7;
            this.multiple_button.Text = "X";
            this.multiple_button.UseVisualStyleBackColor = true;
            this.multiple_button.Click += new System.EventHandler(this.button4_Click);
            // 
            // type
            // 
            this.type.AutoSize = true;
            this.type.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.type.Location = new System.Drawing.Point(21, 181);
            this.type.Name = "type";
            this.type.Size = new System.Drawing.Size(609, 36);
            this.type.TabIndex = 9;
            this.type.Text = "Выберите тип операции преобразования";
            this.type.Click += new System.EventHandler(this.label4_Click);
            // 
            // output_box
            // 
            this.output_box.Font = new System.Drawing.Font("Microsoft Sans Serif", 48F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.output_box.Location = new System.Drawing.Point(27, 438);
            this.output_box.Name = "output_box";
            this.output_box.Size = new System.Drawing.Size(362, 98);
            this.output_box.TabIndex = 10;
            this.output_box.TextChanged += new System.EventHandler(this.textBox3_TextChanged);
            // 
            // output
            // 
            this.output.AutoSize = true;
            this.output.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.output.Location = new System.Drawing.Point(22, 399);
            this.output.Name = "output";
            this.output.Size = new System.Drawing.Size(111, 36);
            this.output.TabIndex = 11;
            this.output.Text = "Вывод";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(879, 558);
            this.Controls.Add(this.output);
            this.Controls.Add(this.output_box);
            this.Controls.Add(this.type);
            this.Controls.Add(this.div_button);
            this.Controls.Add(this.multiple_button);
            this.Controls.Add(this.minus_button);
            this.Controls.Add(this.second);
            this.Controls.Add(this.first);
            this.Controls.Add(this.second_b);
            this.Controls.Add(this.vvedite);
            this.Controls.Add(this.first_a);
            this.Controls.Add(this.plus_button);
            this.Name = "Form1";
            this.Text = "Калькулятор";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button plus_button;
        private System.Windows.Forms.TextBox first_a;
        private System.Windows.Forms.Label vvedite;
        private System.Windows.Forms.TextBox second_b;
        private System.Windows.Forms.Label first;
        private System.Windows.Forms.Label second;
        private System.Windows.Forms.Button minus_button;
        private System.Windows.Forms.Button div_button;
        private System.Windows.Forms.Button multiple_button;
        private System.Windows.Forms.Label type;
        private System.Windows.Forms.TextBox output_box;
        private System.Windows.Forms.Label output;
    }
}

