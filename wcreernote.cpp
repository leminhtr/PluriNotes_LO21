#include"wcreernote.h"
#include"wcreerarticle.h"

WindowCreerNote::WindowCreerNote(QWidget *parent): QWidget(parent) {

    setFixedSize(300, 350);
    // vertical window
    V_window=new QVBoxLayout;

    //horizontal layout for form
    H_id=new QHBoxLayout;
    H_title=new QHBoxLayout;
    H_type_note=new QHBoxLayout;

    // label for form
    lbl_id= new QLabel("id");
    lbl_title= new QLabel("Titre");
    lbl_type_note= new QLabel("Type");

    // form
    id=new QLineEdit;
    title=new QLineEdit;
    type_note=new QComboBox;

    type_note->addItem("Article");
    type_note->addItem("Tache");
    type_note->addItem("Image");
    type_note->addItem("Audio");
    type_note->addItem("Video");

    H_buttons= new QHBoxLayout;

    valider = new QPushButton("Valider");

    annuler = new QPushButton("Fermer");
    connect(annuler, SIGNAL(clicked(bool)), this, SLOT(close()));

    //horizontal widget id
    H_id->addWidget(lbl_id);
    H_id->addWidget(id);

    //horizontal widget title
    H_title->addWidget(lbl_title);
    H_title->addWidget(title);

    //horizontal widget type_note
    H_type_note->addWidget(lbl_type_note);
    H_type_note->addWidget(type_note);

    //horizontal widget buttons valider/annuler
    H_buttons->addWidget(valider);
    H_buttons->addWidget(annuler);

    //Final vertical window layout
    V_window->addLayout(H_id);
    V_window->addLayout(H_title);
    V_window->addLayout(H_type_note);
    V_window->addLayout(H_buttons);

    this->setLayout(V_window);
}


