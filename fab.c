int fab(int n) {

    int i, tmp_1 = 0, tmp_2 = 1, ret;

    if (0 >= n) return 0;
    if (1 == n) return 1;

    for (i = 2; i <= n; i++) {
        ret = tmp_1 + tmp_2;
        tmp_1 = tmp_2;
        tmp_2 = ret;
    }

    return ret;
}
