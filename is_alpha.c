/**
 * is_alpha - check if character alpha
 * @c: char to check
 * Return: 1 if its alpha or 0 othrwise
 */
int is_alpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}
