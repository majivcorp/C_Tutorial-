/*
**
*/

int main(void)
{
  my_printf("%s %d  %c %x %X %u test\n", "test", 1, 'e', 42, 42, 12887238732);
  my_printf("%c%c%c%c%c!\n", 'H', 'e', 'l', 'l', 'o');
  my_printf("%d!\n", 1337);
  my_printf("%c!\n", 'H');
  return (0);
}

//Material sourced from https://jsommers.github.io/cbook/programstructure.html