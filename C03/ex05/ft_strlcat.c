unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    unsigned int dest_len;
    unsigned int src_len;

    i = 0;
    while (dest[i] != '\0' && i < size)
        i++;
    dest_len = i;

    j = 0;
    while (src[j] != '\0')
        j++;
    src_len = j;

    if (dest_len == size)
        return (size + src_len);

    j = 0;
    while (src[j] != '\0' && (dest_len + j + 1) < size)
    {
        dest[dest_len + j] = src[j];
        j++;
    }
    if (dest_len < size)
        dest[dest_len + j] = '\0';

    return (dest_len + src_len);
}

