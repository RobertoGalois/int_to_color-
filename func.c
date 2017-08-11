unsigned short*     int_to_color(unsigned short p_r, unsigned short p_g, unsigned short p_b)
{
                    unsigned short* ret_tab;

                    ret_tab = malloc(3 * sizeof(unsigned short));
                    *(ret_tab) = p_r;
                    *(ret_tab+1) = p_g;
                    *(ret_tab+2) = p_b;
                    return (ret_tab);
}
