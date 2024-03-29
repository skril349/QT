#include "infodialog.h"
#include "ui_infodialog.h"

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::on_okButton_clicked()
{
    QString user_position = ui->positionLineEdit->text();
    if(!user_position.isEmpty()){
        m_position = user_position;
        if(ui->windowsButton->isChecked()){
            m_favorite_os = "Windows";
        }
        if(ui->macButton->isChecked()){
            m_favorite_os = "Mac";

        }
        if(ui->linuxButton->isChecked()){
            m_favorite_os = "Linux";

        }
        //Accept
        accept();
    }else{
        reject();
    }

}


void InfoDialog::on_cancelButton_clicked()
{
    reject();
}

const QString &InfoDialog::position() const
{
    return m_position;
}

const QString &InfoDialog::favorite_os() const
{
    return m_favorite_os;
}

