#include<gtk/gtk.h>

static void activate(GtkApplication *app, gpointer user_data)
{
    // Create gtk window, buttons and fixed container
    GtkWidget *window;
    GtkWidget *button1;
    GtkWidget *button2;
    GtkWidget *fixed;
    window = gtk_application_window_new(app);
    button1 = gtk_button_new_with_label("Button 1");
    button2 = gtk_button_new_with_label("Button 2");
    fixed = gtk_fixed_new();

    // Set window size and position
    //gtk_window_set_default_size(GTK_WINDOW(window), 600, 400);
    //gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);

    // Set window title
    gtk_window_set_title(GTK_WINDOW(window), "Library");

    // Put buttons in fixed container
    gtk_fixed_put(GTK_FIXED(fixed), button1, 100, 50);
    gtk_fixed_put(GTK_FIXED(fixed), button2, 200, 50);

    // Add button to window
    gtk_container_add(GTK_CONTAINER(window), fixed);

    // Render gtk window
    gtk_widget_show_all(window);
}

int main(int argc, char *argv[])
{
    GtkApplication *app;
    int ret;

    app = gtk_application_new("dist.library", G_APPLICATION_DEFAULT_FLAGS);

    g_signal_connect(G_APPLICATION(app), "activate", G_CALLBACK(activate), NULL);

    ret = g_application_run(G_APPLICATION(app), argc, argv);

    return ret;
}
