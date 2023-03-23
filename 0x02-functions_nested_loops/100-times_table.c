void print_times_table(int n)
{
// Check if n is within the valid range
if (n < 0 || n > 15)
{
return;
}
// Print the times table
for (int i = 0; i <= n; i++)
{
for (int j = 0; j <= n; j++)
{
printf("%d\t", i*j);
}
printf("\n");
}
}
