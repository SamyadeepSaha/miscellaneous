#include<gtk/gtk.h>

GtkWidget *txt;

int count = 0;

void end_program(GtkWidget *wid, gpointer ptr) {
    gtk_main_quit();
}

void count_button(GtkWidget *wid, gpointer ptr) {
    char buffer[30];
    count++;
    sprintf(buffer, "Button pressed %d times", count);
    gtk_label_set_text(GTK_LABEL(ptr), buffer);
}

void copy_text(GtkWidget *wid, gpointer ptr) {
    const char *input = gtk_entry_get_text(GTK_ENTRY(txt));
    gtk_label_set_text(GTK_LABEL(ptr), input);
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    // Create window and button
    GtkWidget *win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    GtkWidget *btn = gtk_button_new_with_label("Close");

    // Link handler function to button
    g_signal_connect(btn, "clicked", G_CALLBACK(end_program), NULL);
    
    // Link close handler function to window
    g_signal_connect(win, "delete_event", G_CALLBACK(end_program), NULL);

    // Add button inside window
    //gtk_container_add(GTK_CONTAINER(win), btn);

    // Create label
    GtkWidget *lbl = gtk_label_new("My label");

    // Create count button and lable
    GtkWidget *cnt_btn = gtk_button_new_with_label("Count Button");
    GtkWidget *cnt_lbl = gtk_label_new("Count");
    g_signal_connect(cnt_btn, "clicked", G_CALLBACK(count_button), cnt_lbl);

    // Create text input box copy button
    txt = gtk_entry_new();
    GtkWidget *cpy_btn = gtk_button_new_with_label("Copy Button");
    g_signal_connect(cpy_btn, "clicked", G_CALLBACK(copy_text), lbl);

#if 0
    // Create box
    GtkWidget *box = gtk_vbox_new(FALSE, 5);
    gtk_box_pack_start(GTK_BOX(box), lbl, FALSE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(box), btn, FALSE, TRUE, 0);
    // Add count widget to box
    gtk_box_pack_start(GTK_BOX(box), cnt_lbl, FALSE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(box), cnt_btn, FALSE, TRUE, 0);

    // Add box inside window
    gtk_container_add(GTK_CONTAINER(win), box);
#else
    // Create table
    GtkWidget *tbl = gtk_table_new(2, 2, TRUE);
    gtk_table_attach_defaults(GTK_TABLE(tbl), lbl, 0, 1, 0, 1);
    gtk_table_attach_defaults(GTK_TABLE(tbl), btn, 1, 2, 0, 1);
    gtk_table_attach_defaults(GTK_TABLE(tbl), cnt_lbl, 0, 1, 1, 2);
    gtk_table_attach_defaults(GTK_TABLE(tbl), cnt_btn, 1, 2, 1, 2);
    gtk_table_attach_defaults(GTK_TABLE(tbl), txt, 0, 1, 2, 3);
    gtk_table_attach_defaults(GTK_TABLE(tbl), cpy_btn, 1, 2, 2, 3);
    gtk_container_add(GTK_CONTAINER(win), tbl);
#endif

    gtk_widget_show_all(win);
    gtk_main();
    return 0;
}
