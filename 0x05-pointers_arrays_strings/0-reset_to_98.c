int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n); // Pass the address of 'n' to the function
    printf("n=%d\n", n); // 'n' should now be 98
    return (0);
}
