#include <gtk/gtk.h>

static void destroy( GtkWidget *window, gpointer data )
{
  gtk_main_quit ();
}

static int main(int argc, char *argv[])
{
  gtk_init (&argc, &argv);

  GtkWidget *window;
  GtkWidget *label;

  window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  g_signal_connect (window, "destroy", G_CALLBACK (destroy), NULL);

  label = gtk_label_new ("Hello World!");
  gtk_container_add (GTK_CONTAINER (window), label);

  gtk_widget_show_all (window);
  gtk_main ();

  return 0;
}

gcc hello.c -o hello `pkg-config --cflags --libs gtk+-3.0`
