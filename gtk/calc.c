#include<stdlib.h>
#include<stdio.h>
#include<gtk/gtk.h>

// Widget pointer
static GtkWidget *number1;
static GtkWidget *number2;
static GtkWidget *result;

void do_calculate(GtkWidget * calculate, gpointer data) 
{
    int num1 = atoi((char *)gtk_entry_get_text(GTK_ENTRY(number1)));
    int num2 = atoi((char *)gtk_entry_get_text(GTK_ENTRY(number2)));

    char buffer[32];
    snprintf(buffer, sizeof(buffer), "Result: %d", num1 + num2);
    gtk_label_set_text(GTK_LABEL(result), buffer);
}

int main(int argc, char **argv)
{
    GtkWidget *window, *grid, *calculate;
    gtk_init(&argc, &argv);

    // Create window and add callback
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Create grid and add to window
    grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window), grid);

    // Create input box and attach to grid
    number1 = gtk_entry_new();
    gtk_grid_attach(GTK_GRID(grid), number1, 0, 0, 1, 1);
    number2 = gtk_entry_new();
    gtk_grid_attach(GTK_GRID(grid), number2, 1, 0, 1, 1);

    // Add calculate box
    calculate = gtk_button_new_with_label("Calculate");
    g_signal_connect(calculate, "clicked", G_CALLBACK(do_calculate), NULL);
    gtk_grid_attach(GTK_GRID(grid), calculate, 0, 2, 1, 1);

    // Add result box
    result = gtk_label_new("Result:");
    gtk_grid_attach(GTK_GRID(grid), result, 1, 2, 1, 1);
    
    // Render window
    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}
