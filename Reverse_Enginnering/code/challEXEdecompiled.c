int64_t** sub_140001000(int64_t* arg1, int64_t* arg2)
{
    int64_t rax = *arg1;
    int64_t r8 = *arg2;
    
    while (true)
    {
        *arg1 = r8;
        *arg2 = rax;
        
        if (data_14000dd00 < 0xa)
            break;
        
        int32_t r8_1 = data_14000dd04;
        
        if (!((~r8_1 * r8_1) & 1))
            break;
        
        r8 = *arg1;
        *arg1 = rax;
        *arg2 = r8;
        rax = *arg1;
    }
    
    int64_t** rax_1 = *arg1;
    
    if (rax_1)
    {
        while (true)
        {
            *rax_1 = arg1;
            
            if (data_14000dd00 < 0xa)
                break;
            
            int32_t rax_2 = data_14000dd04;
            
            if (!((~rax_2 * rax_2) & 1))
                break;
            
            **arg1 = arg1;
            rax_1 = *arg1;
        }
    }
    
    int64_t** result = *arg2;
    
    if (result)
    {
        while (true)
        {
            *result = arg2;
            
            if (data_14000dd00 < 0xa)
                break;
            
            result = data_14000dd04;
            
            if (!((~result * result) & 1))
                break;
            
            **arg2 = arg2;
            result = *arg2;
        }
    }
    
    return result;
}

int32_t* sub_1400010c0(int64_t arg1, int32_t* arg2, int32_t arg3)
{
    *arg2 = arg3;
    *(arg2 + 8) = arg1;
    return arg2;
}

int64_t sub_1400010d0(int32_t arg1, int32_t arg2) __pure
{
    int64_t result;
    result = arg1 == arg2;
    return result;
}

int64_t sub_1400010e0(int32_t arg1, int32_t arg2) __pure
{
    int64_t result;
    result = arg1 < arg2;
    return result;
}

void* sub_1400010f0(void* arg1, int512_t arg2 @ zmm0)
{
    int64_t var_20 = -2;
    
    while (true)
    {
        (data_14000d0e8 - 0x47293460c1b35c8d)(arg1);
        
        if (data_14000dd08 >= 0xa)
        {
            int32_t rax_3 = data_14000dd0c;
            
            if ((~rax_3 * rax_3) & 1)
            {
                (data_14000d0e8 - 0x47293460c1b35c8d)(arg1);
                continue;
            }
        }
        
        *(arg1 + 0x20) = 0x5f5e100;
        *(arg1 + 0x28) = 0xf42400;
        int32_t rax_6;
        
        if (data_14000dd10 >= 0xa)
            rax_6 = data_14000dd14;
        
        if (data_14000dd10 < 0xa || !((~rax_6 * rax_6) & 1))
        {
            sub_140001230(arg1, arg2);
            return arg1;
        }
        
        while (true)
        {
            (data_14000d0e8 - 0x47293460c1b35c8d)(arg1);
            
            if (data_14000dd08 < 0xa)
                break;
            
            int32_t rax_9 = data_14000dd0c;
            
            if (!((~rax_9 * rax_9) & 1))
                break;
            
            (data_14000d0e8 - 0x47293460c1b35c8d)(arg1);
        }
        
        *(arg1 + 0x20) = 0x5f5e100;
        *(arg1 + 0x28) = 0xf42400;
    }
}

int64_t sub_140001200(int64_t arg1, void* arg2)
{
    void* arg_10 = arg2;
    return (-0x47293460c1b35c8d + data_14000d0f0)(*(arg2 + 0x20));
}

void* sub_140001230(int64_t arg1, int512_t arg2 @ zmm0)
{
    void* result_1;
    int64_t* rsp = &result_1;
    int64_t var_30 = -2;
    
    while (true)
    {
        __chkstk(0x10);
        __chkstk(0x10);
        *(rsp - 0x20) = arg1;
        void* rax_2 = data_14000d0f8 + 0x301adc720e1edec8;
        void* rsp_3 = rsp - 0x40;
        
        while (true)
        {
            rax_2(arg2, rsp - 0x20);
            
            if (data_14000dd18 < 0xa)
                break;
            
            int32_t rax_3 = data_14000dd1c;
            
            if (!((~rax_3 * rax_3) & 1))
                break;
            
            (data_14000d0f8 + 0x301adc720e1edec8)(rsp - 0x10, rsp - 0x20);
            rax_2 = data_14000d0f8 + 0x301adc720e1edec8;
        }
        
        if (data_14000dd20 < 0xa)
            break;
        
        int32_t rax_7 = data_14000dd24;
        
        if (!((~rax_7 * rax_7) & 1))
            break;
        
        __chkstk(0x10);
        __chkstk(0x10);
        *rsp_3 = arg1;
        (data_14000d0f8 + 0x301adc720e1edec8)(rsp_3 + 0x10, rsp_3);
        rsp = rsp_3;
        
        if (data_14000dd18 >= 0xa)
        {
            int32_t rax_10 = data_14000dd1c;
            
            if ((~rax_10 * rax_10) & 1)
            {
                int32_t rax_15;
                
                do
                {
                    (data_14000d0f8 + 0x301adc720e1edec8)(rsp_3 + 0x10, rsp_3);
                    (data_14000d0f8 + 0x301adc720e1edec8)(rsp_3 + 0x10, rsp_3);
                    rax_15 = data_14000dd1c;
                    
                    if (data_14000dd18 < 0xa)
                        break;
                } while ((~rax_15 * rax_15) & 1);
            }
        }
    }
    
    result_1 = rsp - 0x10;
    sub_1400016b0(rsp - 0x10, rsp - 0x10);
    void* result = result_1;
    
    if (!*(result + 8))
        return result;
    
    (0x301adc720e1edec8 + data_14000d100)();
    breakpoint();
}

void* sub_140001430(int64_t arg1, void* arg2)
{
    void* arg_10 = arg2;
    void* result = *arg2;
    
    if (!*(result + 8))
        return result;
    
    (0x301adc720e1edec8 + data_14000d100)();
    breakpoint();
}

int64_t sub_140001470(int64_t arg1)
{
    void* rax_1 = data_14000d108 - 0x61b586249f7587a9;
    
    while (true)
    {
        int32_t result = rax_1();
        
        if (data_14000dd28 >= 0xa)
            result = data_14000dd2c;
        
        if (data_14000dd28 < 0xa || !((~result * result) & 1))
            return result;
        
        (data_14000d108 - 0x61b586249f7587a9)(arg1);
        rax_1 = data_14000d108 - 0x61b586249f7587a9;
    }
}

int64_t sub_1400014e0(void* arg1, int64_t arg2, int512_t arg3 @ zmm1)
{
    int64_t var_20 = -2;
    sub_140005f00(arg1, arg2, arg3);
    
    while (data_14000dd30 >= 0xa)
    {
        int32_t rax_1 = data_14000dd34;
        
        if (!((~rax_1 * rax_1) & 1))
            break;
        
        sub_140005f00(arg1, arg2, arg3);
        sub_140005f00(arg1, arg2, arg3);
    }
    
    while (true)
    {
        int32_t result = (data_14000d110 + 0x652d69a6310da2d1)(arg2);
        
        if (data_14000dd38 >= 0xa)
            result = data_14000dd3c;
        
        if (data_14000dd38 < 0xa || !((~result * result) & 1))
            return result;
        
        (data_14000d110 + 0x652d69a6310da2d1)(arg2);
    }
}

int64_t sub_1400015b0(int64_t arg1, void* arg2)
{
    void* arg_10 = arg2;
    return (0x652d69a6310da2d1 + data_14000d110)(*(arg2 + 0x20));
}

int64_t sub_1400015e0(void* arg1)
{
    int64_t rbx;
    int64_t var_10 = rbx;
    int32_t result = data_14000dd40;
    int32_t rdx = data_14000dd44;
    int64_t* rcx = *(arg1 + 0x38);
    
    do
    {
        if (rcx)
        {
            int64_t rax = *rcx;
            
            while (true)
            {
                (*(rax + 0x20))();
                *(arg1 + 0x38) = 0;
                
                if (data_14000dd48 < 0xa)
                    break;
                
                int32_t rax_1 = data_14000dd4c;
                
                if (!((~rax_1 * rax_1) & 1))
                    break;
                
                rbx = arg1;
                (*(*0 + 0x20))(0, rbx);
                *(arg1 + 0x38) = 0;
                rax = *0;
            }
            
            result = data_14000dd40;
            rdx = data_14000dd44;
        }
        
        if (rdx < 0xa)
            break;
        
        rcx = nullptr;
    } while ((~result * result) & 1);
    
    return result;
}

int64_t sub_1400016b0(int128_t* arg1, int64_t arg2 @ rbx)
{
    int64_t var_18 = arg2;
    void var_68;
    int64_t rax_1 = __security_cookie ^ &var_68;
    
    if (!*(arg1 + 8))
        (0x11c49c74529bbf7e + data_14000d120)(1);
    else
    {
        int128_t var_38 = *arg1;
        arg2 = 0x11c49c74529bbf7e;
        int32_t rax_4 = (data_14000d118 + 0x11c49c74529bbf7e)(&var_38);
        
        if (data_14000dd50 >= 0xa)
        {
            int32_t rcx_1 = data_14000dd54;
            
            if ((~rcx_1 * rcx_1) & 1)
            {
                int32_t rcx_4;
                
                do
                {
                    var_38 = *arg1;
                    (data_14000d118 + 0x11c49c74529bbf7e)(&var_38);
                    var_38 = *arg1;
                    rax_4 = (data_14000d118 + 0x11c49c74529bbf7e)(&var_38);
                    
                    if (data_14000dd50 < 0xa)
                        break;
                    
                    rcx_4 = data_14000dd54;
                } while ((~rcx_4 * rcx_4) & 1);
            }
        }
        
        if (!rax_4)
        {
            int32_t result;
            
            do
            {
                int32_t var_40_1 = 0;
                *arg1 = 0;
                *(arg1 + 8) = var_40_1;
                int32_t result_1;
                result = result_1;
                *(arg1 + 0xc) = result;
                
                if (data_14000dd50 < 0xa)
                    break;
                
                result = data_14000dd54;
            } while ((~result * result) & 1);
            
            __security_check_cookie(rax_1 ^ &var_68);
            return result;
        }
    }
    
    (arg2 + data_14000d120)(1);
    breakpoint();
}

int64_t sub_140001800()
{
    if (data_14000dd58 >= 0xa)
    {
        int32_t rax_1 = data_14000dd5c;
        
        if ((~rax_1 * rax_1) & 1)
        {
            while (true)
                /* nop */
        }
    }
    
    (data_14000d128 - 0x1a3f44bf91fff604)(&data_14000d6e0);
    int32_t result = (data_14000d130 - 0x1a3f44bf91fff604)(sub_1400019f0);
    
    if (data_14000dd58 >= 0xa)
    {
        result = data_14000dd5c;
        
        while ((~result * result) & 1)
        {
            (data_14000d128 - 0x1a3f44bf91fff604)(&data_14000d6e0);
            (data_14000d130 - 0x1a3f44bf91fff604)(sub_1400019f0);
            (data_14000d128 - 0x1a3f44bf91fff604)(&data_14000d6e0);
            result = (data_14000d130 - 0x1a3f44bf91fff604)(sub_1400019f0);
            
            if (data_14000dd58 < 0xa)
                break;
            
            result = data_14000dd5c;
        }
    }
    
    return result;
}

int64_t sub_1400018f0(int64_t arg1)
{
    int32_t result;
    
    while (true)
    {
        result = (data_14000d138 + 0x38ac342d9941d660)(arg1);
        
        if (data_14000dd28 >= 0xa)
        {
            result = data_14000dd2c;
            
            if ((~result * result) & 1)
            {
                (data_14000d138 + 0x38ac342d9941d660)(arg1);
                continue;
            }
        }
        
        if (data_14000dd60 < 0xa)
            break;
        
        result = data_14000dd64;
        
        if (!((~result * result) & 1))
            break;
        
        (data_14000d138 + 0x38ac342d9941d660)(arg1);
        
        if (data_14000dd28 >= 0xa)
        {
            int32_t rax_7 = data_14000dd2c;
            
            if ((~rax_7 * rax_7) & 1)
            {
                int32_t rax_12;
                
                do
                {
                    (data_14000d138 + 0x38ac342d9941d660)(arg1);
                    (data_14000d138 + 0x38ac342d9941d660)(arg1);
                    rax_12 = data_14000dd2c;
                    
                    if (data_14000dd28 < 0xa)
                        break;
                } while ((~rax_12 * rax_12) & 1);
            }
        }
    }
    
    return result;
}

int64_t sub_1400019f0()
{
    if (data_14000dd68 >= 0xa)
    {
        int32_t rax_1 = data_14000dd6c;
        
        if ((~rax_1 * rax_1) & 1)
        {
            while (true)
                /* nop */
        }
    }
    
    int32_t result = (data_14000d140 - 0x6cd9508e89dcf6b0)(&data_14000d6e0);
    
    if (data_14000dd68 >= 0xa)
    {
        result = data_14000dd6c;
        
        while ((~result * result) & 1)
        {
            (data_14000d140 - 0x6cd9508e89dcf6b0)(&data_14000d6e0);
            result = (data_14000d140 - 0x6cd9508e89dcf6b0)(&data_14000d6e0);
            
            if (data_14000dd68 < 0xa)
                break;
            
            result = data_14000dd6c;
        }
    }
    
    return result;
}

int64_t main()
{
    int64_t __saved_rbp_1;
    int64_t __saved_rbp = __saved_rbp_1;
    int64_t __saved_r15_1;
    int64_t __saved_r15 = __saved_r15_1;
    int64_t __saved_r14_1;
    int64_t __saved_r14 = __saved_r14_1;
    int64_t __saved_r13_1;
    int64_t __saved_r13 = __saved_r13_1;
    int64_t __saved_r12_1;
    int64_t __saved_r12 = __saved_r12_1;
    int64_t __saved_rsi_1;
    int64_t __saved_rsi = __saved_rsi_1;
    int64_t __saved_rdi_1;
    int64_t __saved_rdi = __saved_rdi_1;
    int64_t __saved_rbx_1;
    int64_t __saved_rbx = __saved_rbx_1;
    void var_128;
    void* rsp_1 = &var_128;
    int128_t __saved_zmm6_1;
    int128_t __saved_zmm6 = __saved_zmm6_1;
    char rax_13;
    
    while (true)
    {
        __chkstk(0x10);
        (data_14000d150 - 0x2cc634ac8ca6ad95)();
        (data_14000d158 - 0x2cc634ac8ca6ad95)();
        (data_14000d160 - 0x2cc634ac8ca6ad95)();
        int128_t var_a8;
        __builtin_memset(&var_a8, 0, 0x40);
        int128_t var_88;
        (data_14000d168 - 0x2cc634ac8ca6ad95)(&var_88, &var_a8);
        (data_14000d170 - 0x2cc634ac8ca6ad95)();
        rax_13 = (data_14000d178 - 0x2cc634ac8ca6ad95)(&var_88, &var_a8);
        
        if (data_14000dd70 < 0xa)
            break;
        
        int32_t rcx_3 = data_14000dd74;
        
        if (!((~rcx_3 * rcx_3) & 1))
            break;
        
        (data_14000d150 - 0x2cc634ac8ca6ad95)();
        (data_14000d158 - 0x2cc634ac8ca6ad95)();
        (data_14000d160 - 0x2cc634ac8ca6ad95)();
        int128_t var_e8;
        __builtin_memset(&var_e8, 0, 0x40);
        int128_t var_c8;
        (data_14000d168 - 0x2cc634ac8ca6ad95)(&var_c8, &var_e8);
        (data_14000d170 - 0x2cc634ac8ca6ad95)();
        (data_14000d178 - 0x2cc634ac8ca6ad95)(&var_c8, &var_e8);
        rsp_1 -= 0x10;
    }
    
    data_14000d6f8;
    
    if (!rax_13)
    {
        (data_14000d180 - 0x2cc634ac8ca6ad95)(&data_14000db70, &data_14000b10f);
        (data_14000d188 - 0x2cc634ac8ca6ad95)(&data_14000db70);
        
        if (data_14000dd70 >= 0xa)
        {
            int32_t rax_42 = data_14000dd74;
            
            if ((~rax_42 * rax_42) & 1)
            {
                int32_t rax_49;
                
                do
                {
                    (data_14000d180 - 0x2cc634ac8ca6ad95)(&data_14000db70, &data_14000b10f);
                    (data_14000d188 - 0x2cc634ac8ca6ad95)(&data_14000db70);
                    (data_14000d188 - 0x2cc634ac8ca6ad95)(&data_14000db70);
                    
                    if (data_14000dd70 < 0xa)
                        break;
                    
                    rax_49 = data_14000dd74;
                } while ((~rax_49 * rax_49) & 1);
            }
        }
    }
    else
    {
        (data_14000d190 - 0x2cc634ac8ca6ad95)(&data_14000db50, &data_14000b0d0);
        (data_14000d188 - 0x2cc634ac8ca6ad95)(&data_14000db50);
        
        if (data_14000dd70 >= 0xa)
        {
            int32_t rax_30 = data_14000dd74;
            
            if ((~rax_30 * rax_30) & 1)
            {
                int32_t rax_37;
                
                do
                {
                    (data_14000d190 - 0x2cc634ac8ca6ad95)(&data_14000db50, &data_14000b0d0);
                    (data_14000d188 - 0x2cc634ac8ca6ad95)(&data_14000db50);
                    (data_14000d188 - 0x2cc634ac8ca6ad95)(&data_14000db50);
                    
                    if (data_14000dd70 < 0xa)
                        break;
                    
                    rax_37 = data_14000dd74;
                } while ((~rax_37 * rax_37) & 1);
            }
        }
    }
    
    while (true)
    {
        (data_14000d198 - 0x2cc634ac8ca6ad95)();
        (data_14000d188 - 0x2cc634ac8ca6ad95)(&data_14000db7c);
        (data_14000d1a0 - 0x2cc634ac8ca6ad95)(&data_14000db90, &data_14000b183);
        (data_14000d1a8 - 0x2cc634ac8ca6ad95)(/* nop */);
        (data_14000d188 - 0x2cc634ac8ca6ad95)(&var_128);
        (data_14000d1b0 - 0x2cc634ac8ca6ad95)(&data_14000db9c, &data_14000b1b2);
        (data_14000d188 - 0x2cc634ac8ca6ad95)(&data_14000db9c);
        (data_14000d1b8 - 0x2cc634ac8ca6ad95)(rsp_1 - 0x10, 8);
        int32_t rax_66;
        
        if (data_14000dd70 >= 0xa)
            rax_66 = data_14000dd74;
        
        if (data_14000dd70 < 0xa || !((~rax_66 * rax_66) & 1))
            return 0;
        
        (data_14000d198 - 0x2cc634ac8ca6ad95)(&data_14000db7c, &data_14000b146, &data_14000db9c);
        (data_14000d188 - 0x2cc634ac8ca6ad95)(&data_14000db7c);
        (data_14000d1a0 - 0x2cc634ac8ca6ad95)(&data_14000db90, &data_14000b183);
        (data_14000d1a8 - 0x2cc634ac8ca6ad95)(/* nop */);
        (data_14000d188 - 0x2cc634ac8ca6ad95)(&var_128);
        (data_14000d1b0 - 0x2cc634ac8ca6ad95)(&data_14000db9c, &data_14000b1b2);
        (data_14000d188 - 0x2cc634ac8ca6ad95)(&data_14000db9c);
        (data_14000d1b8 - 0x2cc634ac8ca6ad95)(rsp_1 - 0x10, 8);
    }
}

int64_t sub_140002070()
{
    void var_58;
    void* rsp = &var_58;
    int64_t var_48 = __security_cookie ^ &var_48;
    int64_t rax_4;
    void* rbx_1;
    void* rsp_3;
    
    while (true)
    {
        __chkstk(0x10);
        void* rsp_1 = rsp - 0x10;
        rbx_1 = rsp_1;
        
        while (true)
        {
            rax_4 = (data_14000d1c0 + 0x7d2210ac7f255488)(u"KERNEL32.DLL");
            rsp_3 = rsp_1;
            
            if (data_14000dd78 < 0xa)
                break;
            
            int32_t rcx_1 = data_14000dd7c;
            int32_t rdx_4 = (~rcx_1 * rcx_1) & 1;
            
            if (!rdx_4)
                break;
            
            (data_14000d1c0 + 0x7d2210ac7f255488)(u"KERNEL32.DLL", rdx_4);
            rsp_1 = rsp_3;
        }
        
        if (data_14000dd80 < 0xa)
            break;
        
        int32_t rax_7 = data_14000dd84;
        
        if (!((~rax_7 * rax_7) & 1))
            break;
        
        (data_14000d1c0 + 0x7d2210ac7f255488)(u"KERNEL32.DLL");
        rsp = rsp_3;
        
        if (data_14000dd78 >= 0xa)
        {
            int32_t rax_10 = data_14000dd7c;
            
            if ((~rax_10 * rax_10) & 1)
            {
                int32_t rax_15;
                
                do
                {
                    (data_14000d1c0 + 0x7d2210ac7f255488)(u"KERNEL32.DLL");
                    (data_14000d1c0 + 0x7d2210ac7f255488)(u"KERNEL32.DLL");
                    rax_15 = data_14000dd7c;
                    
                    if (data_14000dd78 < 0xa)
                        break;
                } while ((~rax_15 * rax_15) & 1);
            }
        }
    }
    
    if (rax_4)
    {
        int64_t rax_20;
        
        while (true)
        {
            __builtin_strncpy(rbx_1, "GetProcAddress", 0xf);
            void* rsp_10;
            
            while (true)
            {
                rax_20 = (data_14000d1d0 + 0x7d2210ac7f255488)(rax_4, rbx_1);
                rsp_10 = rsp_3;
                
                if (data_14000dd88 < 0xa)
                    break;
                
                int32_t rcx_14 = data_14000dd8c;
                
                if (!((~rcx_14 * rcx_14) & 1))
                    break;
                
                (data_14000d1d0 + 0x7d2210ac7f255488)(rax_4, rbx_1);
                rsp_3 = rsp_10;
            }
            
            data_14000d718 = rax_20;
            
            if (data_14000dd80 < 0xa)
                break;
            
            int32_t rcx_16 = data_14000dd84;
            
            if (!((~rcx_16 * rcx_16) & 1))
                break;
            
            __builtin_strncpy(rbx_1, "GetProcAddress", 0xf);
            int64_t rax_25;
            
            while (true)
            {
                rax_25 = (data_14000d1d0 + 0x7d2210ac7f255488)(rax_4, rbx_1);
                rsp_3 = rsp_10;
                
                if (data_14000dd88 < 0xa)
                    break;
                
                int32_t rcx_18 = data_14000dd8c;
                
                if (!((~rcx_18 * rcx_18) & 1))
                    break;
                
                (data_14000d1d0 + 0x7d2210ac7f255488)(rax_4, rbx_1);
                rsp_10 = rsp_3;
            }
            
            data_14000d718 = rax_25;
        }
        
        if (rax_20)
        {
            int64_t rdi_2 = rax_20;
            int64_t result;
            
            while (true)
            {
                (data_14000d1d8 + 0x7d2210ac7f255488)(&data_14000dbb8);
                data_14000d710 = rdi_2(rax_4, &data_14000dbb8);
                int64_t rdi_3 = data_14000d718;
                (data_14000d1e0 + 0x7d2210ac7f255488)(&data_14000dbcc, &data_14000b22a);
                data_14000d720 = rdi_3(rax_4, &data_14000dbcc);
                int64_t rdi_4 = data_14000d718;
                (data_14000d1e8 + 0x7d2210ac7f255488)(&data_14000dbe0, &data_14000b265);
                data_14000d728 = rdi_4(rax_4, &data_14000dbe0);
                int64_t rdi_5 = data_14000d718;
                (data_14000d1f0 + 0x7d2210ac7f255488)(&data_14000dbf4, &data_14000b29d);
                data_14000d730 = rdi_5(rax_4, &data_14000dbf4);
                int64_t rdi_6 = data_14000d718;
                (data_14000d1f8 + 0x7d2210ac7f255488)(&data_14000dc08, &data_14000b2e4);
                result = rdi_6(rax_4, &data_14000dc08);
                data_14000d738 = result;
                
                if (data_14000dd80 < 0xa)
                    break;
                
                int32_t rcx_25 = data_14000dd84;
                
                if (!((~rcx_25 * rcx_25) & 1))
                    break;
                
                int64_t rax_42 = data_14000d718;
                (data_14000d1d8 + 0x7d2210ac7f255488)(&data_14000dbb8, &data_14000b1ec);
                data_14000d710 = rax_42(rax_4, &data_14000dbb8);
                int64_t r12_1 = data_14000d718;
                (data_14000d1e0 + 0x7d2210ac7f255488)(&data_14000dbcc, &data_14000b22a);
                data_14000d720 = r12_1(rax_4, &data_14000dbcc);
                int64_t rbx_2 = data_14000d718;
                (data_14000d1e8 + 0x7d2210ac7f255488)(&data_14000dbe0, &data_14000b265);
                data_14000d728 = rbx_2(rax_4, &data_14000dbe0);
                int64_t rdi_7 = data_14000d718;
                (data_14000d1f0 + 0x7d2210ac7f255488)(&data_14000dbf4, &data_14000b29d);
                data_14000d730 = rdi_7(rax_4, &data_14000dbf4);
                int64_t rdi_8 = data_14000d718;
                (data_14000d1f8 + 0x7d2210ac7f255488)(&data_14000dc08, &data_14000b2e4);
                data_14000d738 = rdi_8(rax_4, &data_14000dc08);
                rdi_2 = data_14000d718;
            }
            
            if (result && data_14000d710 && data_14000d720 && data_14000d728 && data_14000d730)
            {
                __security_check_cookie(var_48 ^ &var_48);
                return result;
            }
        }
    }
    
    (0x7d2210ac7f255488 + data_14000d1c8)(1);
    breakpoint();
}

int64_t sub_140002600()
{
    int64_t rax;
    int64_t var_48 = rax;
    (data_14000d200 - 0x5df7ca5374328083)(&data_14000dc20, &data_14000b354);
    (data_14000d208 - 0x5df7ca5374328083)(&data_14000dc20);
    (data_14000d210 - 0x5df7ca5374328083)(&data_14000dc30, &data_14000b387);
    (data_14000d208 - 0x5df7ca5374328083)(&data_14000dc30);
    int64_t* rsp = &var_48;
    *var_48[4] = 0;
    void* r12 = &*var_48[4];
    
    if (data_14000dd90 >= 0xa)
    {
        int32_t rax_9 = data_14000dd94;
        
        if ((~rax_9 * rax_9) & 1)
        {
            int32_t rax_22;
            
            do
            {
                (data_14000d200 - 0x5df7ca5374328083)(&data_14000dc20, &data_14000b354);
                (data_14000d208 - 0x5df7ca5374328083)(&data_14000dc20);
                (data_14000d210 - 0x5df7ca5374328083)(&data_14000dc30, &data_14000b387);
                (data_14000d208 - 0x5df7ca5374328083)(&data_14000dc30);
                __chkstk(0x10);
                void* rsp_9 = rsp - 0x10;
                r12 = rsp_9;
                (data_14000d208 - 0x5df7ca5374328083)(&data_14000dc20);
                (data_14000d208 - 0x5df7ca5374328083)(&data_14000dc30);
                rsp = rsp_9;
                *rsp_9 = 0;
                
                if (data_14000dd90 < 0xa)
                    break;
                
                rax_22 = data_14000dd94;
            } while ((~rax_22 * rax_22) & 1);
        }
    }
    
    int32_t i;
    
    do
    {
        void* rsp_13 = rsp - 0x20;
        (data_14000d218 - 0x5df7ca5374328083)(&data_14000dc50, &data_14000b3c9);
        
        while (true)
        {
            (data_14000d208 - 0x5df7ca5374328083)(&data_14000dc50);
            data_14000d738(0x1f4);
            rsp = rsp_13 + 0x20;
            
            if (data_14000dd90 < 0xa)
                break;
            
            int32_t rax_28 = data_14000dd94;
            
            if (!((~rax_28 * rax_28) & 1))
                break;
            
            (data_14000d218 - 0x5df7ca5374328083)(&data_14000dc50, &data_14000b3c9);
            rsp_13 = rsp - 0x20;
            (data_14000d208 - 0x5df7ca5374328083)(&data_14000dc50);
            data_14000d738(0x1f4);
        }
        
        i = *r12 + 1;
        *r12 = i;
    } while (i < 5);
    (data_14000d220 - 0x5df7ca5374328083)(&data_14000dc58, &data_14000b3f9);
    int32_t result = (data_14000d208 - 0x5df7ca5374328083)(&data_14000dc58);
    
    if (data_14000dd90 >= 0xa)
    {
        result = data_14000dd94;
        
        while ((~result * result) & 1)
        {
            (data_14000d220 - 0x5df7ca5374328083)(&data_14000dc58, &data_14000b3f9);
            (data_14000d208 - 0x5df7ca5374328083)(&data_14000dc58);
            result = (data_14000d208 - 0x5df7ca5374328083)(&data_14000dc58);
            
            if (data_14000dd90 < 0xa)
                break;
            
            result = data_14000dd94;
        }
    }
    
    return result;
}

int64_t sub_140002960()
{
    int64_t __saved_rdi;
    int64_t* rsp = &__saved_rdi;
    
    while (true)
    {
        __chkstk(0x40);
        *(rsp - 0x40) = &std::_Func_impl_no_alloc<class `void __cdecl SetupBreakpointDetector(void)'::`1'::<lambda_1>, void, class std::chrono::duration<__int64, struct std::ratio<1, 1000>> const &>::`vftable'{for `std::_Func_base<void,class std::chrono::duration<int64_t,struct std::ratio<1,1000> > const& __ptr64>'};
        *(rsp - 8) = rsp - 0x40;
        int32_t result = (data_14000d228 + 0x29ad5e5776dd3935)();
        
        if (data_14000dd98 >= 0xa)
            result = data_14000dd9c;
        
        if (data_14000dd98 < 0xa || !((~result * result) & 1))
            return result;
        
        __chkstk(0x40);
        *(rsp - 0x80) = &std::_Func_impl_no_alloc<class `void __cdecl SetupBreakpointDetector(void)'::`1'::<lambda_1>, void, class std::chrono::duration<__int64, struct std::ratio<1, 1000>> const &>::`vftable'{for `std::_Func_base<void,class std::chrono::duration<int64_t,struct std::ratio<1,1000> > const& __ptr64>'};
        *(rsp - 0x48) = rsp - 0x80;
        (data_14000d228 + 0x29ad5e5776dd3935)();
        rsp -= 0x80;
    }
}

int64_t sub_140002a00(int64_t arg1, int64_t arg2)
{
    while (true)
    {
        (data_14000d230 - 0x657b3b890deaaa52)(&data_14000dc88, &data_14000b47f);
        (data_14000d238 - 0x657b3b890deaaa52)(&data_14000dc88);
        (data_14000d240 - 0x657b3b890deaaa52)(arg1, 0x20);
        (data_14000d248 - 0x657b3b890deaaa52)(&data_14000dc9c, &data_14000b4c0);
        (data_14000d238 - 0x657b3b890deaaa52)(&data_14000dc9c);
        int32_t result = (data_14000d240 - 0x657b3b890deaaa52)(arg2, 0x20);
        
        if (data_14000dda0 >= 0xa)
            result = data_14000dda4;
        
        if (data_14000dda0 < 0xa || !((~result * result) & 1))
            return result;
        
        (data_14000d230 - 0x657b3b890deaaa52)(&data_14000dc88, &data_14000b47f);
        (data_14000d238 - 0x657b3b890deaaa52)(&data_14000dc88);
        (data_14000d240 - 0x657b3b890deaaa52)(arg1, 0x20);
        (data_14000d248 - 0x657b3b890deaaa52)(&data_14000dc9c, &data_14000b4c0);
        (data_14000d238 - 0x657b3b890deaaa52)(&data_14000dc9c);
        (data_14000d240 - 0x657b3b890deaaa52)(arg2, 0x20);
    }
}

int64_t sub_140002b50()
{
    void var_68;
    int64_t rax_1 = __security_cookie ^ &var_68;
    int32_t var_3c;
    __builtin_strncpy(&var_3c, "|/-\\", 4);
    int32_t i_1 = 0;
    int32_t i;
    
    do
    {
        char r15_1 = *(&var_3c + (i_1 & 3));
        
        while (true)
        {
            char var_3e = r15_1;
            char var_3d_1 = 0;
            (data_14000d258 + 0x6b8da29d40b30843)(&var_3e);
            (data_14000d260 + 0x6b8da29d40b30843)(&data_14000dcb0, &data_14000b4fd);
            (data_14000d258 + 0x6b8da29d40b30843)(&data_14000dcb0);
            data_14000d738(0x64);
            
            if (data_14000dda8 < 0xa)
                break;
            
            int32_t rax_11 = data_14000ddac;
            
            if (!((~rax_11 * rax_11) & 1))
                break;
            
            var_3e = r15_1;
            char var_3d_2 = 0;
            (data_14000d258 + 0x6b8da29d40b30843)(&var_3e);
            (data_14000d260 + 0x6b8da29d40b30843)(&data_14000dcb0, &data_14000b4fd);
            (data_14000d258 + 0x6b8da29d40b30843)(&data_14000dcb0);
            data_14000d738(0x64);
        }
        
        i = i_1 + 1;
        i_1 = i;
    } while (i != 0x14);
    (data_14000d250 + 0x6b8da29d40b30843)(&data_14000dcb8, &data_14000b536);
    int32_t result = (data_14000d258 + 0x6b8da29d40b30843)(&data_14000dcb8);
    
    if (data_14000dda8 >= 0xa)
    {
        result = data_14000ddac;
        
        while ((~result * result) & 1)
        {
            (data_14000d250 + 0x6b8da29d40b30843)(&data_14000dcb8, &data_14000b536);
            (data_14000d258 + 0x6b8da29d40b30843)(&data_14000dcb8);
            result = (data_14000d258 + 0x6b8da29d40b30843)(&data_14000dcb8);
            
            if (data_14000dda8 < 0xa)
                break;
            
            result = data_14000ddac;
        }
    }
    
    __security_check_cookie(rax_1 ^ &var_68);
    return result;
}

uint64_t sub_140002d30(char* arg1, char* arg2)
{
    __chkstk(0x21e8);
    void var_2218;
    int64_t rax_1 = __security_cookie ^ &var_2218;
    int64_t var_20d0;
    memset(&var_20d0, 0, 0x2098);
    data_14000d740 = 0;
    char i_11 = *arg1;
    int64_t rcx_1;
    
    if (!i_11)
        rcx_1 = 0;
    else
    {
        int64_t rax_2 = 0;
        char i_5 = i_11;
        char i;
        
        do
        {
            char var_1fec[0x20];
            var_1fec[rax_2] = i_5;
            rcx_1 = rax_2 + 1;
            
            if (rax_2 > 0x1d)
                break;
            
            i = arg1[rax_2 + 1];
            rax_2 = rcx_1;
            i_5 = i;
        } while (i);
    }
    
    char var_2050[0x64];
    var_2050[rcx_1 + 0x64] = 0;
    char i_10 = *arg2;
    int64_t rax_6;
    
    if (!i_10)
        rax_6 = 0x84;
    else
    {
        int64_t rcx_2 = 0;
        char i_6 = i_10;
        int64_t rax_5;
        char i_1;
        
        do
        {
            char var_1fcc[0x1f94];
            var_1fcc[rcx_2] = i_6;
            rax_5 = rcx_2 + 1;
            
            if (rcx_2 > 0x1d)
                break;
            
            i_1 = arg2[rcx_2 + 1];
            rcx_2 = rax_5;
            i_6 = i_1;
        } while (i_1);
        rax_6 = rax_5 + 0x84;
    }
    
    var_2050[rax_6] = 0;
    int64_t var_20da;
    __builtin_strcpy(&var_20da, "panhauzer");
    int64_t var_20e3;
    __builtin_strncpy(&var_20e3, "2digboob", 9);
    int32_t var_21ec;
    __builtin_memset(&var_21ec, 0, 0x104);
    int64_t rcx_3 = 0x18;
    int64_t i_7 = 0x64;
    int64_t i_2;
    int64_t r8_2;
    
    do
    {
        int128_t var_2148;
        uint64_t rcx_4 = *(&*var_2148[0xa] + i_7);
        *(rcx_3 + &data_14000d738) = 0x8101;
        *(rcx_3 + &*(data_14000d738 + 2)) = rcx_4;
        *(rcx_3 + &*(data_14000d740 + 2)) = 0x20c;
        *(rcx_3 + &*(data_14000d740 + 4)) = i_7;
        *(rcx_3 + 0x14000d74c) = 0x9010206;
        int64_t var_2508[0x5e];
        var_2508[i_7] = rcx_3;
        *(rcx_3 + &data_14000d750) = 0;
        i_2 = i_7 + 1;
        r8_2 = rcx_3 + 0x20;
        rcx_3 = r8_2;
        i_7 = i_2;
    } while (i_2 != 0x6d);
    
    int32_t rdx_1 = i_2 - 0x64;
    int32_t var_21ec_1 = rdx_1;
    int64_t r8_3 = r8_2 - 0x18;
    int32_t rax_8 = data_14000ddb0;
    bool cond:0 = data_14000ddb4 < 0xa;
    data_14000d740 = r8_3;
    char rax_9 = cond:0 | !((~rax_8 * rax_8) & 1);
    int32_t rcx_8 = data_14000ddb8;
    char rcx_9 = data_14000ddbc < 0xa | !((~rcx_8 * rcx_8) & 1);
    int64_t i_9 = 0;
    int128_t var_21e8;
    int32_t rbx_2;
    int64_t rdi_2;
    int64_t r14_1;
    int64_t i_3;
    
    do
    {
        int32_t rdi_1 = rdx_1;
        int64_t r10_1 = r8_3;
        uint64_t r8_4 = *(&var_20e3 + i_9);
        
        while (true)
        {
            int64_t r11_2 = rdi_1;
            rdi_2 = r10_1 + 0x3d;
            r14_1 = r11_2;
            int32_t rbp_1 = r11_2 + 1;
            int64_t r11_3 = r10_1 + 0x38;
            rbx_2 = r11_2 + 2;
            
            while (true)
            {
                *(rdi_2 + &*(data_14000d710 + 3)) = 0x8101;
                *(rdi_2 + &*(data_14000d710 + 5)) = r8_4;
                *(rdi_2 + &*(data_14000d718 + 5)) = 0x20c;
                *(rdi_2 + &*(data_14000d718 + 7)) = i_9 + 0x84;
                *(rdi_2 + &*(data_14000d720 + 7)) = 0x9010206;
                *(&var_21e8 + (r14_1 << 3)) = rdi_2 - 0x25;
                *(rdi_2 + &*(data_14000d728 + 3)) = 0;
                
                if (rax_9)
                    break;
                
                *(rdi_2 + &*(data_14000d730 + 3)) = 0x8101;
                *(rdi_2 + &*(data_14000d730 + 5)) = r8_4;
                *(rdi_2 + &*(data_14000d738 + 5)) = 0x20c;
                *(rdi_2 + &*(data_14000d738 + 7)) = i_9 + 0x84;
                *(rdi_2 + &*(data_14000d740 + 7)) = 0x9010206;
                *(&var_21e8 + ((r14_1 + 1) << 3)) = rdi_2 - 5;
                *(rdi_2 + 0x14000d74b) = 0;
                r14_1 += 2;
                rdi_2 += 0x40;
                rbx_2 += 2;
                rbp_1 += 2;
                r11_3 += 0x40;
            }
            
            if (rcx_9)
                break;
            
            int64_t r10_6 = r11_3;
            void* r11_4 = &var_2218 + (rbp_1 << 3) + 0x30;
            rdi_1 = rbx_2;
            
            while (true)
            {
                *(r10_6 + &data_14000d738) = 0x8101;
                *(r10_6 + &*(data_14000d738 + 2)) = r8_4;
                *(r10_6 + &*(data_14000d740 + 2)) = 0x20c;
                *(r10_6 + &*(data_14000d740 + 4)) = i_9 + 0x84;
                *(r10_6 + 0x14000d74c) = 0x9010206;
                *r11_4 = r10_6;
                *(r10_6 + &data_14000d750) = 0;
                
                if (rax_9)
                    break;
                
                *(r10_6 + 0x14000d758) = 0x8101;
                *(r10_6 + 0x14000d75a) = r8_4;
                *(r10_6 + 0x14000d762) = 0x20c;
                *(r10_6 + 0x14000d764) = i_9 + 0x84;
                *(r10_6 + 0x14000d76c) = 0x9010206;
                int64_t rdi_5 = rdi_1;
                *(&var_21e8 + (rdi_5 << 3)) = r10_6 + 0x20;
                *(r10_6 + 0x14000d770) = 0;
                rdi_1 = rdi_5 + 2;
                r11_4 += 0x10;
                r10_6 += 0x40;
            }
            
            r10_1 = r10_6 + 8;
            data_14000d740 = r10_1;
        }
        
        i_3 = i_9 + 1;
        rdx_1 = r14_1 + 1;
        r8_3 = rdi_2 - 0x1d;
        i_9 = i_3;
    } while (i_3 != 8);
    int32_t var_21ec_2 = r14_1 + 1;
    *(rdi_2 + &*(data_14000d730 + 3)) = 0x8001;
    *(rdi_2 + &*(data_14000d730 + 5)) = 1;
    *(rdi_2 + &*(data_14000d738 + 5)) = 7;
    *(rdi_2 + &*(data_14000d740 + 6)) = 0x8001;
    *(rdi_2 + 0x14000d748) = 0;
    data_14000d740 = rdi_2;
    
    if (r14_1 + 1 > 0)
    {
        int64_t i_8 = 0;
        int64_t i_4;
        
        do
        {
            *(*(&var_21e8 + (i_8 << 3)) + &data_14000d750) = rdi_2 - 0xa;
            i_4 = i_8 + 1;
            i_8 = i_4;
        } while (r14_1 + 1 != i_4);
    }
    
    *(rdi_2 + &*(data_14000d738 + 6)) = rdi_2;
    (data_14000d268 - 0x5eabcd088feefbc3)(&var_20d0, &data_14000d750, rdi_2);
    
    if (data_14000ddbc >= 0xa)
    {
        int32_t rax_14 = data_14000ddb8;
        
        if ((~rax_14 * rax_14) & 1)
        {
            int32_t rax_19;
            
            do
            {
                *(rdi_2 + &*(data_14000d738 + 6)) = data_14000d740;
                (data_14000d268 - 0x5eabcd088feefbc3)(&var_20d0, &data_14000d750);
                *(rdi_2 + &*(data_14000d738 + 6)) = data_14000d740;
                (data_14000d268 - 0x5eabcd088feefbc3)(&var_20d0, &data_14000d750);
                
                if (data_14000ddbc < 0xa)
                    break;
                
                rax_19 = data_14000ddb8;
            } while ((~rax_19 * rax_19) & 1);
        }
    }
    
    rbx_2 = var_20d0 == 1;
    __security_check_cookie(rax_1 ^ &var_2218);
    return rbx_2;
}

int64_t sub_140003270(int64_t arg1)
{
    int64_t __saved_rbp_1;
    int64_t __saved_rbp = __saved_rbp_1;
    int64_t __saved_r14_1;
    int64_t __saved_r14 = __saved_r14_1;
    int64_t __saved_rsi_1;
    int64_t __saved_rsi = __saved_rsi_1;
    int64_t __saved_rdi_1;
    int64_t __saved_rdi = __saved_rdi_1;
    int64_t __saved_rbx_2;
    int64_t __saved_rbx_1 = __saved_rbx_2;
    void var_38;
    void* rsp_1 = &var_38;
    int64_t __saved_rbx;
    int64_t rax_1 = __security_cookie ^ &__saved_rbx;
    
    while (true)
    {
        __chkstk(0x10);
        data_14000d720(0xfffffff5);
        (data_14000d270 + 0x26a6b2c7a85184d9)(arg1);
        *(rsp_1 - 0x10) = 0;
        *(rsp_1 - 0x20) = 0;
        int32_t result = data_14000d728(/* nop */);
        
        if (data_14000ddc0 >= 0xa)
            result = data_14000ddc4;
        
        if (data_14000ddc0 < 0xa || !((~result * result) & 1))
        {
            __security_check_cookie(rax_1 ^ &__saved_rbx);
            return result;
        }
        
        __chkstk(0x10);
        data_14000d720(0xfffffff5);
        (data_14000d270 + 0x26a6b2c7a85184d9)(arg1);
        *(rsp_1 - 0x20) = 0;
        *(rsp_1 - 0x30) = 0;
        data_14000d728(/* nop */);
        rsp_1 -= 0x20;
    }
}

uint64_t sub_1400033b0(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4)
{
    int64_t __saved_rbp_1;
    int64_t __saved_rbp = __saved_rbp_1;
    int64_t __saved_r15_1;
    int64_t __saved_r15 = __saved_r15_1;
    int64_t __saved_r14_1;
    int64_t __saved_r14 = __saved_r14_1;
    int64_t __saved_r12_1;
    int64_t __saved_r12 = __saved_r12_1;
    int64_t __saved_rsi_1;
    int64_t __saved_rsi = __saved_rsi_1;
    int64_t __saved_rdi_1;
    int64_t __saved_rdi = __saved_rdi_1;
    int64_t __saved_rbx_2;
    int64_t __saved_rbx_1 = __saved_rbx_2;
    void var_48;
    void* rsp_1 = &var_48;
    int64_t arg_20 = arg4;
    int64_t __saved_rbx;
    int64_t rax_1 = __security_cookie ^ &__saved_rbx;
    int32_t rax_8;
    
    while (true)
    {
        __chkstk(0x10);
        void* rsp_2 = rsp_1 - 0x10;
        *rsp_2 = &arg_20;
        
        while (true)
        {
            *(data_14000d278 + 0x7813e83551991e13)();
            void* rax_7 = data_14000d280 + 0x7813e83551991e13;
            *(rsp_2 - 8) = &arg_20;
            *(rsp_2 - 0x10) = 0;
            rax_8 = rax_7(/* nop */);
            
            if (data_14000ddc8 < 0xa)
                break;
            
            int32_t rcx_2 = data_14000ddcc;
            
            if (!((~rcx_2 * rcx_2) & 1))
                break;
            
            *(data_14000d278 + 0x7813e83551991e13)();
            void* rax_13 = data_14000d280 + 0x7813e83551991e13;
            *(rsp_2 - 8) = &arg_20;
            *(rsp_2 - 0x10) = 0;
            rax_13(/* nop */);
        }
        
        *rsp_2 = 0;
        
        if (data_14000ddd0 < 0xa)
            break;
        
        int32_t rcx_5 = data_14000ddd4;
        
        if (!((~rcx_5 * rcx_5) & 1))
            break;
        
        __chkstk(0x10);
        void* rsp_10 = rsp_2 - 0x10;
        void* r12_1 = rsp_10;
        *rsp_10 = &arg_20;
        
        while (true)
        {
            *(data_14000d278 + 0x7813e83551991e13)();
            void* rax_19 = data_14000d280 + 0x7813e83551991e13;
            *(rsp_10 - 8) = &arg_20;
            *(rsp_10 - 0x10) = 0;
            rax_19(/* nop */);
            rsp_1 = rsp_10;
            
            if (data_14000ddc8 < 0xa)
                break;
            
            int32_t rax_20 = data_14000ddcc;
            int32_t rcx_11 = (~rax_20 * rax_20) & 1;
            
            if (!rcx_11)
                break;
            
            *(data_14000d278 + 0x7813e83551991e13)(rcx_11);
            void* rax_25 = data_14000d280 + 0x7813e83551991e13;
            *(rsp_1 - 8) = &arg_20;
            *(rsp_1 - 0x10) = 0;
            rax_25(/* nop */);
            rsp_10 = rsp_1;
        }
        
        *r12_1 = 0;
    }
    
    int32_t rsi_1 = -1;
    
    if (rax_8 >= 0)
        rsi_1 = rax_8;
    
    __security_check_cookie(rax_1 ^ &__saved_rbx);
    return rsi_1;
}

uint64_t sub_140003600(int64_t arg1, int32_t arg2)
{
    int64_t __saved_rbp_1;
    int64_t __saved_rbp = __saved_rbp_1;
    int64_t __saved_r15_1;
    int64_t __saved_r15 = __saved_r15_1;
    int64_t __saved_r14_1;
    int64_t __saved_r14 = __saved_r14_1;
    int64_t __saved_rsi_1;
    int64_t __saved_rsi = __saved_rsi_1;
    int64_t __saved_rdi_1;
    int64_t __saved_rdi = __saved_rdi_1;
    int64_t __saved_rbx_1;
    int64_t __saved_rbx = __saved_rbx_1;
    int64_t rax;
    int64_t var_38 = rax;
    int64_t* rsp_1 = &var_38;
    var_38 = __security_cookie ^ &var_38;
    uint64_t count = arg2;
    
    while (true)
    {
        __chkstk(0x10);
        memset(arg1, 0, count);
        data_14000d720(0xfffffff6);
        *(rsp_1 - 0x10) = 0;
        *(rsp_1 - 0x20) = 0;
        data_14000d730(/* nop */);
        
        if (data_14000ddd8 < 0xa)
            break;
        
        int32_t rax_6 = data_14000dddc;
        
        if (!((~rax_6 * rax_6) & 1))
            break;
        
        __chkstk(0x10);
        memset(arg1, 0, count);
        data_14000d720(0xfffffff6);
        *(rsp_1 - 0x20) = 0;
        *(rsp_1 - 0x30) = 0;
        data_14000d730(/* nop */);
        rsp_1 -= 0x20;
    }
    
    uint64_t result = *(rsp_1 - 0x10);
    
    if (arg2 < result)
        result = arg2;
    
    if (result)
    {
        uint64_t rcx_8 = result;
        result = 0;
        
        while (true)
        {
            uint32_t rdx_2 = *(arg1 + result);
            
            if (rdx_2 != 0xd && rdx_2 != 0xa)
            {
                uint64_t result_1 = result + 1;
                result = result_1;
                
                if (rcx_8 == result_1)
                    break;
                
                continue;
            }
            
            int32_t rcx_9;
            
            do
            {
                *(arg1 + result) = 0;
                
                if (data_14000ddd8 < 0xa)
                    break;
                
                rcx_9 = data_14000dddc;
            } while ((~rcx_9 * rcx_9) & 1);
            break;
        }
    }
    
    __security_check_cookie(var_38 ^ &var_38);
    return result;
}

int64_t sub_140003780(void* arg1)
{
    TEB* gsbase;
    struct _PEB* ProcessEnvironmentBlock = gsbase->ProcessEnvironmentBlock;
    
    if (ProcessEnvironmentBlock)
    {
        struct _PEB_LDR_DATA* Ldr = ProcessEnvironmentBlock->Ldr;
        
        if (Ldr)
        {
            struct _LIST_ENTRY* Flink = Ldr->InLoadOrderModuleList.Flink;
            
            if (!Flink)
                return 0;
            
            if (Flink == &Ldr->InLoadOrderModuleList)
                return 0;
            
            struct _LIST_ENTRY* Flink_2 = Flink;
            
            while (true)
            {
                int16_t* r9_1 = *(Flink_2 + 0x60);
                
                if (r9_1 && *(Flink_2 + 0x58))
                {
                    void* rsi_1 = &r9_1[1];
                    int16_t* r11_1 = r9_1;
                    int64_t rdi_1 = 0;
                    int64_t r8_1;
                    int16_t* r10_1;
                    
                    do
                    {
                        r8_1 = rdi_1;
                        r10_1 = r11_1;
                        rdi_1 += 1;
                        rsi_1 += 2;
                        r11_1 = &r11_1[1];
                    } while (r9_1[r8_1]);
                    
                    int64_t rsi_2 = 0;
                    int16_t* rdi_2 = r10_1;
                    int64_t rbx_1 = -1;
                    int16_t* r9_2;
                    int64_t r10_2;
                    int64_t r11_2;
                    bool cond:1_1;
                    
                    do
                    {
                        r9_2 = rdi_2;
                        r10_2 = rsi_2;
                        r11_2 = rbx_1 + 1;
                        rdi_2 = &rdi_2[-1];
                        cond:1_1 = *(arg1 + (rbx_1 << 1) + 2);
                        rsi_2 += 1;
                        rbx_1 = r11_2;
                    } while (cond:1_1);
                    
                    if (r11_2 <= r8_1)
                    {
                        if (!r11_2)
                            return *(Flink_2 + 0x30);
                        
                        void* r11_3 = arg1;
                        int64_t r8_2 = r10_2;
                        int16_t* r10_3 = r9_2;
                        
                        while (true)
                        {
                            int16_t* r9_3 = r11_3;
                            int16_t r11_4 = *r10_3;
                            int16_t rdi_4 = r11_4 - 0x20;
                            
                            if (r11_4 - 0x61 >= 0x1a)
                                rdi_4 = r11_4;
                            
                            uint32_t rsi_5 = *r9_3;
                            uint32_t rbx_3 = rsi_5 - 0x20;
                            
                            if (rsi_5 - 0x61 >= 0x1a)
                                rbx_3 = rsi_5;
                            
                            if (rdi_4 != rbx_3)
                                break;
                            
                            r10_3 = &r10_3[1];
                            r11_3 = &r9_3[1];
                            int64_t temp0_1 = r8_2;
                            r8_2 -= 1;
                            
                            if (temp0_1 == 1)
                                return *(Flink_2 + 0x30);
                        }
                    }
                }
                
                struct _LIST_ENTRY* Flink_1 = Flink_2->Flink;
                
                if (!Flink_1)
                    return 0;
                
                Flink_2 = Flink_1;
                
                if (Flink_1 == &Ldr->InLoadOrderModuleList)
                    return 0;
            }
        }
    }
    
    return 0;
}

void* sub_1400038e0(int16_t* arg1, char* arg2)
{
    uint64_t rdi;
    uint64_t var_30 = rdi;
    int64_t rbp;
    int64_t var_38 = rbp;
    
    if (arg1 && *arg1 == 0x5a4d)
    {
        int64_t rax_2 = *(arg1 + 0x3c);
        
        if (*(arg1 + rax_2) == 0x4550)
        {
            uint64_t r8_1 = *(arg1 + rax_2 + 0x88);
            
            if (!r8_1)
                return nullptr;
            
            int32_t rax_3 = *(arg1 + rax_2 + 0x8c);
            
            if (!rax_3)
                return nullptr;
            
            uint64_t rax_4 = *(arg1 + r8_1 + 0x18);
            uint64_t var_48_1 = rax_4;
            
            if (rax_4)
            {
                char rsi_3 = *arg2;
                uint64_t r9_5 = 0;
                
                do
                {
                    uint64_t rbx_1 = *(*(arg1 + r8_1 + 0x20) + arg1 + (r9_5 << 2));
                    char r9_7 = *(arg1 + rbx_1);
                    rbp = r9_7;
                    
                    if (!(r9_7 | rsi_3))
                    {
                    label_140003a81:
                        int32_t rdx = r8_1;
                        uint64_t rax_14 = *(*(arg1 + r8_1 + 0x1c) + arg1
                            + (*(*(arg1 + r8_1 + 0x24) + arg1 + (r9_5 << 1)) << 2));
                        void* rsi_5 = arg1 + rax_14;
                        
                        if (rax_14 >= rdx && rax_14 < rax_3 + rdx)
                        {
                            void* rax_19 = (data_14000d288 + 0x4ed8019cd8172a47)(rsi_5, rdx);
                            
                            if (data_14000dde0 < 0xa)
                                return rax_19;
                            
                            while (true)
                            {
                                int32_t rcx_2 = data_14000dde4;
                                int32_t rdx_4 = (~rcx_2 * rcx_2) & 1;
                                
                                if (!rdx_4)
                                    return rax_19;
                                
                                (data_14000d288 + 0x4ed8019cd8172a47)(rsi_5, rdx_4);
                                rax_19 = (data_14000d288 + 0x4ed8019cd8172a47)(rsi_5);
                                
                                if (data_14000dde0 < 0xa)
                                    return rax_19;
                            }
                        }
                        
                        return rsi_5;
                    }
                    
                    void* r12_2 = rbx_1 + arg1;
                    bool r13_1 = rsi_3;
                    char rbx_2 = rsi_3;
                    char* r15_2 = arg2;
                    
                    while (true)
                    {
                        rax_4 = r9_7;
                        rdi = r9_7;
                        char r9_8 = rdi - 0x20;
                        
                        if (rax_4 - 0x61 >= 0x1a)
                            r9_8 = r9_7;
                        
                        rdi = rbx_2 - 0x20;
                        
                        if (rbx_2 - 0x61 >= 0x1a)
                            rdi = rbx_2;
                        
                        if (r9_8 != rdi)
                            break;
                        
                        uint64_t rax_9 = rbp & 1;
                        uint64_t r9_13 = r13_1 & 1;
                        rax_4 = *(r12_2 + rax_9);
                        rbp = rax_4;
                        rbx_2 = r15_2[r9_13];
                        r13_1 = rbx_2;
                        r9_7 = rax_4;
                        rax_4 |= rbx_2;
                        r12_2 += rax_9;
                        r15_2 = &r15_2[r9_13];
                        
                        if (!rax_4)
                            goto label_140003a81;
                    }
                    
                    rax_4 = r9_5 + 1;
                    r9_5 = rax_4;
                } while (rax_4 != var_48_1);
            }
        }
    }
    
    return nullptr;
}

int64_t sub_140003b30(int64_t arg1)
{
    int64_t r15;
    int64_t var_8 = r15;
    void var_2f8;
    int64_t rax_1 = __security_cookie ^ &var_2f8;
    int128_t var_e8;
    __builtin_memset(&var_e8, 0, 0x80);
    (data_14000d290 + 0x10d0b2390d0a01cb)(&var_e8, 0x80, arg1);
    char* rax_6 = (data_14000d298 + 0x10d0b2390d0a01cb)(&var_e8, 0x2e);
    int64_t result;
    
    if (!rax_6)
        result = 0;
    else
    {
        int128_t var_188;
        void* rax_14;
        
        while (true)
        {
            *rax_6 = 0;
            __builtin_memset(&var_188, 0, 0xa0);
            (data_14000d290 + 0x10d0b2390d0a01cb)(&var_188, 0xa0, &var_e8);
            int64_t rax_11 = (data_14000d2a0 + 0x10d0b2390d0a01cb)(&var_188);
            
            if (rax_11 >= 4)
            {
                char var_18c[0x4];
                bool rbp_1 = var_18c[rax_11];
                r15 = rbp_1;
                (data_14000d2a8 + 0x10d0b2390d0a01cb)(&data_14000dc14, &data_14000b31e);
                uint64_t r8_2;
                r8_2 = 1;
                bool r9_1 = true;
                bool r10_1 = r15;
                void* rcx_5 = &var_18c[rax_11];
                rax_14 = &data_14000dc14;
                bool rcx_6;
                
                do
                {
                    void* rsi_2;
                    rsi_2 = rbp_1;
                    bool r11_1 = rsi_2 - 0x20;
                    
                    if (rbp_1 - 0x61 >= 0x1a)
                        r11_1 = rbp_1;
                    
                    uint32_t r11_3 = r9_1 - 0x20;
                    
                    if (r9_1 - 0x61 >= 0x1a)
                        r11_3 = r9_1;
                    
                    if (r11_1 != r11_3)
                        goto label_140003c91;
                    
                    uint64_t rdx_3 = r10_1 & 1;
                    r8_2 = r8_2 & 1;
                    rsi_2 = rax_14 + r8_2;
                    rcx_6 = *(rcx_5 + rdx_3);
                    r10_1 = rcx_6;
                    r9_1 = *(rax_14 + r8_2);
                    r8_2 = r9_1;
                    rbp_1 = rcx_6;
                    rcx_5 += rdx_3;
                    rax_14 = rsi_2;
                } while (rcx_6 | r9_1);
                rax_14 = 1;
                
                if (data_14000dde8 < 0xa)
                    break;
            }
            else
            {
            label_140003c91:
                rax_14 = nullptr;
                
                if (data_14000dde8 < 0xa)
                    break;
            }
            
            int32_t rcx_7 = data_14000ddec;
            
            if (!((~rcx_7 * rcx_7) & 1))
                break;
            
            *rax_6 = 0;
            __builtin_memset(&var_188, 0, 0xa0);
            (data_14000d290 + 0x10d0b2390d0a01cb)(&var_188, 0xa0, &var_e8);
            (data_14000d2a0 + 0x10d0b2390d0a01cb)(&var_188);
        }
        
        if (!rax_14)
            (data_14000d2b0 + 0x10d0b2390d0a01cb)(&var_188);
        
        int16_t var_2c8[0x9e];
        memset(&var_2c8, 0, 0x140);
        char i_1 = var_188;
        int64_t rbx_1;
        
        if (!i_1)
            rbx_1 = 0;
        else
        {
            int64_t rcx_12 = 0;
            char i;
            
            do
            {
                int64_t rdx_8 = rcx_12;
                var_2c8[rcx_12] = i_1;
                rcx_12 += 1;
                
                if (rdx_8 > 0x9d)
                {
                    rbx_1 = rcx_12;
                    break;
                }
                
                i = *(&*var_188[1] + rdx_8);
                rbx_1 = rcx_12;
                i_1 = i;
            } while (i);
        }
        
        var_2c8[rbx_1] = 0;
        int64_t rax_24;
        int32_t rcx_14;
        rax_24 = (data_14000d2b8 + 0x10d0b2390d0a01cb)(&var_2c8);
        
        if (data_14000dde8 >= 0xa)
        {
            rcx_14 = data_14000ddec;
            
            while ((~rcx_14 * rcx_14) & 1)
            {
                var_2c8[rbx_1] = 0;
                (data_14000d2b8 + 0x10d0b2390d0a01cb)(&var_2c8);
                var_2c8[rbx_1] = 0;
                rax_24 = (data_14000d2b8 + 0x10d0b2390d0a01cb)(&var_2c8);
                
                if (data_14000dde8 < 0xa)
                    break;
                
                rcx_14 = data_14000ddec;
            }
        }
        
        if (!rax_24)
            result = 0;
        else if (rax_6[1] != 0x23)
        {
            while (true)
            {
                result = (data_14000d2c0 + 0x10d0b2390d0a01cb)(rax_24, &rax_6[1]);
                
                if (data_14000dde8 < 0xa)
                    break;
                
                int32_t rcx_24 = data_14000ddec;
                
                if (!((~rcx_24 * rcx_24) & 1))
                    break;
                
                (data_14000d2c0 + 0x10d0b2390d0a01cb)(rax_24, &rax_6[1]);
            }
        }
        else
        {
            char rax_29 = rax_6[2];
            rcx_14 = rax_29;
            
            if (rcx_14 - 0x30 > 9)
                result = 0;
            else
            {
                void* rcx_19 = &rax_6[3];
                uint64_t rdx_18 = 0;
                int32_t rsi_5;
                uint64_t rdx_19;
                
                do
                {
                    rsi_5 = rax_29 + ((rdx_18 * 5) << 1) - 0x30;
                    rax_29 = *rcx_19;
                    rdx_19 = rax_29;
                    rcx_19 += 1;
                    rdx_18 = rsi_5;
                } while (rdx_19 - 0x30 < 0xa);
                
                if (rsi_5 <= 0)
                    result = 0;
                else
                {
                    while (true)
                    {
                        result = (data_14000d2c8 + 0x10d0b2390d0a01cb)(rax_24, rsi_5);
                        
                        if (data_14000dde8 < 0xa)
                            break;
                        
                        int32_t rcx_21 = data_14000ddec;
                        
                        if (!((~rcx_21 * rcx_21) & 1))
                            break;
                        
                        (data_14000d2c8 + 0x10d0b2390d0a01cb)(rax_24, rsi_5);
                    }
                }
            }
        }
    }
    
    __security_check_cookie(rax_1 ^ &var_2f8);
    return result;
}

void sub_140004060(char* arg1, int64_t arg2, char* arg3)
{
    if (!arg1 || !arg2)
        return;
    
    int64_t rax;
    
    if (!arg3)
        rax = 0;
    else if (arg2 < 2)
        rax = 0;
    else
    {
        int64_t r10_1 = 1;
        int64_t r9_1 = 0;
        
        do
        {
            rax = r10_1;
            char r10_2 = arg3[r9_1];
            
            if (!r10_2)
            {
                rax = r9_1;
                break;
            }
            
            arg1[r9_1] = r10_2;
            
            if (data_14000ddf0 >= 0xa)
            {
                int32_t r10_3 = data_14000ddf4;
                
                if ((~r10_3 * r10_3) & 1)
                {
                    char r10_4 = arg3[r9_1];
                    int32_t r11_6;
                    
                    do
                    {
                        arg1[r9_1] = r10_4;
                        r10_4 = arg3[r9_1];
                        arg1[r9_1] = r10_4;
                        
                        if (data_14000ddf0 < 0xa)
                            break;
                        
                        r11_6 = data_14000ddf4;
                    } while ((~r11_6 * r11_6) & 1);
                }
            }
            
            r10_1 = rax + 1;
            r9_1 = rax;
        } while (rax + 1 < arg2);
    }
    
    int32_t rdx;
    
    do
    {
        arg1[rax] = 0;
        
        if (data_14000ddf0 < 0xa)
            break;
        
        rdx = data_14000ddf4;
    } while ((~rdx * rdx) & 1);
}

void sub_140004160(char* arg1)
{
    if (!arg1)
        return;
    
    uint64_t rax = (data_14000d2d0 - 0x605ba99008c5628a)();
    
    if (rax > 0x9f)
    {
        do
        {
            arg1[0x9f] = 0;
            
            if (data_14000ddf8 < 0xa)
                break;
            
            rax = data_14000ddfc;
        } while ((~rax * rax) & 1);
        
        return;
    }
    
    if (rax + 1 <= 0x9f)
    {
        uint64_t r15_1 = rax + 1;
        int64_t r13_1 = 0;
        uint64_t r12_1 = rax;
        
        do
        {
            (data_14000d2d8 - 0x605ba99008c5628a)(&data_14000dc14, &data_14000b31e);
            char rax_6 = *(r13_1 + &data_14000dc14);
            
            if (!rax_6)
            {
                rax = r12_1;
                break;
            }
            
            int64_t rcx_5 = r13_1 + 1;
            arg1[r12_1] = rax_6;
            int64_t rdx_1;
            
            if (data_14000ddf8 < 0xa)
            {
                rax = r15_1;
                rdx_1 = rcx_5;
            }
            else
            {
                int32_t rax_7 = data_14000ddfc;
                rax = r15_1;
                rdx_1 = rcx_5;
                uint64_t r8_1 = r15_1;
                
                if ((~rax_7 * rax_7) & 1)
                {
                    while (true)
                    {
                        (data_14000d2d8 - 0x605ba99008c5628a)(&data_14000dc14, &data_14000b31e);
                        arg1[r8_1] = *(rcx_5 + &data_14000dc14);
                        char rax_11 = *(rcx_5 + 0x14000dc15);
                        rcx_5 += 2;
                        arg1[r8_1 + 1] = rax_11;
                        r8_1 += 2;
                        
                        if (data_14000ddf8 < 0xa)
                        {
                            rax = r8_1;
                            break;
                        }
                        
                        int32_t rax_12 = data_14000ddfc;
                        rax = r8_1;
                        rdx_1 = rcx_5;
                        
                        if (!((~rax_12 * rax_12) & 1))
                            goto label_140004206;
                    }
                    
                    rdx_1 = rcx_5;
                }
            }
            
        label_140004206:
            r12_1 = rax;
            r15_1 = rax + 1;
            r13_1 = rdx_1;
        } while (rax + 1 <= 0x9f);
    }
    
    int32_t rcx_9;
    
    do
    {
        arg1[rax] = 0;
        
        if (data_14000ddf8 < 0xa)
            break;
        
        rcx_9 = data_14000ddfc;
    } while ((~rcx_9 * rcx_9) & 1);
}

void* sub_140004330(int16_t* arg1, int32_t arg2)
{
    if (arg1 && *arg1 == 0x5a4d)
    {
        int64_t rax_2 = *(arg1 + 0x3c);
        
        if (*(arg1 + rax_2) == 0x4550)
        {
            uint64_t r9_1 = *(arg1 + rax_2 + 0x88);
            
            if (!r9_1)
                return nullptr;
            
            int32_t r8_2 = *(arg1 + rax_2 + 0x8c);
            
            if (!r8_2)
                return nullptr;
            
            uint64_t rax_4 = *(arg1 + r9_1 + 0x1c);
            
            if (rax_4 != -(arg1))
            {
                int32_t r10_2 = arg2 - *(arg1 + r9_1 + 0x10);
                
                if (arg2 >= *(arg1 + r9_1 + 0x10) && r10_2 < *(arg1 + r9_1 + 0x14))
                {
                    int32_t rdx = r9_1;
                    uint64_t rax_6 = *(rax_4 + arg1 + (r10_2 << 2));
                    void* rsi_2 = arg1 + rax_6;
                    
                    if (rax_6 < rdx || rax_6 >= r8_2 + rdx)
                        return rsi_2;
                    
                    void* rax_3;
                    
                    while (true)
                    {
                        rax_3 = (data_14000d2e0 + 0x3f9fe3c55f5f6418)(rsi_2);
                        
                        if (data_14000de00 < 0xa)
                            break;
                        
                        int32_t rcx_1 = data_14000de04;
                        int32_t rdx_4 = (~rcx_1 * rcx_1) & 1;
                        
                        if (!rdx_4)
                            break;
                        
                        (data_14000d2e0 + 0x3f9fe3c55f5f6418)(rsi_2, rdx_4);
                    }
                    
                    return rax_3;
                }
            }
        }
    }
    
    return nullptr;
}

int64_t sub_140004420(void* arg1, int512_t arg2 @ zmm1)
{
    int64_t var_20 = -2;
    void var_68;
    sub_1400044f0(&var_68, arg1);
    sub_1400014e0(&data_14000d6e0, &var_68, arg2);
    void* rax_1 = data_14000d2e8 + 0x6fd844d5e27021f;
    
    while (true)
    {
        int32_t result = rax_1(arg1);
        
        if (data_14000de08 >= 0xa)
            result = data_14000de0c;
        
        if (data_14000de08 < 0xa || !((~result * result) & 1))
            return result;
        
        (data_14000d2e8 + 0x6fd844d5e27021f)(arg1);
        rax_1 = data_14000d2e8 + 0x6fd844d5e27021f;
    }
}

int64_t sub_1400044c0(int64_t arg1, void* arg2)
{
    void* arg_10 = arg2;
    return (0x6fd844d5e27021f + data_14000d2e8)(*(arg2 + 0x60));
}

void* sub_1400044f0(void* arg1, void* arg2)
{
    int64_t var_18 = -2;
    void* result = arg1;
    *(arg1 + 0x38) = 0;
    int64_t* rax = *(arg2 + 0x38);
    
    if (rax)
    {
        int64_t* rcx = rax;
        void* result_1 = result;
        
        while (true)
        {
            result = result_1;
            *(result + 0x38) = (**rcx)();
            
            if (data_14000de10 < 0xa)
                break;
            
            int32_t rax_3 = data_14000de14;
            
            if (!((~rax_3 * rax_3) & 1))
                break;
            
            int64_t* rcx_5 = *(arg2 + 0x38);
            *(result_1 + 0x38) = (**rcx_5)(rcx_5);
            rcx = *(arg2 + 0x38);
        }
    }
    
    return result;
}

int64_t sub_140004580(int64_t arg1, void* arg2)
{
    void* arg_10 = arg2;
    return (0x1527d64ae07db3cb + data_14000d2f0)(*(arg2 + 0x28));
}

struct std::_Func_base<void,class std::chrono::duration<int64_t,struct std::ratio<1,1000> > const& __ptr64>::std::_Func_impl_no_alloc<class `void __cdecl SetupBreakpointDetector(void)'::`1'::<lambda_1>, void, class std::chrono::duration<__int64, struct std::ratio<1, 1000>> const &>::VTable** sub_1400045b0(int64_t arg1, struct std::_Func_base<void,class std::chrono::duration<int64_t,struct std::ratio<1,1000> > const& __ptr64>::std::_Func_impl_no_alloc<class `void __cdecl SetupBreakpointDetector(void)'::`1'::<lambda_1>, void, class std::chrono::duration<__int64, struct std::ratio<1, 1000>> const &>::VTable** arg2)
{
    while (true)
    {
        *arg2 = &std::_Func_impl_no_alloc<class `void __cdecl SetupBreakpointDetector(void)'::`1'::<lambda_1>, void, class std::chrono::duration<__int64, struct std::ratio<1, 1000>> const &>::`vftable'{for `std::_Func_base<void,class std::chrono::duration<int64_t,struct std::ratio<1,1000> > const& __ptr64>'};
        
        if (data_14000de18 >= 0xa)
        {
            int32_t rdx = data_14000de1c;
            
            if ((~rdx * rdx) & 1)
                continue;
        }
        
        if (data_14000de20 < 0xa)
            break;
        
        int32_t rdx_1 = data_14000de24;
        
        if (!((~rdx_1 * rdx_1) & 1))
            break;
        
        *arg2 = &std::_Func_impl_no_alloc<class `void __cdecl SetupBreakpointDetector(void)'::`1'::<lambda_1>, void, class std::chrono::duration<__int64, struct std::ratio<1, 1000>> const &>::`vftable'{for `std::_Func_base<void,class std::chrono::duration<int64_t,struct std::ratio<1,1000> > const& __ptr64>'};
        
        if (data_14000de18 >= 0xa)
        {
            int32_t rdx_2 = data_14000de1c;
            
            if ((~rdx_2 * rdx_2) & 1)
            {
                int32_t rdx_3;
                
                do
                {
                    *arg2 = &std::_Func_impl_no_alloc<class `void __cdecl SetupBreakpointDetector(void)'::`1'::<lambda_1>, void, class std::chrono::duration<__int64, struct std::ratio<1, 1000>> const &>::`vftable'{for `std::_Func_base<void,class std::chrono::duration<int64_t,struct std::ratio<1,1000> > const& __ptr64>'};
                    rdx_3 = data_14000de1c;
                    
                    if (data_14000de18 < 0xa)
                        break;
                } while ((~rdx_3 * rdx_3) & 1);
            }
        }
    }
    
    return arg2;
}

struct std::_Func_base<void,class std::chrono::duration<int64_t,struct std::ratio<1,1000> > const& __ptr64>::std::_Func_impl_no_alloc<class `void __cdecl SetupBreakpointDetector(void)'::`1'::<lambda_1>, void, class std::chrono::duration<__int64, struct std::ratio<1, 1000>> const &>::VTable** sub_140004660(int64_t arg1, struct std::_Func_base<void,class std::chrono::duration<int64_t,struct std::ratio<1,1000> > const& __ptr64>::std::_Func_impl_no_alloc<class `void __cdecl SetupBreakpointDetector(void)'::`1'::<lambda_1>, void, class std::chrono::duration<__int64, struct std::ratio<1, 1000>> const &>::VTable** arg2)
{
    while (true)
    {
        *arg2 = &std::_Func_impl_no_alloc<class `void __cdecl SetupBreakpointDetector(void)'::`1'::<lambda_1>, void, class std::chrono::duration<__int64, struct std::ratio<1, 1000>> const &>::`vftable'{for `std::_Func_base<void,class std::chrono::duration<int64_t,struct std::ratio<1,1000> > const& __ptr64>'};
        
        if (data_14000de28 >= 0xa)
        {
            int32_t rdx = data_14000de2c;
            
            if ((~rdx * rdx) & 1)
                continue;
        }
        
        if (data_14000de30 < 0xa)
            break;
        
        int32_t rdx_1 = data_14000de34;
        
        if (!((~rdx_1 * rdx_1) & 1))
            break;
        
        *arg2 = &std::_Func_impl_no_alloc<class `void __cdecl SetupBreakpointDetector(void)'::`1'::<lambda_1>, void, class std::chrono::duration<__int64, struct std::ratio<1, 1000>> const &>::`vftable'{for `std::_Func_base<void,class std::chrono::duration<int64_t,struct std::ratio<1,1000> > const& __ptr64>'};
        
        if (data_14000de28 >= 0xa)
        {
            int32_t rdx_2 = data_14000de2c;
            
            if ((~rdx_2 * rdx_2) & 1)
            {
                int32_t rdx_3;
                
                do
                {
                    *arg2 = &std::_Func_impl_no_alloc<class `void __cdecl SetupBreakpointDetector(void)'::`1'::<lambda_1>, void, class std::chrono::duration<__int64, struct std::ratio<1, 1000>> const &>::`vftable'{for `std::_Func_base<void,class std::chrono::duration<int64_t,struct std::ratio<1,1000> > const& __ptr64>'};
                    rdx_3 = data_14000de2c;
                    
                    if (data_14000de28 < 0xa)
                        break;
                } while ((~rdx_3 * rdx_3) & 1);
            }
        }
    }
    
    return arg2;
}

void sub_140004710() __noreturn
{
    (data_14000d300 - 0x23a9323aaf425255)(&data_14000dc60, &data_14000b433);
    (data_14000d308 - 0x23a9323aaf425255)(&data_14000dc60);
    (data_14000d310 - 0x23a9323aaf425255)(&data_14000db9c, &data_14000b1b2);
    (data_14000d308 - 0x23a9323aaf425255)(&data_14000db9c);
    void var_18;
    (data_14000d318 - 0x23a9323aaf425255)(&var_18, 8);
    (-0x23a9323aaf425255 + data_14000d320)(0);
    breakpoint();
}

int64_t sub_1400047a0() __pure
{
    return &data_14000d0a0;
}

void sub_1400047b0(int64_t arg1, char arg2)
{
    if (!arg2)
        return;
    
    while (true)
    {
        (data_14000d328 + 0x1dc234cc6cfc062)(arg1, 0x10);
        int32_t rax;
        
        if (data_14000de38 >= 0xa)
        {
            rax = data_14000de3c;
            
            if ((~rax * rax) & 1)
            {
                (data_14000d328 + 0x1dc234cc6cfc062)(arg1, 0x10);
                continue;
            }
        }
        
        if (data_14000de40 < 0xa)
            break;
        
        rax = data_14000de44;
        
        if (!((~rax * rax) & 1))
            break;
        
        (data_14000d328 + 0x1dc234cc6cfc062)(arg1, 0x10);
        
        if (data_14000de38 >= 0xa)
        {
            int32_t rax_7 = data_14000de3c;
            
            if ((~rax_7 * rax_7) & 1)
            {
                int32_t rax_12;
                
                do
                {
                    (data_14000d328 + 0x1dc234cc6cfc062)(arg1, 0x10);
                    (data_14000d328 + 0x1dc234cc6cfc062)(arg1, 0x10);
                    rax_12 = data_14000de3c;
                    
                    if (data_14000de38 < 0xa)
                        break;
                } while ((~rax_12 * rax_12) & 1);
            }
        }
    }
}

int64_t sub_1400048d0(int64_t arg1) __pure
{
    return arg1 + 8;
}

int64_t sub_1400048e0(void* arg1, int64_t* arg2, int64_t arg3)
{
    void* var_98;
    int64_t* rsp = &var_98;
    void var_48;
    int64_t rax_1 = __security_cookie ^ &var_48;
    void* rsp_2;
    void* r12_1;
    int32_t rax_3;
    
    do
    {
        __chkstk(0x10);
        r12_1 = rsp - 0x10;
        __chkstk(0x10);
        rsp_2 = rsp - 0x20;
        __chkstk(0x20);
        __chkstk(0x20);
        *r12_1 = arg3;
        *rsp_2 = arg2;
        __builtin_memset(arg1, 0, 0x80);
        memset(arg1 + 0x1080, 0, 0x1000);
        rsp = rsp_2 - 0x40;
        
        if (data_14000de48 < 0xa)
            break;
        
        rax_3 = data_14000de4c;
    } while ((~rax_3 * rax_3) & 1);
    __builtin_memset(arg1 + 0x2080, 0, 0x14);
    int64_t result = *(arg1 + 0x2088);
    
    if (result < *r12_1)
    {
        void* r10_1 = rsp_2 - 0x20;
        void* r11_1 = rsp_2 - 0x40;
        var_98 = arg1 + 0x80;
        int64_t* r13_2 = arg2;
        int64_t* rcx_7 = r13_2;
        int64_t* rdi_2 = r13_2;
        void* var_68_1 = r12_1;
        int64_t i;
        
        do
        {
            *(arg1 + 0x2088) = result + 1;
            uint64_t rdx = *(rcx_7 + result);
            
            if (rdx > 0x15)
                break;
            
            int64_t rax_4;
            int64_t* rax_5;
            int64_t* r8;
            
            switch (rdx)
            {
                case 0:
                {
                    rax_5 = r13_2;
                    r8 = rdi_2;
                    break;
                }
                case 1:
                {
                    *(arg1 + 0x2088) = result + 2;
                    uint64_t rdx_4 = *(rcx_7 + result + 1);
                    
                    if (rdx_4 < 0)
                    {
                        uint64_t rdx_74 = rdx_4 & 0x7f;
                        int64_t r9_87 = *(rcx_7 + result + 2);
                        *(arg1 + 0x2088) = result + 0xa;
                        *(arg1 + (rdx_74 << 3)) = r9_87;
                        
                        if (data_14000de48 >= 0xa)
                        {
                            int32_t r9_88 = data_14000de4c;
                            
                            if ((~r9_88 * r9_88) & 1)
                            {
                                int64_t rax_72 = result + 0x12;
                                int32_t r8_59;
                                
                                do
                                {
                                    int64_t r8_57 = *(rcx_7 + rax_72 - 8);
                                    *(arg1 + 0x2088) = rax_72;
                                    *(arg1 + (rdx_74 << 3)) = r8_57;
                                    int64_t r8_58 = *(rcx_7 + rax_72);
                                    *(arg1 + 0x2088) = rax_72 + 8;
                                    *(arg1 + (rdx_74 << 3)) = r8_58;
                                    
                                    if (data_14000de48 < 0xa)
                                        break;
                                    
                                    r8_59 = data_14000de4c;
                                    rax_72 += 0x10;
                                } while ((~r8_59 * r8_59) & 1);
                            }
                        }
                    }
                    else
                    {
                        *(arg1 + 0x2088) = result + 3;
                        *(arg1 + (rdx_4 << 3)) = *(arg1 + (*(rcx_7 + result + 2) << 3));
                        
                        if (data_14000de48 >= 0xa)
                        {
                            int32_t r9_5 = data_14000de4c;
                            
                            if ((~r9_5 * r9_5) & 1)
                            {
                                int64_t rax_6 = result + 5;
                                int32_t r8_6;
                                
                                do
                                {
                                    *(arg1 + 0x2088) = rax_6 - 1;
                                    *(arg1 + (rdx_4 << 3)) = *(arg1 + (*(rcx_7 + rax_6 - 2) << 3));
                                    *(arg1 + 0x2088) = rax_6;
                                    *(arg1 + (rdx_4 << 3)) = *(arg1 + (*(rcx_7 + rax_6 - 1) << 3));
                                    
                                    if (data_14000de48 < 0xa)
                                        break;
                                    
                                    r8_6 = data_14000de4c;
                                    rax_6 += 2;
                                } while ((~r8_6 * r8_6) & 1);
                            }
                        }
                    }
                    
                    rax_5 = r13_2;
                    r8 = rdi_2;
                    break;
                }
                case 2:
                {
                    int64_t rax_16 = result + 2;
                    
                    while (true)
                    {
                        *(arg1 + 0x2088) = rax_16;
                        uint64_t rdx_18 = *(rcx_7 + rax_16 - 1);
                        *(arg1 + 0x2088) = rax_16 + 1;
                        *(arg1 + (rdx_18 << 3)) += *(arg1 + (*(rcx_7 + rax_16) << 3));
                        
                        if (data_14000de48 < 0xa)
                            break;
                        
                        int32_t rdx_19 = data_14000de4c;
                        
                        if (!((~rdx_19 * rdx_19) & 1))
                            break;
                        
                        *(arg1 + 0x2088) = rax_16 + 2;
                        uint64_t rdx_21 = *(rcx_7 + rax_16 + 1);
                        *(arg1 + 0x2088) = rax_16 + 3;
                        *(arg1 + (rdx_21 << 3)) += *(arg1 + (*(rcx_7 + rax_16 + 2) << 3));
                        rax_16 += 4;
                    }
                    
                    rax_5 = r13_2;
                    r8 = rdi_2;
                    break;
                }
                case 3:
                {
                    int64_t rax_19 = result + 2;
                    
                    while (true)
                    {
                        *(arg1 + 0x2088) = rax_19;
                        uint64_t rdx_24 = *(rcx_7 + rax_19 - 1);
                        *(arg1 + 0x2088) = rax_19 + 1;
                        *(arg1 + (rdx_24 << 3)) *= *(arg1 + (*(rcx_7 + rax_19) << 3));
                        
                        if (data_14000de48 < 0xa)
                            break;
                        
                        int32_t rdx_25 = data_14000de4c;
                        
                        if (!((~rdx_25 * rdx_25) & 1))
                            break;
                        
                        *(arg1 + 0x2088) = rax_19 + 2;
                        uint64_t rdx_27 = *(rcx_7 + rax_19 + 1);
                        *(arg1 + 0x2088) = rax_19 + 3;
                        *(arg1 + (rdx_27 << 3)) *= *(arg1 + (*(rcx_7 + rax_19 + 2) << 3));
                        rax_19 += 4;
                    }
                    
                    rax_5 = r13_2;
                    r8 = rdi_2;
                    break;
                }
                case 4:
                {
                    *(arg1 + 0x2088) = result + 2;
                    uint32_t rdx_10 = *(rcx_7 + result + 1);
                    *(arg1 + 0x2088) = result + 3;
                    uint64_t rbx_11 = *(rcx_7 + result + 2);
                    int64_t r9_20 = *(arg1 + (rbx_11 << 3));
                    
                    if (r9_20)
                    {
                        uint64_t r14_2 = rdx_10;
                        int64_t rax_12 = *(arg1 + (r14_2 << 3));
                        uint64_t rax_13;
                        
                        rax_13 = !((rax_12 | r9_20) >> 0x20) ? COMBINE(0, rax_12) / r9_20
                            : COMBINE(0, rax_12) / r9_20;
                        
                        *(arg1 + (r14_2 << 3)) = rax_13;
                        
                        if (data_14000de48 >= 0xa)
                        {
                            int32_t rdx_80 = data_14000de4c;
                            
                            if ((~rdx_80 * rdx_80) & 1)
                            {
                                int32_t rdx_93;
                                
                                do
                                {
                                    int64_t r9_98 = *(arg1 + (rbx_11 << 3));
                                    uint64_t rax_75;
                                    
                                    rax_75 = !((rax_13 | r9_98) >> 0x20)
                                        ? COMBINE(0, rax_13) / r9_98 : COMBINE(0, rax_13) / r9_98;
                                    
                                    *(arg1 + (r14_2 << 3)) = rax_75;
                                    int64_t r9_99 = *(arg1 + (rbx_11 << 3));
                                    
                                    rax_13 = !((rax_75 | r9_99) >> 0x20)
                                        ? COMBINE(0, rax_75) / r9_99 : COMBINE(0, rax_75) / r9_99;
                                    
                                    *(arg1 + (r14_2 << 3)) = rax_13;
                                    
                                    if (data_14000de48 < 0xa)
                                        break;
                                    
                                    rdx_93 = data_14000de4c;
                                } while ((~rdx_93 * rdx_93) & 1);
                            }
                        }
                    }
                    
                    rax_5 = r13_2;
                    r8 = rdi_2;
                    break;
                }
                case 5:
                {
                    *(arg1 + 0x2088) = result + 2;
                    uint32_t rdx_35 = *(rcx_7 + result + 1);
                    *(arg1 + 0x2088) = result + 3;
                    uint64_t rbx_27 = *(rcx_7 + result + 2);
                    int64_t r9_60 = *(arg1 + (rbx_27 << 3));
                    
                    if (r9_60)
                    {
                        uint64_t r14_9 = rdx_35;
                        int64_t rax_27 = *(arg1 + (r14_9 << 3));
                        uint64_t rax_28;
                        
                        rax_28 = !((rax_27 | r9_60) >> 0x20) ? COMBINE(0, rax_27) % r9_60
                            : COMBINE(0, rax_27) % r9_60;
                        
                        *(arg1 + (r14_9 << 3)) = rax_28;
                        
                        if (data_14000de48 >= 0xa)
                        {
                            int32_t rdx_95 = data_14000de4c;
                            
                            if ((~rdx_95 * rdx_95) & 1)
                            {
                                int32_t rdx_108;
                                
                                do
                                {
                                    int64_t r9_104 = *(arg1 + (rbx_27 << 3));
                                    uint64_t rax_76;
                                    
                                    rax_76 = !((rax_28 | r9_104) >> 0x20)
                                        ? COMBINE(0, rax_28) % r9_104
                                        : COMBINE(0, rax_28) % r9_104;
                                    
                                    *(arg1 + (r14_9 << 3)) = rax_76;
                                    int64_t r9_105 = *(arg1 + (rbx_27 << 3));
                                    
                                    rax_28 = !((rax_76 | r9_105) >> 0x20)
                                        ? COMBINE(0, rax_76) % r9_105
                                        : COMBINE(0, rax_76) % r9_105;
                                    
                                    *(arg1 + (r14_9 << 3)) = rax_28;
                                    
                                    if (data_14000de48 < 0xa)
                                        break;
                                    
                                    rdx_108 = data_14000de4c;
                                } while ((~rdx_108 * rdx_108) & 1);
                            }
                        }
                    }
                    
                    rax_5 = r13_2;
                    r8 = rdi_2;
                    break;
                }
                case 6:
                {
                    *(arg1 + 0x2088) = result + 2;
                    uint64_t rdx_49 = *(rcx_7 + result + 1);
                    *(arg1 + 0x2088) = result + 3;
                    uint64_t rax_44;
                    rax_44 = *(arg1 + (rdx_49 << 3)) == *(arg1 + (*(rcx_7 + result + 2) << 3));
                    int32_t rdx_51;
                    rdx_51 = rax_44;
                    *(arg1 + 0x2090) = rdx_51;
                    rax_5 = r13_2;
                    r8 = rdi_2;
                    break;
                }
                case 7:
                {
                    rax_4 = *(rcx_7 + result + 1);
                label_140004a21:
                    *(arg1 + 0x2088) = rax_4;
                    rax_5 = r13_2;
                    r8 = rdi_2;
                    break;
                }
                case 8:
                {
                    if (*(arg1 + 0x2090))
                        goto label_140004d80;
                    
                    goto label_140005502;
                }
                case 9:
                {
                    if (*(arg1 + 0x2090))
                    {
                    label_140005502:
                        rax_4 = result + 9;
                        goto label_140004a21;
                    }
                    
                label_140004d80:
                    rax_4 = *(rcx_7 + result + 1);
                    goto label_140004a21;
                }
                case 0xa:
                {
                    int64_t rdx_55 = *(arg1 + 0x2080);
                    
                    if (rdx_55 <= 0x1ff)
                    {
                        *(arg1 + 0x2080) = rdx_55 + 1;
                        *(arg1 + (rdx_55 << 3) + 0x1080) = result + 9;
                        
                        while (data_14000de48 >= 0xa)
                        {
                            int32_t rax_48 = data_14000de4c;
                            
                            if (!((~rax_48 * rax_48) & 1))
                                break;
                            
                            int64_t rax_49 = *(arg1 + 0x2080);
                            int64_t rdx_61 = *(arg1 + 0x2088) + 8;
                            *(arg1 + 0x2080) = rax_49 + 1;
                            *(arg1 + (rax_49 << 3) + 0x1080) = rdx_61;
                            int64_t rax_50 = *(arg1 + 0x2080);
                            int64_t rdx_63 = *(arg1 + 0x2088) + 8;
                            *(arg1 + 0x2080) = rax_50 + 1;
                            *(arg1 + (rax_50 << 3) + 0x1080) = rdx_63;
                        }
                    }
                    
                    rax_4 = *(rcx_7 + *(arg1 + 0x2088));
                    goto label_140004a21;
                }
                case 0xb:
                {
                    int64_t rax_10 = *(arg1 + 0x2080);
                    
                    if (rax_10)
                    {
                        *(arg1 + 0x2080) = rax_10 - 1;
                        rax_4 = *(arg1 + (rax_10 << 3) + 0x1078);
                        goto label_140004a21;
                    }
                    
                    rax_5 = r13_2;
                    r8 = rdi_2;
                    break;
                }
                case 0xc:
                {
                    *(arg1 + 0x2088) = result + 2;
                    uint32_t r9_21 = *(rcx_7 + result + 1);
                    int64_t rdx_17 = *(rcx_7 + result + 2);
                    *(arg1 + 0x2088) = result + 0xa;
                    
                    if (rdx_17 <= 0xfff)
                    {
                        uint64_t rax_15 = r9_21;
                        *(arg1 + (rax_15 << 3)) = *(arg1 + rdx_17 + 0x80);
                        
                        if (data_14000de48 >= 0xa)
                        {
                            int32_t r9_23 = data_14000de4c;
                            
                            if ((~r9_23 * r9_23) & 1)
                            {
                                int32_t r8_12;
                                
                                do
                                {
                                    *(arg1 + (rax_15 << 3)) = *(arg1 + rdx_17 + 0x80);
                                    *(arg1 + (rax_15 << 3)) = *(arg1 + rdx_17 + 0x80);
                                    
                                    if (data_14000de48 < 0xa)
                                        break;
                                    
                                    r8_12 = data_14000de4c;
                                } while ((~r8_12 * r8_12) & 1);
                            }
                        }
                    }
                    
                    rax_5 = r13_2;
                    r8 = rdi_2;
                    break;
                }
                case 0xd:
                {
                    int64_t rdx_47 = *(rcx_7 + result + 1);
                    *(arg1 + 0x2088) = result + 0xa;
                    
                    if (rdx_47 <= 0xfff)
                    {
                        uint64_t rax_43 = *(rcx_7 + result + 1 + 8);
                        *(arg1 + rdx_47 + 0x80) = *(arg1 + (rax_43 << 3));
                        
                        if (data_14000de48 >= 0xa)
                        {
                            int32_t r9_64 = data_14000de4c;
                            
                            if ((~r9_64 * r9_64) & 1)
                            {
                                int32_t r8_43;
                                
                                do
                                {
                                    *(arg1 + rdx_47 + 0x80) = *(arg1 + (rax_43 << 3));
                                    *(arg1 + rdx_47 + 0x80) = *(arg1 + (rax_43 << 3));
                                    
                                    if (data_14000de48 < 0xa)
                                        break;
                                    
                                    r8_43 = data_14000de4c;
                                } while ((~r8_43 * r8_43) & 1);
                            }
                        }
                    }
                    
                    rax_5 = r13_2;
                    r8 = rdi_2;
                    break;
                }
                case 0xe:
                {
                    *(arg1 + 0x2088) = result + 2;
                    int64_t r9_11 = *(arg1 + 0x2080);
                    
                    if (r9_11 <= 0x1ff)
                    {
                        uint64_t rax_8 = *(rcx_7 + result + 1);
                        int64_t rdx_7 = *(arg1 + (rax_8 << 3));
                        *(arg1 + 0x2080) = r9_11 + 1;
                        *(arg1 + (r9_11 << 3) + 0x1080) = rdx_7;
                        
                        if (data_14000de48 >= 0xa)
                        {
                            int32_t r9_12 = data_14000de4c;
                            
                            if ((~r9_12 * r9_12) & 1)
                            {
                                int32_t r8_9;
                                
                                do
                                {
                                    int64_t r8_7 = *(arg1 + 0x2080);
                                    *(arg1 + 0x2080) = r8_7 + 1;
                                    *(arg1 + (r8_7 << 3) + 0x1080) = rdx_7;
                                    rdx_7 = *(arg1 + (rax_8 << 3));
                                    int64_t r8_8 = *(arg1 + 0x2080);
                                    *(arg1 + 0x2080) = r8_8 + 1;
                                    *(arg1 + (r8_8 << 3) + 0x1080) = rdx_7;
                                    
                                    if (data_14000de48 < 0xa)
                                        break;
                                    
                                    r8_9 = data_14000de4c;
                                } while ((~r8_9 * r8_9) & 1);
                            }
                        }
                    }
                    
                    rax_5 = r13_2;
                    r8 = rdi_2;
                    break;
                }
                case 0xf:
                {
                    *(arg1 + 0x2088) = result + 2;
                    int64_t rdx_22 = *(arg1 + 0x2080);
                    
                    if (rdx_22)
                    {
                        uint64_t rax_18 = *(rcx_7 + result + 1);
                        *(arg1 + 0x2080) = rdx_22 - 1;
                        *(arg1 + (rax_18 << 3)) = *(arg1 + (rdx_22 << 3) + 0x1078);
                        
                        if (data_14000de48 >= 0xa)
                        {
                            int32_t r9_37 = data_14000de4c;
                            
                            if ((~r9_37 * r9_37) & 1)
                            {
                                int64_t rdx_23 = rdx_22 - 3;
                                int32_t r8_19;
                                
                                do
                                {
                                    *(arg1 + 0x2080) = rdx_23 + 1;
                                    *(arg1 + (rax_18 << 3)) = *(arg1 + (rdx_23 << 3) + 0x1088);
                                    *(arg1 + 0x2080) = rdx_23;
                                    *(arg1 + (rax_18 << 3)) = *(arg1 + (rdx_23 << 3) + 0x1080);
                                    
                                    if (data_14000de48 < 0xa)
                                        break;
                                    
                                    r8_19 = data_14000de4c;
                                    rdx_23 -= 2;
                                } while ((~r8_19 * r8_19) & 1);
                            }
                        }
                    }
                    
                    rax_5 = r13_2;
                    r8 = rdi_2;
                    break;
                }
                case 0x10:
                {
                    rcx_7 = *rsp_2;
                    uint64_t r9_10 = *(arg1 + 0x80);
                    *(arg1 + 0x2088) = result + 2;
                    uint64_t rdx_6 = *(rcx_7 + result + 1);
                    *(arg1 + 0x2088) = result + 3;
                    
                    if (r9_10 >= 0xa)
                        r9_10 = 0xa;
                    
                    if (r9_10 <= 0)
                        r9_10 = 0;
                    
                    int64_t r14_1;
                    
                    if (r9_10)
                    {
                        int64_t r15_12 = 0;
                        int64_t rbx_35 = 0;
                        int64_t r12_11 = 1;
                        int64_t rdi_11;
                        
                        do
                        {
                            r14_1 = rbx_35 + r12_11 * *(arg1 + (r15_12 << 3) + 0x84);
                            rdi_11 = r15_12 + 1;
                            rbx_35 = r14_1;
                            r15_12 = rdi_11;
                            r12_11 *= *(arg1 + (*(rcx_7 + result + 2) << 3));
                        } while (r9_10 != rdi_11);
                    }
                    else
                        r14_1 = 0;
                    
                    *(arg1 + (rdx_6 << 3)) = r14_1;
                    
                    if (data_14000de48 < 0xa)
                    {
                        rax_5 = rcx_7;
                        r8 = rcx_7;
                        r12_1 = var_68_1;
                    }
                    else
                    {
                        int32_t r9_80 = data_14000de4c;
                        r12_1 = var_68_1;
                        
                        if ((~r9_80 * r9_80) & 1)
                        {
                            int32_t r8_52;
                            
                            do
                            {
                                *(arg1 + (rdx_6 << 3)) = r14_1;
                                
                                if (data_14000de48 < 0xa)
                                    break;
                                
                                r8_52 = data_14000de4c;
                            } while ((~r8_52 * r8_52) & 1);
                        }
                        
                        rax_5 = rcx_7;
                        r8 = rcx_7;
                    }
                    break;
                }
                case 0x11:
                {
                    rcx_7 = *rsp_2;
                    *(arg1 + 0x2088) = result + 2;
                    uint32_t r9_50 = *(rcx_7 + result + 1);
                    void* rdx_29 = *(rcx_7 + result + 2);
                    *(arg1 + 0x2088) = result + 0xa;
                    void* rdi_5 = *(rcx_7 + result + 0xa);
                    *(arg1 + 0x2088) = result + 0x12;
                    
                    if (rdx_29 > 0xfdf || rdi_5 > 0xfdf)
                    {
                        rax_5 = rcx_7;
                        r8 = rcx_7;
                    }
                    else
                    {
                        uint64_t rax_21 = r9_50;
                        void* rcx_10 = var_98;
                        void* rdx_30 = rdx_29 + rcx_10;
                        void* r8_23 = rdi_5 + rcx_10;
                        void* rax_22 = r10_1;
                        void* var_90_1 = r8_23;
                        
                        while (true)
                        {
                            int128_t zmm0_1 = *rdx_30;
                            *(rax_22 + 0x10) = *(rdx_30 + 0x10);
                            *rax_22 = zmm0_1;
                            zmm0_1 = *r8_23;
                            *(r11_1 + 0x10) = *(r8_23 + 0x10);
                            *r11_1 = zmm0_1;
                            int64_t r14_3 = *rax_22;
                            int64_t r9_51 = *(rax_22 + 8);
                            int64_t r15_2 = *r11_1;
                            int64_t rbx_22 = *(r11_1 + 8);
                            int64_t r13_3 = *(r11_1 + 0x10);
                            int64_t r8_24 = *(r11_1 + 0x18);
                            int64_t r14_5 = *(rax_22 + 0x10);
                            r10_1 = rax_22;
                            int64_t r15_4 = *(rax_22 + 0x18);
                            int64_t r8_29 = (r8_24 * r15_4 + rbx_22 * r14_5) * 0xe8d4a51000
                                + r13_3 * r9_51 + r15_2 * r14_3
                                + (r13_3 * r15_4 + r15_2 * r14_5) * 0x5f5e100
                                + (r9_51 * r8_24 + r14_3 * rbx_22) * 0x2710;
                            *(arg1 + (rax_21 << 3)) = r8_29;
                            
                            if (data_14000de48 < 0xa)
                                break;
                            
                            int32_t rcx_16 = data_14000de4c;
                            
                            if (!((~rcx_16 * rcx_16) & 1))
                                break;
                            
                            zmm0_1 = *rdx_30;
                            rax_22 = r10_1;
                            *(r10_1 + 0x10) = *(rdx_30 + 0x10);
                            *r10_1 = zmm0_1;
                            zmm0_1 = *var_90_1;
                            *(r11_1 + 0x10) = *(var_90_1 + 0x10);
                            *r11_1 = zmm0_1;
                            int64_t r14_6 = *r10_1;
                            int64_t r9_55 = *(r10_1 + 8);
                            int64_t rcx_18 = *r11_1;
                            int64_t rbx_24 = *(r11_1 + 8);
                            int64_t r15_5 = *(r11_1 + 0x10);
                            int64_t r12_4 = *(r11_1 + 0x18);
                            int64_t rcx_20 = *(r10_1 + 0x10);
                            int64_t r14_8 = *(r10_1 + 0x18);
                            int64_t r12_9 = (r12_4 * r14_8 + rbx_24 * rcx_20) * 0xe8d4a51000
                                + r15_5 * r9_55 + rcx_18 * r14_6
                                + (r15_5 * r14_8 + rcx_18 * rcx_20) * 0x5f5e100
                                + (r9_55 * r12_4 + r14_6 * rbx_24) * 0x2710;
                            r8_23 = var_90_1;
                            *(arg1 + (rax_21 << 3)) = r12_9;
                        }
                        
                        rax_5 = rcx_7;
                        r8 = rcx_7;
                        r12_1 = var_68_1;
                    }
                    break;
                }
                case 0x12:
                {
                    rcx_7 = *rsp_2;
                    *(arg1 + 0x2088) = result + 2;
                    uint64_t rdx_53 = *(rcx_7 + result + 1);
                    *(arg1 + 0x2088) = result + 3;
                    int64_t rax_46 = *(arg1 + (*(rcx_7 + result + 2) << 3));
                    int64_t rbx_33;
                    
                    if (!rax_46)
                        rbx_33 = 0;
                    else
                    {
                        if (rax_46 >= 0x64)
                            rax_46 = 0x64;
                        
                        if (rax_46 < 2)
                            rbx_33 = 0;
                        else
                        {
                            int64_t r9_70 = 1;
                            int64_t rdi_9 = 0;
                            int64_t r14_11 = 1;
                            int64_t r15_11;
                            
                            do
                            {
                                int64_t r8_46 = rdi_9 + r14_11;
                                r15_11 = r9_70 + 1;
                                r9_70 = r15_11;
                                rdi_9 = r14_11;
                                rbx_33 = r8_46;
                                r14_11 = r8_46;
                            } while (r15_11 < rax_46);
                        }
                    }
                    
                    *(arg1 + (rdx_53 << 3)) = rbx_33;
                    
                    if (data_14000de48 < 0xa)
                    {
                        rax_5 = rcx_7;
                        r8 = rcx_7;
                    }
                    else
                    {
                        int32_t r8_50 = data_14000de4c;
                        
                        if ((~r8_50 * r8_50) & 1)
                        {
                            int32_t r8_51;
                            
                            do
                            {
                                *(arg1 + (rdx_53 << 3)) = rbx_33;
                                
                                if (data_14000de48 < 0xa)
                                    break;
                                
                                r8_51 = data_14000de4c;
                            } while ((~r8_51 * r8_51) & 1);
                        }
                        
                        rax_5 = rcx_7;
                        r8 = rcx_7;
                    }
                    break;
                }
                case 0x13:
                {
                    rdi_2 = *rsp_2;
                    *(arg1 + 0x2088) = result + 2;
                    uint32_t rbx_34 = *(rdi_2 + result + 1);
                    *(arg1 + 0x2088) = result + 3;
                    int64_t rdx_64 = *(arg1 + (*(rdi_2 + result + 2) << 3));
                label_140005539:
                    int64_t rax_53 = rdx_64 + 1;
                    
                    if (rdx_64 + 1 >= 4)
                    {
                        int64_t r14_12 = 2;
                        int64_t rax_62;
                        
                        do
                        {
                            if (((rdx_64 + 1) | r14_12) >> 0x20)
                            {
                                if (COMBINE(0, rdx_64 + 1) % r14_12)
                                    goto label_140005584;
                                
                                rdx_64 += 1;
                                goto label_140005539;
                            }
                            
                            if (!(COMBINE(0, (rdx_64 + 1)) % r14_12))
                            {
                                rdx_64 += 1;
                                goto label_140005539;
                            }
                            
                        label_140005584:
                            rax_62 = r14_12 + 1;
                            r14_12 = rax_62;
                        } while (rax_62 * rax_62 <= rdx_64 + 1);
                        rax_53 = rdx_64 + 1;
                    }
                    
                    int32_t rdx_73;
                    
                    do
                    {
                        *(arg1 + (rbx_34 << 3)) = rax_53;
                        
                        if (data_14000de48 < 0xa)
                            break;
                        
                        rdx_73 = data_14000de4c;
                    } while ((~rdx_73 * rdx_73) & 1);
                    rax_5 = rdi_2;
                    r8 = rdi_2;
                    rcx_7 = rdi_2;
                    break;
                }
                case 0x14:
                {
                    *(arg1 + 0x2088) = result + 2;
                    uint64_t rcx_24 = *(r13_2 + result + 1);
                    *(arg1 + 0x2088) = result + 3;
                    int64_t rax_25 = *(arg1 + (*(r13_2 + result + 2) << 3));
                    int64_t rdx_33 = 1;
                    
                    if (rax_25 >= 2)
                    {
                        int64_t rbx_26 = 2;
                        int64_t r9_58 = 1;
                        int64_t rdi_8;
                        
                        do
                        {
                            r9_58 *= rbx_26;
                            rdi_8 = rbx_26 + 1;
                            
                            if (rdi_8 > 0x13)
                            {
                                rdx_33 = r9_58;
                                break;
                            }
                            
                            rbx_26 = rdi_8;
                            rdx_33 = r9_58;
                        } while (rdi_8 <= rax_25);
                    }
                    
                    *(arg1 + (rcx_24 << 3)) = rdx_33;
                    
                    while (data_14000de48 >= 0xa)
                    {
                        int32_t rdx_75 = data_14000de4c;
                        
                        if (!((~rdx_75 * rdx_75) & 1))
                            break;
                        
                        *(arg1 + (rcx_24 << 3)) = rdx_33;
                    }
                    
                    rax_5 = r13_2;
                    r8 = r13_2;
                    rcx_7 = r13_2;
                    break;
                }
                case 0x15:
                {
                    *(arg1 + 0x2088) = result + 2;
                    uint32_t rbx_28 = *(rdi_2 + result + 1);
                    int64_t r14_10 = *(rdi_2 + result + 2);
                    *(arg1 + 0x2088) = result + 0xa;
                    int64_t rdx_41 = r14_10 + 1;
                    int64_t rcx_26;
                    
                    while (true)
                    {
                        rcx_26 = rdx_41;
                        
                        if (rdx_41 < 4)
                            break;
                        
                        rcx_26 = rdx_41;
                        int64_t r9_61 = 2;
                        
                        while (true)
                        {
                            if (!((rcx_26 | r9_61) >> 0x20))
                            {
                                if (!(COMBINE(0, rcx_26) % r9_61))
                                {
                                    rdx_41 = rcx_26 + 1;
                                    break;
                                }
                            }
                            else if (!(COMBINE(0, rcx_26) % r9_61))
                            {
                                rdx_41 = rcx_26 + 1;
                                break;
                            }
                            
                            int64_t rax_39 = r9_61 + 1;
                            r9_61 = rax_39;
                            
                            if (rax_39 * rax_39 > rcx_26)
                                goto label_14000529c;
                        }
                    }
                    
                label_14000529c:
                    int64_t rax_41 = rcx_26;
                    
                    if (rcx_26 >= 0x64)
                        rax_41 = 0x64;
                    
                    int64_t r12_10;
                    
                    if (rax_41 < 2)
                        r12_10 = 0;
                    else
                    {
                        int64_t rcx_27 = 1;
                        int64_t rdx_46 = 0;
                        int64_t r9_62 = 1;
                        int64_t r15_9;
                        
                        do
                        {
                            int64_t r8_40 = rdx_46 + r9_62;
                            r15_9 = rcx_27 + 1;
                            rcx_27 = r15_9;
                            rdx_46 = r9_62;
                            r12_10 = r8_40;
                            r9_62 = r8_40;
                        } while (r15_9 < rax_41);
                    }
                    
                    int64_t rcx_34 = r12_10 - ((r12_10 / 5) & 0xfffffffffffffffe) * 5;
                    char rax_71 = 1;
                    
                    if (rcx_34 >= 2)
                    {
                        int64_t r12_13 = 2;
                        int64_t rdx_72 = 1;
                        int64_t r9_86;
                        
                        do
                        {
                            rdx_72 *= r12_13;
                            r9_86 = r12_13 + 1;
                            
                            if (r9_86 > 0x13)
                            {
                                rax_71 = rdx_72;
                                break;
                            }
                            
                            r12_13 = r9_86;
                            rax_71 = rdx_72;
                        } while (r9_86 <= rcx_34);
                    }
                    
                    uint64_t rax_74 = rbx_28;
                    uint64_t rcx_40 = (r14_10 & 0x1f) + rax_71;
                    *(arg1 + (rax_74 << 3)) = rcx_40;
                    
                    if (data_14000de48 < 0xa)
                    {
                        rax_5 = r13_2;
                        r8 = rdi_2;
                        rcx_7 = rdi_2;
                        r12_1 = var_68_1;
                    }
                    else
                    {
                        int32_t rdx_77 = data_14000de4c;
                        r12_1 = var_68_1;
                        
                        if ((~rdx_77 * rdx_77) & 1)
                        {
                            int32_t rdx_78;
                            
                            do
                            {
                                *(arg1 + (rax_74 << 3)) = rcx_40;
                                
                                if (data_14000de48 < 0xa)
                                    break;
                                
                                rdx_78 = data_14000de4c;
                            } while ((~rdx_78 * rdx_78) & 1);
                        }
                        
                        rax_5 = r13_2;
                        r8 = rdi_2;
                        rcx_7 = rdi_2;
                    }
                    break;
                }
            }
            
            rdi_2 = r8;
            r13_2 = rax_5;
            i = *(arg1 + 0x2088);
            result = i;
        } while (i < *r12_1);
    }
    
    __security_check_cookie(rax_1 ^ &var_48);
    return result;
}

int64_t sub_140005b20() __pure
{
    return &data_14000dcf8;
}

int64_t* sub_140005b30(int64_t* arg1)
{
    while (true)
    {
        __builtin_memset(arg1, 0, 0x18);
        
        if (data_14000de50 >= 0xa)
        {
            int32_t rdx_1 = data_14000de54;
            
            if ((~rdx_1 * rdx_1) & 1)
            {
                int32_t rdx_2;
                
                do
                {
                    *arg1 = 0;
                    
                    if (data_14000de50 < 0xa)
                        break;
                    
                    rdx_2 = data_14000de54;
                } while ((~rdx_2 * rdx_2) & 1);
                *(arg1 + 8) = {0};
            }
        }
        
        int32_t rdx_3;
        
        if (data_14000de58 >= 0xa)
            rdx_3 = data_14000de5c;
        
        if (data_14000de58 < 0xa || !((~rdx_3 * rdx_3) & 1))
            return arg1;
        
        __builtin_memset(arg1, 0, 0x18);
        
        if (data_14000de50 >= 0xa)
        {
            int32_t rdx_4 = data_14000de54;
            
            if ((~rdx_4 * rdx_4) & 1)
            {
                int32_t rdx_5;
                
                do
                {
                    *arg1 = 0;
                    
                    if (data_14000de50 < 0xa)
                        break;
                    
                    rdx_5 = data_14000de54;
                } while ((~rdx_5 * rdx_5) & 1);
                *(arg1 + 8) = {0};
            }
        }
    }
}

uint64_t sub_140005c20(int64_t* arg1, int512_t arg2 @ zmm1)
{
    int128_t zmm6;
    int128_t var_38 = zmm6;
    uint64_t result = *arg1;
    
    if (!result)
        return result;
    
    int64_t r14_1 = arg1[1];
    
    if (result == r14_1)
        goto label_140005cd0;
    
    uint64_t result_2 = result;
    
    while (true)
    {
        (data_14000d330 - 0xfe5f318879e335a)(result_2);
        
        if (data_14000de60 >= 0xa)
        {
            int32_t rax_3 = data_14000de64;
            
            if ((~rax_3 * rax_3) & 1)
            {
                (data_14000d330 - 0xfe5f318879e335a)(result_2);
                continue;
            }
        }
        
        uint64_t result_3 = result_2 + 0x40;
        result_2 = result_3;
        
        if (result_3 == r14_1)
            break;
    }
    
    uint64_t result_1 = *arg1;
    
    while (true)
    {
        result = (data_14000d338 - 0xfe5f318879e335a)(arg1, arg2, (arg1[2] - result_1) >> 6);
        __builtin_memset(arg1, 0, 0x18);
        
        if (data_14000de68 < 0xa)
            return result;
        
        result = data_14000de6c;
        
        if (!((~result * result) & 1))
            return result;
        
        (data_14000d338 - 0xfe5f318879e335a)(arg1, 0, 0);
        __builtin_memset(arg1, 0, 0x18);
        result = 0;
    label_140005cd0:
        result_1 = result;
    }
}

int64_t sub_140005d60(int64_t arg1, void* arg2, int64_t arg3)
{
    int64_t r14_1 = arg3 << 6;
    int32_t result;
    
    while (true)
    {
        void* rbx_1 = arg2;
        int64_t rdi_1 = r14_1;
        
        if (r14_1 < 0x1000)
            goto label_140005dd0;
        
        rbx_1 = *(arg2 - 8);
        void* rcx_1 = arg2 - 8 - rbx_1;
        
        if (rcx_1 < 0x20)
        {
            rdi_1 = r14_1 + 0x27;
        label_140005dd0:
            
            while (true)
            {
                result = (data_14000d348 - 0x256752b7df512e85)(rbx_1, rdi_1);
                
                if (data_14000de70 < 0xa)
                    break;
                
                result = data_14000de74;
                
                if (!((~result * result) & 1))
                    break;
                
                (data_14000d348 - 0x256752b7df512e85)(rbx_1, rdi_1);
            }
            
            if (data_14000de78 < 0xa)
                break;
            
            result = data_14000de7c;
            
            if (!((~result * result) & 1))
                break;
            
            void* rbx_2 = arg2;
            int64_t rdi_2 = r14_1;
            
            if (r14_1 < 0x1000)
                goto label_140005e69;
            
            rbx_2 = *(arg2 - 8);
            rcx_1 = arg2 - 8 - rbx_2;
            
            if (rcx_1 < 0x20)
            {
                rdi_2 = r14_1 + 0x27;
            label_140005e69:
                (data_14000d348 - 0x256752b7df512e85)(rbx_2, rdi_2);
                
                if (data_14000de70 < 0xa)
                    continue;
                else
                {
                    int32_t rax_7 = data_14000de74;
                    
                    if (!((~rax_7 * rax_7) & 1))
                        continue;
                    else
                    {
                        int32_t rax_12;
                        
                        do
                        {
                            (data_14000d348 - 0x256752b7df512e85)(rbx_2, rdi_2);
                            (data_14000d348 - 0x256752b7df512e85)(rbx_2, rdi_2);
                            rax_12 = data_14000de74;
                            
                            if (data_14000de70 < 0xa)
                                break;
                        } while ((~rax_12 * rax_12) & 1);
                        continue;
                    }
                }
            }
        }
        
        (-0x256752b7df512e85 + data_14000d340)(rcx_1);
        breakpoint();
    }
    
    return result;
}

int64_t sub_140005f00(void* arg1, int64_t arg2, int512_t arg3 @ zmm1)
{
    int64_t result;
    
    if (*(arg1 + 8) == *(arg1 + 0x10))
    {
        while (true)
        {
            result = (data_14000d358 + 0x45fc25c3dc158eaa)(arg1, arg3, arg2);
            
            if (data_14000de80 < 0xa)
                break;
            
            int32_t rcx_4 = data_14000de84;
            
            if (!((~rcx_4 * rcx_4) & 1))
                break;
            
            (data_14000d358 + 0x45fc25c3dc158eaa)(arg1, *(arg1 + 8), arg2);
        }
    }
    else
    {
        while (true)
        {
            result = (data_14000d350 + 0x45fc25c3dc158eaa)(arg1, arg2);
            
            if (data_14000de80 < 0xa)
                break;
            
            int32_t rcx_1 = data_14000de84;
            
            if (!((~rcx_1 * rcx_1) & 1))
                break;
            
            (data_14000d350 + 0x45fc25c3dc158eaa)(arg1, arg2);
        }
    }
    
    return result;
}

int64_t sub_140005fe0(void* arg1, int64_t arg2)
{
    int64_t rbx = *(arg1 + 8);
    
    while (true)
    {
        (data_14000d360 + 0x6138837b988a28d3)(rbx, arg2);
        
        if (data_14000de88 >= 0xa)
        {
            int32_t rax_3 = data_14000de8c;
            
            if ((~rax_3 * rax_3) & 1)
            {
                (data_14000d360 + 0x6138837b988a28d3)(rbx, arg2);
                continue;
            }
        }
        
        int64_t result = *(arg1 + 8);
        *(arg1 + 8) = result + 0x40;
        int32_t rcx_6;
        
        if (data_14000de90 >= 0xa)
            rcx_6 = data_14000de94;
        
        if (data_14000de90 < 0xa || !((~rcx_6 * rcx_6) & 1))
            return result;
        
        while (true)
        {
            (data_14000d360 + 0x6138837b988a28d3)(result + 0x40, arg2);
            
            if (data_14000de88 < 0xa)
                break;
            
            int32_t rax_8 = data_14000de8c;
            
            if (!((~rax_8 * rax_8) & 1))
                break;
            
            (data_14000d360 + 0x6138837b988a28d3)(result + 0x40, arg2);
        }
        
        rbx = *(arg1 + 8) + 0x40;
        *(arg1 + 8) = rbx;
    }
}

void* sub_1400060e0(int64_t* arg1, int64_t arg2, void* arg3)
{
    int64_t var_48 = -2;
    int64_t rax = *arg1;
    void* r13_1 = arg2 - rax;
    int64_t rdi_3 = ((arg1[1] - rax) >> 6) + 1;
    int64_t* var_78;
    int64_t var_50;
    void* rax_10;
    
    while (true)
    {
        int64_t rcx_5 = (arg1[2] - rax) >> 6;
        uint64_t rax_6 = rcx_5 >> 1;
        int64_t rax_7 = rax_6 + rcx_5;
        
        if (rax_7 <= rdi_3)
            rax_7 = rdi_3;
        
        if (rcx_5 > 0x3ffffffffffffff - rax_6)
            rax_7 = 0x3ffffffffffffff;
        
        var_50 = rax_7;
        rax_10 = (data_14000d370 + 0x6516d9bb06025437)(arg1, &var_50);
        var_78 = arg1;
        void* var_70_2 = rax_10;
        int64_t var_68_2 = var_50;
        void* var_60_2 = rax_10 + r13_1 + 0x40;
        void* var_58_2 = rax_10 + r13_1 + 0x40;
        
        if (data_14000de98 < 0xa)
            break;
        
        int32_t rax_13 = data_14000de9c;
        
        if (!((~rax_13 * rax_13) & 1))
            break;
        
        int64_t rax_16 = (arg1[2] - *arg1) >> 6;
        uint64_t rcx_13 = rax_16 >> 1;
        int64_t r8_1 = rcx_13 + rax_16;
        int64_t rdx = r8_1;
        
        if (r8_1 <= rdi_3)
            rdx = rdi_3;
        
        if (rax_16 > 0x3ffffffffffffff - rcx_13)
            rdx = 0x3ffffffffffffff;
        
        var_50 = rdx;
        void* rax_3 =
            (data_14000d370 + 0x6516d9bb06025437)(arg1, &var_50, 0x3ffffffffffffff - rcx_13);
        var_78 = arg1;
        void* var_70_1 = rax_3;
        int64_t var_68_1 = var_50;
        void* var_60_1 = rax_3 + r13_1 + 0x40;
        void* var_58_1 = rax_3 + r13_1 + 0x40;
        rax = *arg1;
    }
    
    void* result = r13_1 + rax_10;
    sub_1400044f0(result, arg3);
    
    while (data_14000de88 >= 0xa)
    {
        int32_t rax_17 = data_14000de8c;
        
        if (!((~rax_17 * rax_17) & 1))
            break;
        
        sub_1400044f0(result, arg3);
        sub_1400044f0(result, arg3);
    }
    
    void* result_1 = result;
    int64_t rcx_21 = *arg1;
    
    if (arg1[1] == arg2)
        sub_140006520(rcx_21, arg2, rax_10, arg1);
    else
    {
        sub_140006520(rcx_21, arg2, rax_10, arg1);
        void* var_60_3 = rax_10;
        sub_140006520(arg2, arg1[1], result + 0x40, arg1);
    }
    
    while (true)
    {
        int64_t var_70_3 = 0;
        (data_14000d378 + 0x6516d9bb06025437)(arg1, rax_10, rdi_3, var_50);
        (data_14000d380 + 0x6516d9bb06025437)(&var_78);
        int32_t rax_23;
        
        if (data_14000de98 >= 0xa)
            rax_23 = data_14000de9c;
        
        if (data_14000de98 < 0xa || !((~rax_23 * rax_23) & 1))
            return result;
        
        int64_t var_70_4 = 0;
        (data_14000d378 + 0x6516d9bb06025437)(arg1, rax_10, rdi_3, var_50);
        (data_14000d380 + 0x6516d9bb06025437)(&var_78);
    }
}

int64_t sub_140006390(int64_t arg1, int64_t arg2)
{
    int64_t arg_10 = arg2;
    return (0x6516d9bb06025437 + data_14000d380)(arg2 + 0x30);
}

int64_t sub_1400063e0(int64_t arg1, int64_t* arg2, int64_t arg3 @ rbx)
{
    int64_t var_20 = arg3;
    uint64_t rdi = *arg2;
    uint64_t rcx_1 = rdi >> 0x3a;
    
    if (!rcx_1)
    {
        arg3 = 0x675b940c2b21b6a7;
        
        while (true)
        {
            uint64_t rdi_1 = rdi << 6;
            int64_t result;
            
            while (true)
            {
                result = (data_14000d388 + 0x675b940c2b21b6a7)(rdi_1);
                
                if (data_14000dea0 < 0xa)
                    break;
                
                int32_t rcx_3 = data_14000dea4;
                int32_t rdx_3 = (~rcx_3 * rcx_3) & 1;
                
                if (!rdx_3)
                    break;
                
                (data_14000d388 + 0x675b940c2b21b6a7)(rdi_1, rdx_3);
            }
            
            if (data_14000dea8 >= 0xa)
            {
                int32_t rcx_5 = data_14000deac;
                
                if ((~rcx_5 * rcx_5) & 1)
                {
                    int64_t rdi_2 = *arg2;
                    
                    if (rdi_2 > 0x3ffffffffffffff)
                        goto label_140006517;
                    
                    int64_t rdi_3 = rdi_2 << 6;
                    
                    while (true)
                    {
                        (data_14000d388 + 0x675b940c2b21b6a7)(rdi_3);
                        
                        if (data_14000dea0 < 0xa)
                            break;
                        
                        int32_t rax_7 = data_14000dea4;
                        
                        if (!((~rax_7 * rax_7) & 1))
                            break;
                        
                        (data_14000d388 + 0x675b940c2b21b6a7)(rdi_3);
                    }
                    
                    rcx_1 = *arg2;
                    rdi = rcx_1;
                    
                    if (rcx_1 > 0x3ffffffffffffff)
                        break;
                    
                    continue;
                }
            }
            
            return result;
        }
    }
    
    (0x675b940c2b21b6a7 + data_14000d390)(rcx_1);
label_140006517:
    (arg3 + data_14000d390)();
    breakpoint();
}

int64_t sub_140006520(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4)
{
    int64_t var_30 = arg4;
    
    if (arg1 != arg2)
    {
        int64_t r14_1 = arg3;
        int64_t rbx_1 = arg1;
        int64_t rax_3;
        
        do
        {
            (data_14000d398 + 0x1b65968dcfe82cab)(arg4, r14_1, rbx_1);
            int64_t r14_2 = r14_1 + 0x40;
            int32_t rax_6;
            
            if (data_14000deb0 >= 0xa)
                rax_6 = data_14000deb4;
            
            int64_t rax_1;
            
            if (data_14000deb0 < 0xa || !((~rax_6 * rax_6) & 1))
                rax_1 = r14_2;
            else
            {
                int32_t rcx_7;
                
                do
                {
                    (data_14000d398 + 0x1b65968dcfe82cab)(arg4, r14_2, rbx_1);
                    (data_14000d398 + 0x1b65968dcfe82cab)(arg4, r14_2 + 0x40, rbx_1);
                    r14_2 -= -0x80;
                    rax_1 = r14_2;
                    
                    if (data_14000deb0 < 0xa)
                        break;
                    
                    rcx_7 = data_14000deb4;
                } while ((~rcx_7 * rcx_7) & 1);
            }
            
            r14_1 = rax_1;
            rax_3 = rbx_1 + 0x40;
            arg3 = r14_1;
            rbx_1 = rax_3;
        } while (rax_3 != arg2);
    }
    
    int64_t var_38 = arg3;
    int64_t var_40 = arg3;
    (data_14000d3a0 + 0x1b65968dcfe82cab)(&var_40);
    
    if (data_14000deb8 >= 0xa)
    {
        int32_t rax_13 = data_14000debc;
        
        if ((~rax_13 * rax_13) & 1)
        {
            int32_t rax_18;
            
            do
            {
                (data_14000d3a0 + 0x1b65968dcfe82cab)(&var_40);
                (data_14000d3a0 + 0x1b65968dcfe82cab)(&var_40);
                
                if (data_14000deb8 < 0xa)
                    break;
                
                rax_18 = data_14000debc;
            } while ((~rax_18 * rax_18) & 1);
        }
    }
    
    return arg3;
}

uint64_t sub_1400066a0(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)
{
    uint64_t result = *arg1;
    
    if (result)
    {
        while (true)
        {
            int64_t r13_1 = arg1[1];
            uint64_t result_1;
            
            if (result == r13_1)
                result_1 = result;
            else
            {
                uint64_t result_2 = result;
                
                while (true)
                {
                    (data_14000d3a8 - 0x14d12ee48c79ab77)(result_2);
                    
                    if (data_14000de60 >= 0xa)
                    {
                        int32_t rax_7 = data_14000de64;
                        
                        if ((~rax_7 * rax_7) & 1)
                        {
                            (data_14000d3a8 - 0x14d12ee48c79ab77)(result_2);
                            continue;
                        }
                    }
                    
                    uint64_t result_3 = result_2 + 0x40;
                    result_2 = result_3;
                    
                    if (result_3 == r13_1)
                        break;
                }
                
                result_1 = *arg1;
            }
            
            result =
                (data_14000d3b0 - 0x14d12ee48c79ab77)(arg1, result_1, (arg1[2] - result_1) >> 6);
            
            if (data_14000dec0 < 0xa)
                break;
            
            result = data_14000dec4;
            
            if (!((~result * result) & 1))
                break;
            
            int64_t r15_1 = *arg1;
            int64_t r13_2 = arg1[1];
            int64_t rdx;
            
            if (r15_1 != r13_2)
            {
                while (true)
                {
                    (data_14000d3a8 - 0x14d12ee48c79ab77)(r15_1);
                    
                    if (data_14000de60 >= 0xa)
                    {
                        int32_t rax_18 = data_14000de64;
                        
                        if ((~rax_18 * rax_18) & 1)
                        {
                            (data_14000d3a8 - 0x14d12ee48c79ab77)(r15_1);
                            continue;
                        }
                    }
                    
                    int64_t rax_15 = r15_1 + 0x40;
                    r15_1 = rax_15;
                    
                    if (rax_15 == r13_2)
                        break;
                }
                
                rdx = *arg1;
            }
            else
                rdx = r13_2;
            
            (data_14000d3b0 - 0x14d12ee48c79ab77)(arg1, rdx, (arg1[2] - rdx) >> 6);
            result = *arg1;
        }
    }
    
    do
    {
        *arg1 = arg2;
        
        if (data_14000dec0 < 0xa)
            break;
        
        result = data_14000dec4;
    } while ((~result * result) & 1);
    
    arg1[1] = (arg3 << 6) + arg2;
    arg1[2] = (arg4 << 6) + arg2;
    return result;
}

void sub_140006870(int64_t* arg1)
{
    if (!arg1[1])
        return;
    
    while (true)
    {
        int64_t rdi_2 = arg1[3];
        int64_t r14_1 = arg1[4];
        
        if (rdi_2 != r14_1)
        {
            while (true)
            {
                (data_14000d3b8 - 0x20cc0b824b00a9ff)(rdi_2);
                
                if (data_14000de60 >= 0xa)
                {
                    int32_t rax_9 = data_14000de64;
                    
                    if ((~rax_9 * rax_9) & 1)
                    {
                        (data_14000d3b8 - 0x20cc0b824b00a9ff)(rdi_2);
                        continue;
                    }
                }
                
                int64_t rax_6 = rdi_2 + 0x40;
                rdi_2 = rax_6;
                
                if (rax_6 == r14_1)
                    break;
            }
        }
        
        (data_14000d3c0 - 0x20cc0b824b00a9ff)(*arg1, arg1[1], arg1[2]);
        
        if (data_14000dec8 < 0xa)
            break;
        
        int32_t rax = data_14000decc;
        
        if (!((~rax * rax) & 1))
            break;
        
        int64_t rdi_1 = arg1[3];
        int64_t r14_2 = arg1[4];
        
        if (rdi_1 != r14_2)
        {
            while (true)
            {
                (data_14000d3b8 - 0x20cc0b824b00a9ff)(rdi_1);
                
                if (data_14000de60 >= 0xa)
                {
                    int32_t rax_16 = data_14000de64;
                    
                    if ((~rax_16 * rax_16) & 1)
                    {
                        (data_14000d3b8 - 0x20cc0b824b00a9ff)(rdi_1);
                        continue;
                    }
                }
                
                int64_t rax_13 = rdi_1 + 0x40;
                rdi_1 = rax_13;
                
                if (rax_13 == r14_2)
                    break;
            }
        }
        
        (data_14000d3c0 - 0x20cc0b824b00a9ff)(*arg1, arg1[1], arg1[2]);
    }
}

int64_t sub_1400069c0(int64_t arg1)
{
    if (!arg1)
        return 0;
    
    int64_t result;
    
    if (arg1 <= 0xfff)
    {
        while (true)
        {
            result = (data_14000d3d0 - 0x1550b8f1b07869f9)(arg1);
            
            if (data_14000ded8 >= 0xa)
            {
                int32_t rcx_5 = data_14000dedc;
                int32_t rdx_8 = (~rcx_5 * rcx_5) & 1;
                
                if (rdx_8)
                {
                    (data_14000d3d0 - 0x1550b8f1b07869f9)(arg1, rdx_8);
                    continue;
                }
            }
            
            if (data_14000ded0 < 0xa)
                break;
            
            int32_t rcx_6 = data_14000ded4;
            int32_t rdx_12 = (~rcx_6 * rcx_6) & 1;
            
            if (!rdx_12)
                break;
            
            (data_14000d3d0 - 0x1550b8f1b07869f9)(arg1, rdx_12);
            
            if (data_14000ded8 >= 0xa)
            {
                int32_t rax_11 = data_14000dedc;
                
                if ((~rax_11 * rax_11) & 1)
                {
                    int32_t rax_16;
                    
                    do
                    {
                        (data_14000d3d0 - 0x1550b8f1b07869f9)(arg1);
                        (data_14000d3d0 - 0x1550b8f1b07869f9)(arg1);
                        rax_16 = data_14000dedc;
                        
                        if (data_14000ded8 < 0xa)
                            break;
                    } while ((~rax_16 * rax_16) & 1);
                }
            }
        }
    }
    else
    {
        while (true)
        {
            result = (data_14000d3c8 - 0x1550b8f1b07869f9)(arg1);
            
            if (data_14000ded0 < 0xa)
                break;
            
            int32_t rcx_1 = data_14000ded4;
            int32_t rdx_4 = (~rcx_1 * rcx_1) & 1;
            
            if (!rdx_4)
                break;
            
            (data_14000d3c8 - 0x1550b8f1b07869f9)(arg1, rdx_4);
        }
    }
    
    return result;
}

void* sub_140006b20(int64_t arg1, int64_t arg2 @ rdi)
{
    int64_t var_10 = arg2;
    
    if (arg1 >= -0x27)
        (-0x2d022c4e704d3f4f + data_14000d3e0)();
    else
    {
        arg2 = -0x2d022c4e704d3f4f;
        int64_t rcx_3;
        
        while (true)
        {
            int64_t rax_5 = (data_14000d3e8 - 0x2d022c4e704d3f4f)(arg1 + 0x27);
            
            if (data_14000ded8 < 0xa)
            {
                rcx_3 = rax_5;
                
                if (data_14000dee0 < 0xa)
                    break;
            }
            else
            {
                int32_t rcx_2 = data_14000dedc;
                rcx_3 = rax_5;
                int32_t rdx_4 = (~rcx_2 * rcx_2) & 1;
                
                if (rdx_4)
                {
                    (data_14000d3e8 - 0x2d022c4e704d3f4f)(arg1 + 0x27, rdx_4);
                    continue;
                }
                else if (data_14000dee0 < 0xa)
                    break;
            }
            
            int32_t rax_6 = data_14000dee4;
            int32_t rdx_8 = (~rax_6 * rax_6) & 1;
            
            if (!rdx_8)
                break;
            
            (data_14000d3e8 - 0x2d022c4e704d3f4f)(arg1 + 0x27, rdx_8);
            
            if (data_14000ded8 >= 0xa)
            {
                int32_t rax_9 = data_14000dedc;
                
                if ((~rax_9 * rax_9) & 1)
                {
                    int32_t rax_14;
                    
                    do
                    {
                        (data_14000d3e8 - 0x2d022c4e704d3f4f)(arg1 + 0x27);
                        (data_14000d3e8 - 0x2d022c4e704d3f4f)(arg1 + 0x27);
                        rax_14 = data_14000dedc;
                        
                        if (data_14000ded8 < 0xa)
                            break;
                    } while ((~rax_14 * rax_14) & 1);
                }
            }
        }
        
        if (rcx_3)
        {
            void* result = (rcx_3 + 0x27) & 0xffffffffffffffe0;
            int32_t rdx_9;
            
            do
            {
                *(result - 8) = rcx_3;
                
                if (data_14000dee0 < 0xa)
                    break;
                
                rdx_9 = data_14000dee4;
            } while ((~rdx_9 * rdx_9) & 1);
            return result;
        }
    }
    
    (arg2 + data_14000d3f0)();
    breakpoint();
}

void sub_140006c90() __noreturn
{
    void var_58;
    int64_t var_18 = __security_cookie ^ &var_58;
    void var_30;
    (data_14000d3f8 - 0x17b61e658a7473b9)(&var_30);
    (-0x17b61e658a7473b9 + data_14000d400)(&var_30, &data_14000cda0);
    breakpoint();
}

struct std::bad_alloc::std::bad_array_new_length::VTable** sub_140006ce0(struct std::bad_alloc::std::bad_array_new_length::VTable** arg1)
{
    (data_14000d408 - 0x7184e19d2e824810)(&data_14000dcc0, &data_14000b564);
    (data_14000d410 - 0x7184e19d2e824810)(arg1, &data_14000dcc0);
    *arg1 = &std::bad_array_new_length::`vftable'{for `std::bad_alloc'};
    
    if (data_14000dee8 >= 0xa)
    {
        int32_t rax_4 = data_14000deec;
        
        if ((~rax_4 * rax_4) & 1)
        {
            int32_t rax_11;
            
            do
            {
                (data_14000d408 - 0x7184e19d2e824810)(&data_14000dcc0, &data_14000b564);
                (data_14000d410 - 0x7184e19d2e824810)(arg1, &data_14000dcc0);
                *arg1 = &std::bad_array_new_length::`vftable'{for `std::bad_alloc'};
                (data_14000d410 - 0x7184e19d2e824810)(arg1, &data_14000dcc0);
                *arg1 = &std::bad_array_new_length::`vftable'{for `std::bad_alloc'};
                
                if (data_14000dee8 < 0xa)
                    break;
                
                rax_11 = data_14000deec;
            } while ((~rax_11 * rax_11) & 1);
        }
    }
    
    return arg1;
}

struct std::bad_alloc::std::bad_array_new_length::VTable** sub_140006dd0(struct std::bad_alloc::std::bad_array_new_length::VTable** arg1, int64_t arg2)
{
    (data_14000d418 + 0x54b2b490ee48c3b9)();
    
    while (true)
    {
        *arg1 = &std::bad_array_new_length::`vftable'{for `std::bad_alloc'};
        int32_t rax_2;
        
        if (data_14000def0 >= 0xa)
            rax_2 = data_14000def4;
        
        if (data_14000def0 < 0xa || !((~rax_2 * rax_2) & 1))
            return arg1;
        
        (data_14000d418 + 0x54b2b490ee48c3b9)(arg1, arg2);
        *arg1 = &std::bad_array_new_length::`vftable'{for `std::bad_alloc'};
        (data_14000d418 + 0x54b2b490ee48c3b9)(arg1, arg2);
    }
}

struct std::exception::VTable** sub_140006e60(struct std::exception::VTable** arg1, int64_t arg2)
{
    while (true)
    {
        *arg1 = &std::exception::`vftable';
        *(arg1 + 8) = {0};
        (data_14000d420 - 0x53b22fb41e92e364)(arg2 + 8, &arg1[1]);
        
        if (data_14000def8 >= 0xa)
        {
            int32_t rax_3 = data_14000defc;
            
            if ((~rax_3 * rax_3) & 1)
            {
                *arg1 = &std::exception::`vftable';
                *(arg1 + 8) = {0};
                (data_14000d420 - 0x53b22fb41e92e364)(arg2 + 8, &arg1[1]);
                continue;
            }
        }
        
        *arg1 = &std::bad_alloc::`vftable'{for `std::exception'};
        int32_t rax_6;
        
        if (data_14000df00 >= 0xa)
            rax_6 = data_14000df04;
        
        if (data_14000df00 < 0xa || !((~rax_6 * rax_6) & 1))
            return arg1;
        
        while (true)
        {
            *arg1 = &std::exception::`vftable';
            *(arg1 + 8) = {0};
            (data_14000d420 - 0x53b22fb41e92e364)(arg2 + 8, &arg1[1]);
            
            if (data_14000def8 < 0xa)
                break;
            
            int32_t rax_9 = data_14000defc;
            
            if (!((~rax_9 * rax_9) & 1))
                break;
            
            *arg1 = &std::exception::`vftable';
            *(arg1 + 8) = {0};
            (data_14000d420 - 0x53b22fb41e92e364)(arg2 + 8, &arg1[1]);
        }
        
        *arg1 = &std::bad_alloc::`vftable'{for `std::exception'};
    }
}

struct std::exception::VTable** sub_140006f80(struct std::exception::VTable** arg1, int64_t arg2)
{
    int128_t zmm6;
    int128_t var_38 = zmm6;
    *arg1 = &std::exception::`vftable';
    *(arg1 + 8) = {0};
    (data_14000d428 - 0x5ae105a61322919b)(arg2 + 8, &arg1[1]);
    
    if (data_14000def8 >= 0xa)
    {
        int32_t rax_2 = data_14000defc;
        
        if ((~rax_2 * rax_2) & 1)
        {
            int32_t rax_7;
            
            do
            {
                *arg1 = &std::exception::`vftable';
                *(arg1 + 8) = {0};
                (data_14000d428 - 0x5ae105a61322919b)(arg2 + 8, &arg1[1]);
                *arg1 = &std::exception::`vftable';
                *(arg1 + 8) = {0};
                (data_14000d428 - 0x5ae105a61322919b)(arg2 + 8, &arg1[1]);
                
                if (data_14000def8 < 0xa)
                    break;
                
                rax_7 = data_14000defc;
            } while ((~rax_7 * rax_7) & 1);
        }
    }
    
    return arg1;
}

int64_t sub_140007050(struct std::exception::VTable** arg1)
{
    *arg1 = &std::exception::`vftable';
    
    while (true)
    {
        int32_t result = (data_14000d430 - 0xb4f072c96166bb4)(&arg1[1]);
        
        if (data_14000df08 >= 0xa)
            result = data_14000df0c;
        
        if (data_14000df08 < 0xa || !((~result * result) & 1))
            return result;
        
        *arg1 = &std::exception::`vftable';
        (data_14000d430 - 0xb4f072c96166bb4)(&arg1[1]);
        *arg1 = &std::exception::`vftable';
    }
}

struct std::exception::VTable** sub_1400070d0(struct std::exception::VTable** arg1, int64_t arg2)
{
    while (true)
    {
        *arg1 = &std::exception::`vftable';
        
        if (data_14000df10 >= 0xa)
        {
            int32_t r9_1 = data_14000df14;
            
            if ((~r9_1 * r9_1) & 1)
                continue;
        }
        
        *arg1 = &std::bad_alloc::`vftable'{for `std::exception'};
        int32_t r9_2;
        
        if (data_14000df18 >= 0xa)
            r9_2 = data_14000df1c;
        
        if (data_14000df18 < 0xa || !((~r9_2 * r9_2) & 1))
        {
            arg1[2] = 0;
            arg1[1] = arg2;
            return arg1;
        }
        
        int32_t r9_3;
        
        do
        {
            *arg1 = &std::exception::`vftable';
            
            if (data_14000df10 < 0xa)
                break;
            
            r9_3 = data_14000df14;
        } while ((~r9_3 * r9_3) & 1);
        *arg1 = &std::bad_alloc::`vftable'{for `std::exception'};
    }
}

struct std::exception::VTable** sub_140007180(struct std::exception::VTable** arg1, int32_t arg2)
{
    while (true)
    {
        *arg1 = &std::exception::`vftable';
        (data_14000d438 - 0x4c1b1a1b9a8c4b37)(&arg1[1]);
        
        if (data_14000df08 >= 0xa)
        {
            int32_t rax_5 = data_14000df0c;
            
            if ((~rax_5 * rax_5) & 1)
            {
                *arg1 = &std::exception::`vftable';
                (data_14000d438 - 0x4c1b1a1b9a8c4b37)(&arg1[1]);
                continue;
            }
        }
        
        if (data_14000df20 < 0xa)
            break;
        
        int32_t rax_6 = data_14000df24;
        
        if (!((~rax_6 * rax_6) & 1))
            break;
        
        *arg1 = &std::exception::`vftable';
        (data_14000d438 - 0x4c1b1a1b9a8c4b37)(&arg1[1]);
        
        if (data_14000df08 >= 0xa)
        {
            int32_t rax_9 = data_14000df0c;
            
            if ((~rax_9 * rax_9) & 1)
            {
                int32_t rax_14;
                
                do
                {
                    *arg1 = &std::exception::`vftable';
                    (data_14000d438 - 0x4c1b1a1b9a8c4b37)(&arg1[1]);
                    *arg1 = &std::exception::`vftable';
                    (data_14000d438 - 0x4c1b1a1b9a8c4b37)(&arg1[1]);
                    rax_14 = data_14000df0c;
                    
                    if (data_14000df08 < 0xa)
                        break;
                } while ((~rax_14 * rax_14) & 1);
            }
        }
    }
    
    if (arg2)
    {
        while (true)
        {
            (data_14000d440 - 0x4c1b1a1b9a8c4b37)(arg1);
            
            if (data_14000df20 < 0xa)
                break;
            
            int32_t rax_19 = data_14000df24;
            
            if (!((~rax_19 * rax_19) & 1))
                break;
            
            (data_14000d440 - 0x4c1b1a1b9a8c4b37)(arg1);
        }
    }
    
    return arg1;
}

void* sub_1400072e0(void* arg1)
{
    void* result = *(arg1 + 8);
    (-0x2280bec5285a1b91 + data_14000d448)(&data_14000dcdc, &data_14000b5a8);
    
    if (!result)
        return &data_14000dcdc;
    
    return result;
}

struct std::exception::VTable** sub_140007320(struct std::exception::VTable** arg1, int32_t arg2)
{
    while (true)
    {
        *arg1 = &std::exception::`vftable';
        (data_14000d450 + 0xcb549d3068fe2ee)(&arg1[1]);
        
        if (data_14000df08 >= 0xa)
        {
            int32_t rax_5 = data_14000df0c;
            
            if ((~rax_5 * rax_5) & 1)
            {
                *arg1 = &std::exception::`vftable';
                (data_14000d450 + 0xcb549d3068fe2ee)(&arg1[1]);
                continue;
            }
        }
        
        if (data_14000df28 < 0xa)
            break;
        
        int32_t rax_6 = data_14000df2c;
        
        if (!((~rax_6 * rax_6) & 1))
            break;
        
        *arg1 = &std::exception::`vftable';
        (data_14000d450 + 0xcb549d3068fe2ee)(&arg1[1]);
        
        if (data_14000df08 >= 0xa)
        {
            int32_t rax_9 = data_14000df0c;
            
            if ((~rax_9 * rax_9) & 1)
            {
                int32_t rax_14;
                
                do
                {
                    *arg1 = &std::exception::`vftable';
                    (data_14000d450 + 0xcb549d3068fe2ee)(&arg1[1]);
                    *arg1 = &std::exception::`vftable';
                    (data_14000d450 + 0xcb549d3068fe2ee)(&arg1[1]);
                    rax_14 = data_14000df0c;
                    
                    if (data_14000df08 < 0xa)
                        break;
                } while ((~rax_14 * rax_14) & 1);
            }
        }
    }
    
    if (arg2)
    {
        while (true)
        {
            (data_14000d458 + 0xcb549d3068fe2ee)(arg1);
            
            if (data_14000df28 < 0xa)
                break;
            
            int32_t rax_19 = data_14000df2c;
            
            if (!((~rax_19 * rax_19) & 1))
                break;
            
            (data_14000d458 + 0xcb549d3068fe2ee)(arg1);
        }
    }
    
    return arg1;
}

struct std::exception::VTable** sub_140007480(struct std::exception::VTable** arg1, int32_t arg2)
{
    while (true)
    {
        *arg1 = &std::exception::`vftable';
        (data_14000d460 - 0x44acbc9ad11709de)(&arg1[1]);
        
        if (data_14000df08 >= 0xa)
        {
            int32_t rax_5 = data_14000df0c;
            
            if ((~rax_5 * rax_5) & 1)
            {
                *arg1 = &std::exception::`vftable';
                (data_14000d460 - 0x44acbc9ad11709de)(&arg1[1]);
                continue;
            }
        }
        
        if (data_14000df30 < 0xa)
            break;
        
        int32_t rax_6 = data_14000df34;
        
        if (!((~rax_6 * rax_6) & 1))
            break;
        
        *arg1 = &std::exception::`vftable';
        (data_14000d460 - 0x44acbc9ad11709de)(&arg1[1]);
        
        if (data_14000df08 >= 0xa)
        {
            int32_t rax_9 = data_14000df0c;
            
            if ((~rax_9 * rax_9) & 1)
            {
                int32_t rax_14;
                
                do
                {
                    *arg1 = &std::exception::`vftable';
                    (data_14000d460 - 0x44acbc9ad11709de)(&arg1[1]);
                    *arg1 = &std::exception::`vftable';
                    (data_14000d460 - 0x44acbc9ad11709de)(&arg1[1]);
                    rax_14 = data_14000df0c;
                    
                    if (data_14000df08 < 0xa)
                        break;
                } while ((~rax_14 * rax_14) & 1);
            }
        }
    }
    
    if (arg2)
    {
        while (true)
        {
            (data_14000d468 - 0x44acbc9ad11709de)(arg1);
            
            if (data_14000df30 < 0xa)
                break;
            
            int32_t rax_19 = data_14000df34;
            
            if (!((~rax_19 * rax_19) & 1))
                break;
            
            (data_14000d468 - 0x44acbc9ad11709de)(arg1);
        }
    }
    
    return arg1;
}

void sub_1400075e0(int64_t* arg1)
{
    while (true)
    {
        uint64_t rdi_2 = *arg1;
        int64_t r14_1 = arg1[1];
        uint64_t rax;
        
        if (rdi_2 != r14_1)
        {
            while (true)
            {
                (data_14000d470 + 0x5fef9be3961f8b2e)(rdi_2);
                
                if (data_14000de60 >= 0xa)
                {
                    int32_t rax_4 = data_14000de64;
                    
                    if ((~rax_4 * rax_4) & 1)
                    {
                        (data_14000d470 + 0x5fef9be3961f8b2e)(rdi_2);
                        continue;
                    }
                }
                
                rax = rdi_2 + 0x40;
                rdi_2 = rax;
                
                if (rax == r14_1)
                    break;
            }
        }
        
        if (data_14000df38 >= 0xa)
            rax = data_14000df3c;
        
        if (data_14000df38 < 0xa || !((~rax * rax) & 1))
            return;
        
        uint64_t rdi_1 = *arg1;
        int64_t r14_2 = arg1[1];
        
        if (rdi_1 != r14_2)
        {
            while (true)
            {
                (data_14000d470 + 0x5fef9be3961f8b2e)(rdi_1);
                
                if (data_14000de60 >= 0xa)
                {
                    int32_t rax_10 = data_14000de64;
                    
                    if ((~rax_10 * rax_10) & 1)
                    {
                        (data_14000d470 + 0x5fef9be3961f8b2e)(rdi_1);
                        continue;
                    }
                }
                
                rax = rdi_1 + 0x40;
                rdi_1 = rax;
                
                if (rax == r14_2)
                    break;
            }
        }
    }
}

int64_t sub_1400076f0(int64_t arg1, void* arg2, int64_t arg3)
{
    int32_t result;
    
    while (true)
    {
        *(arg2 + 0x38) = 0;
        result = (data_14000d478 - 0x713d6cf6a87fe8c5)(arg2, arg3);
        
        if (data_14000df40 >= 0xa)
        {
            result = data_14000df44;
            
            if ((~result * result) & 1)
            {
                *(arg2 + 0x38) = 0;
                (data_14000d478 - 0x713d6cf6a87fe8c5)(arg2, arg3);
                continue;
            }
        }
        
        if (data_14000df48 < 0xa)
            break;
        
        result = data_14000df4c;
        
        if (!((~result * result) & 1))
            break;
        
        *(arg2 + 0x38) = 0;
        (data_14000d478 - 0x713d6cf6a87fe8c5)(arg2, arg3);
        
        if (data_14000df40 >= 0xa)
        {
            int32_t rax_7 = data_14000df44;
            
            if ((~rax_7 * rax_7) & 1)
            {
                int32_t rax_12;
                
                do
                {
                    *(arg2 + 0x38) = 0;
                    (data_14000d478 - 0x713d6cf6a87fe8c5)(arg2, arg3);
                    *(arg2 + 0x38) = 0;
                    (data_14000d478 - 0x713d6cf6a87fe8c5)(arg2, arg3);
                    rax_12 = data_14000df44;
                    
                    if (data_14000df40 < 0xa)
                        break;
                } while ((~rax_12 * rax_12) & 1);
            }
        }
    }
    
    return result;
}

uint64_t sub_140007830(void* arg1, int64_t* arg2)
{
    int64_t rbx;
    int64_t var_18 = rbx;
    uint64_t result = arg2[7];
    
    if (result)
    {
        if (result == arg2)
        {
            int64_t* rax = arg2;
            
            while (true)
            {
                result = (*(*rax + 8))(rax, arg1);
                *(arg1 + 0x38) = result;
                int64_t* rcx_1 = arg2[7];
                
                if (rcx_1)
                {
                    int64_t rax_2 = *rcx_1;
                    
                    while (true)
                    {
                        int64_t rdx_1;
                        result = (*(rax_2 + 0x20))();
                        arg2[7] = 0;
                        
                        if (data_14000dd48 < 0xa)
                            break;
                        
                        result = data_14000dd4c;
                        
                        if (!((~result * result) & 1))
                            break;
                        
                        rbx = arg2;
                        rdx_1 = 1;
                        (*(*0 + 0x20))(0, rdx_1);
                        arg2[7] = 0;
                        rax_2 = *0;
                    }
                }
                
                if (data_14000df50 < 0xa)
                    break;
                
                result = data_14000df54;
                
                if (!((~result * result) & 1))
                    break;
                
                int64_t rax_5;
                int64_t rdx_3;
                rax_5 = (*(*0 + 8))(0, arg1);
                *(arg1 + 0x38) = rax_5;
                int64_t* rcx_10 = arg2[7];
                rax = nullptr;
                
                if (rcx_10)
                {
                    rdx_3 = rcx_10 != arg2;
                    (*(*rcx_10 + 0x20))(rcx_10, rdx_3);
                    arg2[7] = 0;
                    rax = nullptr;
                    
                    if (data_14000dd48 >= 0xa)
                    {
                        int32_t rax_7 = data_14000dd4c;
                        rax = nullptr;
                        
                        if ((~rax_7 * rax_7) & 1)
                        {
                            int32_t rax_10;
                            
                            do
                            {
                                rbx = arg2;
                                int64_t rdx_4;
                                rdx_4 = 1;
                                (*(*0 + 0x20))(0, rdx_4);
                                arg2[7] = 0;
                                (*(*0 + 0x20))(0, rbx);
                                arg2[7] = 0;
                                rax_10 = data_14000dd4c;
                                
                                if (data_14000dd48 < 0xa)
                                {
                                    rax = nullptr;
                                    break;
                                }
                                
                                rax = nullptr;
                            } while ((~rax_10 * rax_10) & 1);
                        }
                    }
                }
            }
        }
        else
        {
            *(arg1 + 0x38) = result;
            arg2[7] = 0;
        }
    }
    
    return result;
}

int64_t sub_1400079f0(int64_t* arg1, int64_t arg2)
{
    int64_t __saved_rbp_1;
    int64_t __saved_rbp = __saved_rbp_1;
    int64_t __saved_r15_1;
    int64_t __saved_r15 = __saved_r15_1;
    int64_t __saved_r14_1;
    int64_t __saved_r14 = __saved_r14_1;
    int64_t __saved_r13_1;
    int64_t __saved_r13 = __saved_r13_1;
    int64_t __saved_r12_1;
    int64_t __saved_r12 = __saved_r12_1;
    int64_t __saved_rsi_1;
    int64_t __saved_rsi = __saved_rsi_1;
    int64_t __saved_rdi_1;
    int64_t __saved_rdi = __saved_rdi_1;
    int64_t __saved_rbx_1;
    int64_t __saved_rbx = __saved_rbx_1;
    void var_58;
    void* rsp_1 = &var_58;
    int64_t var_48 = -2;
    int64_t rax_9;
    
    while (true)
    {
        __chkstk(0x10);
        __chkstk(0x10);
        (data_14000d480 - 0x3a3fb522c89c6f5e)(rsp_1 - 0x20, arg2);
        (data_14000d488 - 0x3a3fb522c89c6f5e)(rsp_1 - 0x10, rsp_1 - 0x20);
        (data_14000d490 - 0x3a3fb522c89c6f5e)(rsp_1 - 0x20);
        *(rsp_1 - 0x10);
        void* rax_8 = data_14000d498 - 0x3a3fb522c89c6f5e;
        *(rsp_1 - 0x28) = &arg1[1];
        *(rsp_1 - 0x30) = 0;
        rax_9 = rax_8(/* nop */);
        void* rsp_11 = rsp_1 - 0x20;
        *arg1 = rax_9;
        
        if (data_14000df58 < 0xa)
            break;
        
        int32_t rcx_4 = data_14000df5c;
        
        if (!((~rcx_4 * rcx_4) & 1))
            break;
        
        __chkstk(0x10);
        __chkstk(0x10);
        (data_14000d480 - 0x3a3fb522c89c6f5e)(rsp_11 - 0x20, arg2);
        (data_14000d488 - 0x3a3fb522c89c6f5e)(rsp_11 - 0x10, rsp_11 - 0x20);
        (data_14000d490 - 0x3a3fb522c89c6f5e)(rsp_11 - 0x20);
        *(rsp_11 - 0x10);
        void* rax_17 = data_14000d498 - 0x3a3fb522c89c6f5e;
        *(rsp_11 - 0x28) = &arg1[1];
        *(rsp_11 - 0x30) = 0;
        rsp_1 = rsp_11 - 0x20;
        *arg1 = rax_17(/* nop */);
    }
    
    if (!rax_9)
    {
        void* var_50 = rsp_1 - 0x10;
        arg1[1] = 0;
        std::_Throw_Cpp_error(6);
        /* no return */
    }
    
    *(rsp_1 - 0x10) = 0;
    
    while (true)
    {
        int32_t result = (data_14000d490 - 0x3a3fb522c89c6f5e)(rsp_1 - 0x10);
        
        if (data_14000df58 >= 0xa)
            result = data_14000df5c;
        
        if (data_14000df58 < 0xa || !((~result * result) & 1))
            return result;
        
        (data_14000d490 - 0x3a3fb522c89c6f5e)(rsp_1 - 0x10);
    }
}

void sub_140007c17() __noreturn
{
    breakpoint();
}

int64_t sub_140007c20(int64_t arg1, void* arg2)
{
    void* arg_10 = arg2;
    return (-0x3a3fb522c89c6f5e + data_14000d490)(*(arg2 + 8));
}

int64_t sub_140007c70(int64_t arg1, int64_t arg2)
{
    int64_t __saved_rbx;
    int64_t rax_1 = __security_cookie ^ &__saved_rbx;
    
    while (true)
    {
        __chkstk(0x10);
        int64_t rax_4 = (data_14000d4a0 + 0x26c0aa2c9722755d)(8);
        (data_14000d4a8 + 0x26c0aa2c9722755d)(rax_4, arg2);
        void* rsp;
        *(rsp - 0x10) = rax_4;
        (data_14000d4b0 + 0x26c0aa2c9722755d)(arg1, rsp - 0x10);
        (data_14000d4b8 + 0x26c0aa2c9722755d)(rsp - 0x10);
        int32_t rax_11;
        
        if (data_14000df60 >= 0xa)
            rax_11 = data_14000df64;
        
        if (data_14000df60 < 0xa || !((~rax_11 * rax_11) & 1))
        {
            __security_check_cookie(rax_1 ^ &__saved_rbx);
            return arg1;
        }
        
        __chkstk(0x10);
        int64_t rax_14 = (data_14000d4a0 + 0x26c0aa2c9722755d)(8);
        (data_14000d4a8 + 0x26c0aa2c9722755d)(rax_14, arg2);
        *(rsp - 0x20) = rax_14;
        (data_14000d4b0 + 0x26c0aa2c9722755d)(arg1, rsp - 0x20);
        (data_14000d4b8 + 0x26c0aa2c9722755d)(rsp - 0x20);
    }
}

int64_t* sub_140007df0(int64_t* arg1, int64_t* arg2)
{
    while (true)
    {
        int64_t rcx = *arg2;
        
        while (true)
        {
            *arg2 = 0;
            
            if (data_14000df68 >= 0xa)
            {
                int32_t r8_1 = data_14000df6c;
                
                if ((~r8_1 * r8_1) & 1)
                {
                    int32_t rcx_1;
                    
                    do
                    {
                        *arg2 = 0;
                        
                        if (data_14000df68 < 0xa)
                        {
                            rcx = 0;
                            
                            if (data_14000df70 >= 0xa)
                                goto label_140007e7c;
                            
                            goto label_140007f51;
                        }
                        
                        rcx_1 = data_14000df6c;
                        rcx = 0;
                    } while ((~rcx_1 * rcx_1) & 1);
                }
            }
            
            if (data_14000df70 < 0xa)
                break;
            
        label_140007e7c:
            int32_t r8_6 = data_14000df74;
            
            if (!((~r8_6 * r8_6) & 1))
                break;
            
            *arg2 = 0;
            rcx = 0;
            
            if (data_14000df68 >= 0xa)
            {
                int32_t rcx_2 = data_14000df6c;
                rcx = 0;
                
                if ((~rcx_2 * rcx_2) & 1)
                {
                    int32_t rcx_3;
                    
                    do
                    {
                        *arg2 = 0;
                        rcx_3 = data_14000df6c;
                        
                        if (data_14000df68 < 0xa)
                        {
                            rcx = 0;
                            break;
                        }
                        
                        rcx = 0;
                    } while ((~rcx_3 * rcx_3) & 1);
                }
            }
        }
        
    label_140007f51:
        int32_t r8_15;
        
        do
        {
            *arg1 = rcx;
            
            if (data_14000df78 < 0xa)
                break;
            
            r8_15 = data_14000df7c;
        } while ((~r8_15 * r8_15) & 1);
        
        if (data_14000df80 < 0xa)
            break;
        
        int32_t rcx_4 = data_14000df84;
        
        if (!((~rcx_4 * rcx_4) & 1))
            break;
        
        int64_t rcx_5 = *arg2;
        
        while (true)
        {
            *arg2 = 0;
            
            if (data_14000df68 >= 0xa)
            {
                int32_t r8_20 = data_14000df6c;
                
                if ((~r8_20 * r8_20) & 1)
                {
                    int32_t rcx_6;
                    
                    do
                    {
                        *arg2 = 0;
                        
                        if (data_14000df68 < 0xa)
                        {
                            rcx_5 = 0;
                            
                            if (data_14000df70 >= 0xa)
                                goto label_140007fec;
                            
                            goto label_1400080a0;
                        }
                        
                        rcx_6 = data_14000df6c;
                        rcx_5 = 0;
                    } while ((~rcx_6 * rcx_6) & 1);
                }
            }
            
            if (data_14000df70 < 0xa)
                break;
            
        label_140007fec:
            int32_t r8_25 = data_14000df74;
            
            if (!((~r8_25 * r8_25) & 1))
                break;
            
            *arg2 = 0;
            rcx_5 = 0;
            
            if (data_14000df68 >= 0xa)
            {
                int32_t rcx_7 = data_14000df6c;
                rcx_5 = 0;
                
                if ((~rcx_7 * rcx_7) & 1)
                {
                    int32_t rcx_8;
                    
                    do
                    {
                        *arg2 = 0;
                        rcx_8 = data_14000df6c;
                        
                        if (data_14000df68 < 0xa)
                        {
                            rcx_5 = 0;
                            break;
                        }
                        
                        rcx_5 = 0;
                    } while ((~rcx_8 * rcx_8) & 1);
                }
            }
        }
        
    label_1400080a0:
        *arg1 = rcx_5;
        
        if (data_14000df78 >= 0xa)
        {
            int32_t r8_34 = data_14000df7c;
            
            if ((~r8_34 * r8_34) & 1)
            {
                int32_t r8_35;
                
                do
                {
                    *arg1 = rcx_5;
                    r8_35 = data_14000df7c;
                    
                    if (data_14000df78 < 0xa)
                        break;
                } while ((~r8_35 * r8_35) & 1);
            }
        }
    }
    
    return arg1;
}

void sub_140008110(int64_t* arg1)
{
    int64_t rdi = *arg1;
    
    if (!rdi)
        return;
    
    while (true)
    {
        int32_t rax;
        
        if (rdi)
        {
            while (true)
            {
                (data_14000d4c0 - 0x129efe4b18a6b018)(rdi);
                
                if (data_14000df88 < 0xa)
                    break;
                
                rax = data_14000df8c;
                
                if (!((~rax * rax) & 1))
                    break;
                
                (data_14000d4c0 - 0x129efe4b18a6b018)(rdi);
            }
        }
        
        if (data_14000df90 < 0xa)
            break;
        
        rax = data_14000df94;
        
        if (!((~rax * rax) & 1))
            break;
        
        int64_t rdi_1 = *arg1;
        
        if (rdi_1)
        {
            while (true)
            {
                (data_14000d4c0 - 0x129efe4b18a6b018)(rdi_1);
                
                if (data_14000df88 < 0xa)
                    break;
                
                rax = data_14000df8c;
                
                if (!((~rax * rax) & 1))
                    break;
                
                (data_14000d4c0 - 0x129efe4b18a6b018)(rdi_1);
            }
        }
        
        rdi = *arg1;
    }
}

void sub_140008210(int64_t* arg1, int512_t arg2 @ zmm0) __noreturn
{
    int64_t var_10 = -2;
    sub_140008350(arg1, arg2);
    /* no return */
}

void sub_140008230(int64_t arg1, int64_t arg2) __noreturn
{
    int64_t arg_10 = arg2;
    (0xcd4143376e24cc1 + data_14000d4c8)();
    breakpoint();
}

void sub_140008350(int64_t* arg1, int512_t arg2 @ zmm0) __noreturn
{
    void var_88;
    int64_t var_48 = __security_cookie ^ &var_88;
    int64_t* r12 = *arg1;
    int64_t var_58;
    int64_t rcx_7;
    void* rbp_1;
    
    while (true)
    {
    label_140008400:
        int64_t var_50;
        (data_14000d4d0 + 0x3cf5cddca6ac1758)(&var_50);
        (data_14000d4d8 + 0x3cf5cddca6ac1758)(&r12[5]);
        int64_t var_60;
        (data_14000d4d0 + 0x3cf5cddca6ac1758)(&var_60);
        int64_t rax_22;
        int64_t rdx_7;
        rdx_7 = HIGHQ((var_60 - (var_50 + r12[5])) * 0x431bde82d7b634db);
        rax_22 = LOWQ((var_60 - (var_50 + r12[5])) * 0x431bde82d7b634db);
        int64_t rax_25 = (rdx_7 >> 0x12) + (rdx_7 >> 0x3f);
        var_58 = rax_25;
        
        if (data_14000dfa8 >= 0xa)
        {
            int32_t rdx_9 = data_14000dfac;
            
            if ((~rdx_9 * rdx_9) & 1)
            {
                (data_14000d4d0 + 0x3cf5cddca6ac1758)(&var_50);
                (data_14000d4d8 + 0x3cf5cddca6ac1758)(&r12[5]);
                (data_14000d4d0 + 0x3cf5cddca6ac1758)(&var_60);
                int64_t rax_10;
                int64_t rdx_3;
                rdx_3 = HIGHQ((var_60 - (var_50 + r12[5])) * 0x431bde82d7b634db);
                rax_10 = LOWQ((var_60 - (var_50 + r12[5])) * 0x431bde82d7b634db);
                var_58 = (rdx_3 >> 0x12) + (rdx_3 >> 0x3f);
                continue;
            }
        }
        
        if (r12[4] < rax_25 * 0xf4240)
        {
            r12[3] += rax_25;
            rbp_1 = *r12;
            rcx_7 = r12[1];
            
            if (rbp_1 != rcx_7)
                break;
        }
    }
    
    int64_t* rcx_8;
    
    while (true)
    {
        rcx_8 = *(rbp_1 + 0x38);
        
        if (!rcx_8)
            break;
        
        while (true)
        {
            (*(*rcx_8 + 0x10))(arg2, &var_58);
            
            if (data_14000dfb0 >= 0xa)
            {
                int32_t rax_30 = data_14000dfb4;
                
                if ((~rax_30 * rax_30) & 1)
                {
                    int64_t* rcx_13 = *(rbp_1 + 0x38);
                    (*(*rcx_13 + 0x10))(rcx_13, &var_58);
                    rcx_8 = *(rbp_1 + 0x38);
                    continue;
                }
            }
            
            if (data_14000dfa8 >= 0xa)
            {
                int32_t rax_32 = data_14000dfac;
                
                if ((~rax_32 * rax_32) & 1)
                {
                    rcx_8 = *(rbp_1 + 0x38);
                    
                    if (!rcx_8)
                        goto label_140008586;
                    
                    while (true)
                    {
                        (*(*rcx_8 + 0x10))(arg2, &var_58);
                        
                        if (data_14000dfb0 < 0xa)
                            break;
                        
                        int32_t rax_34 = data_14000dfb4;
                        
                        if (!((~rax_34 * rax_34) & 1))
                            break;
                        
                        int64_t* rcx_22 = *(rbp_1 + 0x38);
                        (*(*rcx_22 + 0x10))(rcx_22, &var_58);
                        rcx_8 = *(rbp_1 + 0x38);
                    }
                    
                    int64_t* rax_28 = *(rbp_1 + 0x38);
                    rcx_8 = rax_28;
                    
                    if (!rax_28)
                        goto label_140008586;
                    
                    continue;
                }
            }
            
            void* rax_27 = rbp_1 + 0x40;
            rbp_1 = rax_27;
            
            if (rax_27 == rcx_7)
                goto label_140008400;
            
            break;
        }
    }
    
label_140008586:
    (0x3cf5cddca6ac1758 + data_14000d4e0)(rcx_8);
    breakpoint();
}

int64_t* sub_140008590(int64_t* arg1)
{
    int64_t rax_2 = (data_14000d4e8 + 0x53fc7c1186bc6d02)();
    int64_t rax_5 = (data_14000d4f0 + 0x53fc7c1186bc6d02)();
    void var_58;
    void* rsp = &var_58;
    void var_40;
    void* r15 = &var_40;
    void var_48;
    void* r11 = &var_48;
    void var_50;
    void* rbx = &var_50;
    int64_t r12;
    
    if (data_14000dfb8 < 0xa)
        r12 = rax_2;
    else
    {
        int32_t rcx = data_14000dfbc;
        r12 = rax_2;
        
        if ((~rcx * rcx) & 1)
        {
            int32_t rcx_1;
            
            do
            {
                (data_14000d4e8 + 0x53fc7c1186bc6d02)();
                (data_14000d4f0 + 0x53fc7c1186bc6d02)();
                __chkstk(0x10);
                rbx = rsp - 0x10;
                __chkstk(0x10);
                void* rsp_6 = rsp - 0x20;
                __chkstk(0x10);
                r15 = rsp_6 - 0x10;
                r12 = (data_14000d4e8 + 0x53fc7c1186bc6d02)();
                rax_5 = (data_14000d4f0 + 0x53fc7c1186bc6d02)();
                rsp = rsp_6 - 0x10;
                
                if (data_14000dfb8 < 0xa)
                {
                    r11 = rsp_6;
                    break;
                }
                
                rcx_1 = data_14000dfbc;
                r11 = rsp_6;
            } while ((~rcx_1 * rcx_1) & 1);
        }
    }
    
    int64_t rax_15;
    
    if (r12 == 0x16e3600)
    {
        rax_15 = rax_5 % 0x16e3600 * 0x3b9aca00 / 0x16e3600 + rax_5 / 0x16e3600 * 0x3b9aca00;
        *r11 = rax_15;
    }
    else if (r12 != 0x989680)
    {
        uint64_t rax_32;
        uint64_t rdx_16;
        
        if (!((rax_5 | r12) >> 0x20))
        {
            int32_t rax_33 = rax_5;
            int32_t temp2_1 = r12;
            rax_32 = COMBINE(0, rax_33) / temp2_1;
            rdx_16 = COMBINE(0, rax_33) % temp2_1;
        }
        else
        {
            int64_t rax_31;
            int64_t rdx_15;
            rdx_15 = HIGHQ(rax_5);
            rax_31 = LOWQ(rax_5);
            rax_32 = COMBINE(rdx_15, rax_31) / r12;
            rdx_16 = COMBINE(rdx_15, rax_31) % r12;
        }
        
        int64_t rax_34 = rdx_16 * 0x3b9aca00;
        uint64_t rax_36;
        
        rax_36 = !((rax_34 | r12) >> 0x20) ? COMBINE(0, rax_34) / r12 : rax_34 / r12;
        
        rax_15 = rax_36 + rax_32 * 0x3b9aca00;
        *r15 = rax_15;
    }
    else
    {
        rax_15 = rax_5 * 0x64;
        *rbx = rax_15;
    }
    
    *arg1 = rax_15;
    return arg1;
}

int64_t sub_1400087b0(int64_t arg1)
{
    int64_t var_28 = __security_cookie ^ &var_28;
    void* rax_3 = data_14000d4f8 + 0x45d482ea13506f23;
    void var_58;
    void* rsp = &var_58;
    void var_30;
    void* rdi = &var_30;
    
    while (true)
    {
        rax_3(rdi, arg1);
        int32_t result = (data_14000d500 + 0x45d482ea13506f23)(rdi);
        
        if (data_14000dfc0 >= 0xa)
            result = data_14000dfc4;
        
        if (data_14000dfc0 < 0xa || !((~result * result) & 1))
        {
            __security_check_cookie(var_28 ^ &var_28);
            return result;
        }
        
        __chkstk(0x10);
        (data_14000d4f8 + 0x45d482ea13506f23)(rsp + 0x10, arg1);
        (data_14000d500 + 0x45d482ea13506f23)(rsp + 0x10);
        __chkstk(0x10);
        rdi = rsp;
        rax_3 = data_14000d4f8 + 0x45d482ea13506f23;
        rsp -= 0x20;
    }
}

int64_t sub_1400088b0(int64_t* arg1)
{
    void var_58;
    int64_t rax_1 = __security_cookie ^ &var_58;
    int64_t result;
    
    while (true)
    {
        int64_t var_38;
        (data_14000d508 - 0x153236f54b27ba5b)(&var_38);
        result = *arg1;
        int64_t rcx_2 = var_38;
        
        if (data_14000dfc8 >= 0xa)
        {
            int32_t rdx_1 = data_14000dfcc;
            
            if ((~rdx_1 * rdx_1) & 1)
            {
                (data_14000d508 - 0x153236f54b27ba5b)(&var_38);
                continue;
            }
        }
        
        int64_t result_1 = result;
        int64_t r8_5 = rcx_2;
        
        if (rcx_2 >= result)
            break;
        
        while (true)
        {
            int64_t rcx_5 = result_1 - r8_5;
            int32_t rax_9 = 0x5265c00;
            
            if (rcx_5 <= 0x4e94914f0000)
            {
                int64_t rax_14 = rcx_5 / 0xf4240;
                rcx_5 = rax_14 * 0xf4240 < rcx_5;
                int32_t rdx_5;
                rdx_5 = rcx_5;
                rax_9 = rdx_5 + rax_14;
            }
            
            (data_14000d510 - 0x153236f54b27ba5b)(rax_9);
            int32_t rax_17 = data_14000dfcc;
            
            if (data_14000dfc8 < 0xa)
                break;
            
            if (!((~rax_17 * rax_17) & 1))
                break;
            
            int64_t rcx_13 = *arg1 - var_38;
            int32_t rax_6 = 0x5265c00;
            
            if (rcx_13 <= 0x4e94914f0000)
            {
                int64_t rax_24 = rcx_13 / 0xf4240;
                rcx_13 = rax_24 * 0xf4240 < rcx_13;
                int32_t rdx_9;
                rdx_9 = rcx_13;
                rax_6 = rdx_9 + rax_24;
            }
            
            (data_14000d510 - 0x153236f54b27ba5b)(rax_6);
            r8_5 = var_38;
            result_1 = *arg1;
        }
    }
    
    __security_check_cookie(rax_1 ^ &var_58);
    return result;
}

int64_t* sub_140008a50(int64_t* arg1, int64_t* arg2)
{
    int64_t rax;
    int64_t var_38 = rax;
    int64_t* rsp = &var_38;
    var_38 = __security_cookie ^ &var_38;
    int64_t rax_5;
    int64_t rcx_1;
    
    while (true)
    {
        __chkstk(0x10);
        (data_14000d518 + 0x37590cef41ab89c9)(rsp - 0x10);
        rax_5 = *(rsp - 0x10);
        rcx_1 = *arg2;
        
        if (data_14000dfd0 < 0xa)
            break;
        
        int32_t rdx = data_14000dfd4;
        
        if (!((~rdx * rdx) & 1))
            break;
        
        __chkstk(0x10);
        (data_14000d518 + 0x37590cef41ab89c9)(rsp - 0x20);
        rsp -= 0x20;
    }
    
    if (rcx_1 > 0)
    {
        int64_t r8_5 = rax_5 + rcx_1;
        
        if (rax_5 >= (rcx_1 ^ 0x7fffffffffffffff))
            r8_5 = 0x7fffffffffffffff;
        
        rax_5 = r8_5;
    }
    
    *arg1 = rax_5;
    __security_check_cookie(var_38 ^ &var_38);
    return arg1;
}

int64_t sub_140008b40()
{
    if (data_14000dfd8 >= 0xa)
    {
        int32_t rax_1 = data_14000dfdc;
        
        if ((~rax_1 * rax_1) & 1)
        {
            while (true)
                /* nop */
        }
    }
    
    while (true)
    {
        int32_t result = (data_14000d520 - 0x11bb304ee0e6bbc6)();
        int32_t rcx_8;
        
        if (data_14000dfd8 >= 0xa)
        {
            result = data_14000dfdc;
            rcx_8 = (~result * result) & 1;
        }
        
        if (data_14000dfd8 < 0xa || !rcx_8)
            return result;
        
        (data_14000d520 - 0x11bb304ee0e6bbc6)(rcx_8);
    }
}

int64_t sub_140008bb0(char* arg1, int64_t arg2)
{
    if (data_14000db6c != 1)
    {
        int64_t r9_1 = 0;
        int64_t rax_8;
        
        do
        {
            arg1[r9_1] = *(arg2 + r9_1 + 0x12) ^ *(arg2 + r9_1 % 0x12);
            rax_8 = r9_1 + 1;
            r9_1 = rax_8;
        } while (rax_8 != 0x1b);
        data_14000db6c = 1;
    }
    
    return 0x91c3a71a;
}

int64_t sub_140008c20(int64_t arg1, char* arg2)
{
    if (data_14000db78 != 1)
    {
        int64_t rdx = 0;
        char* r10_1 = arg2;
        int64_t rax_1 = 0x1c;
        int64_t r11_2;
        
        do
        {
            *(arg1 + rax_1 - 0x1c) = arg2[rax_1] ^ *(r10_1 - rdx / 0x1c * 0x1c);
            r11_2 = rax_1 + 1;
            rax_1 = r11_2;
            r10_1 = &r10_1[1];
            rdx += 1;
        } while (r11_2 != 0x23);
        data_14000db78 = 1;
    }
    
    return 0xbdec2457;
}

int64_t sub_140008ca0(int64_t arg1, char* arg2)
{
    if (data_14000db8c != 1)
    {
        int64_t rdx = 0;
        char* r10_1 = arg2;
        int64_t rax_1 = 0x1c;
        int64_t r11_2;
        
        do
        {
            *(arg1 + rax_1 - 0x1c) = arg2[rax_1] ^ *(r10_1 - rdx / 0x1c * 0x1c);
            r11_2 = rax_1 + 1;
            rax_1 = r11_2;
            r10_1 = &r10_1[1];
            rdx += 1;
        } while (r11_2 != 0x2b);
        data_14000db8c = 1;
    }
    
    return 0x51bd8801;
}

int64_t sub_140008d20(int64_t arg1, char* arg2)
{
    if (data_14000db98 != 1)
    {
        char* r8_1 = arg2;
        int64_t r9_1 = 0;
        int64_t rax_1 = 0x14;
        int64_t r11_2;
        
        do
        {
            *(arg1 + rax_1 - 0x14) = r8_1[rax_1] ^ arg2[-((((r9_1 / 5) & 0xfffffffffffffffc) * 5))];
            r11_2 = rax_1 + 1;
            rax_1 = r11_2;
            r9_1 += 1;
            arg2 = &arg2[1];
        } while (r11_2 != 0x1c);
        data_14000db98 = 1;
    }
    
    return 0xc9676d0a;
}

int64_t sub_140008d90(char* arg1, int64_t arg2)
{
    if (data_14000dbb4 != 1)
    {
        int64_t rax_1 = 0;
        int64_t r8_3;
        
        do
        {
            arg1[rax_1] = *(arg2 + rax_1 + 0x10) ^ *(arg2 + (rax_1 & 0xf));
            r8_3 = rax_1 + 1;
            rax_1 = r8_3;
        } while (r8_3 != 0x17);
        data_14000dbb4 = 1;
    }
    
    return 0x931a3ec6;
}

int64_t sub_140008de0(int64_t arg1, char* arg2)
{
    if (data_14000dbc8 != 1)
    {
        int64_t rdx = 0;
        char* r10_1 = arg2;
        int64_t rax_1 = 0x1c;
        int64_t r11_2;
        
        do
        {
            *(arg1 + rax_1 - 0x1c) = arg2[rax_1] ^ *(r10_1 - rdx / 0x1c * 0x1c);
            r11_2 = rax_1 + 1;
            rax_1 = r11_2;
            r10_1 = &r10_1[1];
            rdx += 1;
        } while (r11_2 != 0x29);
        data_14000dbc8 = 1;
    }
    
    return 0xa3acc46d;
}

int64_t sub_140008e60(int64_t arg1, char* arg2)
{
    if (data_14000dbdc != 1)
    {
        char* r8_1 = arg2;
        int64_t r9_1 = 0;
        int64_t rax_1 = 0x16;
        int64_t r11_2;
        
        do
        {
            *(arg1 + rax_1 - 0x16) = r8_1[rax_1] ^ *(arg2 - r9_1 / 0x16 * 0x16);
            r11_2 = rax_1 + 1;
            rax_1 = r11_2;
            r9_1 += 1;
            arg2 = &arg2[1];
        } while (r11_2 != 0x23);
        data_14000dbdc = 1;
    }
    
    return 0xcf991d4;
}

int64_t sub_140008ed0(int64_t arg1, char* arg2)
{
    if (data_14000dbf0 != 1)
    {
        int64_t r9_1 = 0;
        char* r11_1 = arg2;
        int64_t rax_1 = 0x15;
        int64_t rsi_2;
        
        do
        {
            *(arg1 + rax_1 - 0x15) = arg2[rax_1] ^ *(r11_1 - r9_1 / 0x15 * 0x15);
            rsi_2 = rax_1 + 1;
            rax_1 = rsi_2;
            r11_1 = &r11_1[1];
            r9_1 += 1;
        } while (rsi_2 != 0x23);
        data_14000dbf0 = 1;
    }
    
    return 0xa4dad5e6;
}

int64_t sub_140008f50(int64_t arg1, char* arg2)
{
    if (data_14000dc04 != 1)
    {
        int64_t rdx = 0;
        char* r10_1 = arg2;
        int64_t rax_1 = 0x1c;
        int64_t r11_2;
        
        do
        {
            *(arg1 + rax_1 - 0x1c) = arg2[rax_1] ^ *(r10_1 - rdx / 0x1c * 0x1c);
            r11_2 = rax_1 + 1;
            rax_1 = r11_2;
            r10_1 = &r10_1[1];
            rdx += 1;
        } while (r11_2 != 0x29);
        data_14000dc04 = 1;
    }
    
    return 0xfc702d12;
}

int64_t sub_140008fd0(int64_t arg1, char* arg2)
{
    if (data_14000dc10 != 1)
    {
        char* r8_1 = arg2;
        int64_t r9_1 = 0;
        int64_t rax_1 = 0x16;
        int64_t r11_2;
        
        do
        {
            *(arg1 + rax_1 - 0x16) = r8_1[rax_1] ^ *(arg2 - r9_1 / 0x16 * 0x16);
            r11_2 = rax_1 + 1;
            rax_1 = r11_2;
            r9_1 += 1;
            arg2 = &arg2[1];
        } while (r11_2 != 0x1c);
        data_14000dc10 = 1;
    }
    
    return 0xcf3965db;
}

int64_t sub_140009040(int64_t arg1, char* arg2)
{
    if (data_14000dc1c != 1)
    {
        int64_t r9_1 = 0;
        char* r11_1 = arg2;
        int64_t rax_1 = 0x15;
        int64_t rsi_2;
        
        do
        {
            *(arg1 + rax_1 - 0x15) = arg2[rax_1] ^ *(r11_1 - r9_1 / 0x15 * 0x15);
            rsi_2 = rax_1 + 1;
            rax_1 = rsi_2;
            r11_1 = &r11_1[1];
            r9_1 += 1;
        } while (rsi_2 != 0x1a);
        data_14000dc1c = 1;
    }
    
    return 0xc5dd473c;
}

int64_t sub_1400090c0(char* arg1, int64_t arg2)
{
    if (data_14000dc2c != 1)
    {
        int64_t rax_1 = 0;
        int64_t r8_3;
        
        do
        {
            arg1[rax_1] = *(arg2 + rax_1 + 0x10) ^ *(arg2 + rax_1);
            r8_3 = rax_1 + 1;
            rax_1 = r8_3;
        } while (r8_3 != 0xb);
        data_14000dc2c = 1;
    }
    
    return 0x295fcf51;
}

int64_t sub_140009100(char* arg1, int64_t arg2)
{
    if (data_14000dc4c != 1)
    {
        int64_t r9_1 = 0;
        int64_t rax_7;
        
        do
        {
            arg1[r9_1] = *(arg2 + r9_1 + 0x13) ^ *(arg2 + r9_1 / 0x13 * 0xffffffed + r9_1);
            rax_7 = r9_1 + 1;
            r9_1 = rax_7;
        } while (rax_7 != 0x1a);
        data_14000dc4c = 1;
    }
    
    return 0x4106c50e;
}

int64_t sub_140009170(int64_t arg1, char* arg2)
{
    if (data_14000dc54 != 1)
    {
        char* r8_1 = arg2;
        int64_t r9_1 = 0;
        int64_t rax_1 = 0x16;
        int64_t r11_2;
        
        do
        {
            *(arg1 + rax_1 - 0x16) = r8_1[rax_1] ^ *(arg2 - r9_1 / 0x16 * 0x16);
            r11_2 = rax_1 + 1;
            rax_1 = r11_2;
            r9_1 += 1;
            arg2 = &arg2[1];
        } while (r11_2 != 0x18);
        data_14000dc54 = 1;
    }
    
    return 0xbe20f6f1;
}

int64_t sub_1400091e0(int64_t arg1, char* arg2)
{
    if (data_14000dc5c != 1)
    {
        char* r8_1 = arg2;
        int64_t r9_1 = 0;
        int64_t rax_1 = 0x1b;
        int64_t r11_2;
        
        do
        {
            *(arg1 + rax_1 - 0x1b) = r8_1[rax_1] ^ *(arg2 - r9_1 / 0x1b * 0x1b);
            r11_2 = rax_1 + 1;
            rax_1 = r11_2;
            r9_1 += 1;
            arg2 = &arg2[1];
        } while (r11_2 != 0x1d);
        data_14000dc5c = 1;
    }
    
    return 0x4cbd5c80;
}

int64_t sub_140009250(char* arg1, int64_t arg2)
{
    if (data_14000dc84 != 1)
    {
        int64_t r9_1 = 0;
        int64_t rax_7;
        
        do
        {
            arg1[r9_1] = *(arg2 + r9_1 + 0x1b) ^ *(arg2 + r9_1 / 0x1b * 0xffffffe5 + r9_1);
            rax_7 = r9_1 + 1;
            r9_1 = rax_7;
        } while (rax_7 != 0x21);
        data_14000dc84 = 1;
    }
    
    return 0x92304e0b;
}

int64_t sub_1400092c0(int64_t arg1, char* arg2)
{
    if (data_14000dc98 != 1)
    {
        int64_t r9_1 = 0;
        char* r11_1 = arg2;
        int64_t rax_1 = 0x1d;
        int64_t rsi_2;
        
        do
        {
            *(arg1 + rax_1 - 0x1d) = arg2[rax_1] ^ *(r11_1 - r9_1 / 0x1d * 0x1d);
            rsi_2 = rax_1 + 1;
            rax_1 = rsi_2;
            r11_1 = &r11_1[1];
            r9_1 += 1;
        } while (rsi_2 != 0x2a);
        data_14000dc98 = 1;
    }
    
    return 0xd5adef02;
}

int64_t sub_140009340(int64_t arg1, char* arg2)
{
    if (data_14000dcac != 1)
    {
        int64_t r9_1 = 0;
        char* r11_1 = arg2;
        int64_t rax_1 = 0x17;
        int64_t rsi_2;
        
        do
        {
            *(arg1 + rax_1 - 0x17) = arg2[rax_1] ^ *(r11_1 - r9_1 / 0x17 * 0x17);
            rsi_2 = rax_1 + 1;
            rax_1 = rsi_2;
            r11_1 = &r11_1[1];
            r9_1 += 1;
        } while (rsi_2 != 0x27);
        data_14000dcac = 1;
    }
    
    return 0xb645917a;
}

int64_t sub_1400093c0(int64_t arg1, char* arg2)
{
    if (data_14000dcb4 != 1)
    {
        int64_t r9_1 = 0;
        char* r11_1 = arg2;
        int64_t rax_1 = 0x19;
        int64_t rsi_2;
        
        do
        {
            *(arg1 + rax_1 - 0x19) = arg2[rax_1] ^ *(r11_1 - r9_1 / 0x19 * 0x19);
            rsi_2 = rax_1 + 1;
            rax_1 = rsi_2;
            r11_1 = &r11_1[1];
            r9_1 += 1;
        } while (rsi_2 != 0x1b);
        data_14000dcb4 = 1;
    }
    
    return 0xc9c6fad2;
}

int64_t sub_140009440(int64_t arg1, char* arg2)
{
    if (data_14000dcbc != 1)
    {
        int64_t r9_1 = 0;
        char* r11_1 = arg2;
        int64_t rax_1 = 0x19;
        int64_t rsi_2;
        
        do
        {
            *(arg1 + rax_1 - 0x19) = arg2[rax_1] ^ *(r11_1 - r9_1 / 0x19 * 0x19);
            rsi_2 = rax_1 + 1;
            rax_1 = rsi_2;
            r11_1 = &r11_1[1];
            r9_1 += 1;
        } while (rsi_2 != 0x1c);
        data_14000dcbc = 1;
    }
    
    return 0x6eeecf00;
}

int64_t sub_1400094c0(int64_t arg1, char* arg2)
{
    if (data_14000dcd8 != 1)
    {
        int64_t r9_1 = 0;
        char* r11_1 = arg2;
        int64_t rax_1 = 0x17;
        int64_t rsi_2;
        
        do
        {
            *(arg1 + rax_1 - 0x17) = arg2[rax_1] ^ *(r11_1 - r9_1 / 0x17 * 0x17);
            rsi_2 = rax_1 + 1;
            rax_1 = rsi_2;
            r11_1 = &r11_1[1];
            r9_1 += 1;
        } while (rsi_2 != 0x2c);
        data_14000dcd8 = 1;
    }
    
    return 0x3fc3a467;
}

int64_t sub_140009540(int64_t arg1, char* arg2)
{
    if (data_14000dcf0 != 1)
    {
        int64_t r9_1 = 0;
        char* r11_1 = arg2;
        int64_t rax_1 = 0x1d;
        int64_t rsi_2;
        
        do
        {
            *(arg1 + rax_1 - 0x1d) = arg2[rax_1] ^ *(r11_1 - r9_1 / 0x1d * 0x1d);
            rsi_2 = rax_1 + 1;
            rax_1 = rsi_2;
            r11_1 = &r11_1[1];
            r9_1 += 1;
        } while (rsi_2 != 0x2f);
        data_14000dcf0 = 1;
    }
    
    return 0xd1df2abe;
}

int64_t operator new(uint64_t arg1)
{
    uint64_t _Size = arg1;
    
    while (true)
    {
        int64_t result = malloc(arg1);
        
        if (result)
            return result;
        
        if (!_callnewh(_Size))
            break;
        
        arg1 = _Size;
    }
    
    if (_Size == -1)
    {
        __scrt_throw_std_bad_alloc();
        /* no return */
    }
    
    stdext::threads::_Throw_lock_error();
    /* no return */
}

void sub_1400095fc(void* _Block)
{
    /* tailcall */
    return free(_Block);
}

void sub_140009604(void* _Block)
{
    /* tailcall */
    return sub_1400095fc(_Block);
}

struct type_info::VTable** type_info::`scalar deleting destructor'(struct type_info::VTable** arg1, char arg2)
{
    *arg1 = &type_info::`vftable';
    
    if (arg2 & 1)
        sub_140009604(arg1);
    
    return arg1;
}

void __chkstk(int64_t arg1 @ rax)
{
    void arg_8;
    void* r10 = &arg_8 - arg1;
    
    if (&arg_8 < arg1)
        r10 = nullptr;
    
    TEB* gsbase;
    void* StackLimit = gsbase->NtTib.StackLimit;
    
    if (r10 >= StackLimit)
        return;
    
    r10 &= 0xf000;
    
    do
    {
        StackLimit -= 0x1000;
        *StackLimit = 0;
    } while (r10 != StackLimit);
}

int64_t __security_check_cookie(int64_t arg1)
{
    if (arg1 == __security_cookie)
    {
        int64_t rcx = ROLQ(arg1, 0x10);
        
        if (!(rcx & 0xffff))
            return;
        
        arg1 = RORQ(rcx, 0x10);
    }
    
    /* tailcall */
    return __report_gsfailure(arg1);
}

uint64_t atexit(_PVFV arg1)
{
    _onexit_t_1 rax = _onexit(arg1);
    int32_t rax_1 = -(rax);
    return -((rax_1 - rax_1)) - 1;
}

_onexit_t_1 _onexit(_PVFV arg1)
{
    _onexit_t_1 _Function = arg1;
    int32_t rax;
    
    if (data_14000e370 != -1)
        rax = _register_onexit_function(&data_14000e370, _Function);
    else
        rax = _crt_atexit(arg1);
    
    if (!rax)
        return _Function;
    
    return nullptr;
}

uint64_t __scrt_is_nonwritable_in_current_image(int64_t arg1)
{
    struct Section_Header* const rdx_1 = &__section_headers;
    
    while (true)
    {
        struct Section_Header* const var_18_1 = rdx_1;
        
        if (rdx_1 == &data_140000270)
        {
            rdx_1 = nullptr;
            break;
        }
        
        uint64_t virtualAddress = rdx_1->virtualAddress;
        
        if (arg1 - &__dos_header >= virtualAddress
                && arg1 - &__dos_header < rdx_1->virtualSize + virtualAddress)
            break;
        
        rdx_1 = &rdx_1[1];
    }
    
    uint64_t result;
    
    if (!rdx_1)
        result = 0;
    else if (rdx_1->characteristics >= 0)
        result = 1;
    else
        result = 0;
    
    return result;
}

int64_t __scrt_acquire_startup_lock()
{
    int64_t result;
    
    if (!sub_140009ddc())
    {
    label_1400097ea:
        result = 0;
    }
    else
    {
        TEB* gsbase;
        void* StackBase = gsbase->NtTib.Self->NtTib.StackBase;
        
        do
        {
            result = 0;
            bool z_1;
            
            if (0 == data_14000e360)
            {
                data_14000e360 = StackBase;
                z_1 = true;
            }
            else
            {
                result = data_14000e360;
                z_1 = false;
            }
            
            if (z_1)
                goto label_1400097ea;
        } while (StackBase != result);
        
        result = 1;
    }
    
    return result;
}

int64_t __scrt_release_startup_lock(char arg1)
{
    int64_t rbx;
    rbx = arg1;
    int32_t result = sub_140009ddc();
    
    if (result && !rbx)
    {
        data_14000e360;
        data_14000e360 = 0;
    }
    
    return result;
}

int64_t __scrt_initialize_crt(int32_t arg1)
{
    if (!arg1)
        data_14000e368 = 1;
    
    int64_t xcr0;
    __isa_available_init(xcr0);
    
    if (sub_14000a358() && sub_14000a358())
        return 1;
    
    return 0;
}

int64_t __scrt_uninitialize_crt(char arg1, char arg2)
{
    int64_t rbx;
    rbx = arg1;
    data_14000e368;
    int64_t result;
    result = 1;
    return result;
}

int32_t __scrt_initialize_onexit_tables(int32_t arg1)
{
    int32_t result;
    
    if (data_14000e369)
        result = 1;
    else
    {
        if (arg1 > 1)
        {
            __scrt_fastfail(5);
            breakpoint();
        }
        
        if (!sub_140009ddc() || arg1)
        {
            __builtin_memset(&data_14000e370, 0xff, 0x30);
            data_14000e369 = 1;
            result = 1;
        }
        else if (_initialize_onexit_table(&data_14000e370))
            result = 0;
        else if (!_initialize_onexit_table(&data_14000e388))
        {
            data_14000e369 = 1;
            result = 1;
        }
        else
            result = 0;
    }
    
    return result;
}

struct std::exception::std::bad_alloc::VTable** std::bad_exception::bad_exception(struct std::exception::std::bad_alloc::VTable** arg1)
{
    arg1[2] = 0;
    arg1[1] = "bad allocation";
    *arg1 = &std::bad_alloc::`vftable'{for `std::exception'};
    return arg1;
}

int64_t Concurrency::invalid_oversubscribe_operation::~invalid_oversubscribe_operation(struct std::exception::VTable** arg1)
{
    *arg1 = &std::exception::`vftable';
    /* tailcall */
    return __std_exception_destroy(&arg1[1]);
}

void stdext::threads::_Throw_lock_error() __noreturn
{
    struct std::exception::std::bad_alloc::VTable* exceptionObject;
    std::bad_exception::bad_exception(&exceptionObject);
    _CxxThrowException(&exceptionObject, &data_14000ce98);
    /* no return */
}

void __scrt_throw_std_bad_alloc() __noreturn
{
    struct std::bad_alloc::std::bad_array_new_length::VTable* exceptionObject;
    sub_140006ce0(&exceptionObject);
    _CxxThrowException(&exceptionObject, &data_14000cda0);
    /* no return */
}

void __report_gsfailure(uint64_t stack_cookie) __noreturn
{
    uint64_t stack_cookie_1 = stack_cookie;
    
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE))
        trap(0xd);
    
    capture_previous_context(&data_14000e440);
    data_14000e538 = __return_addr;
    data_14000e4d8 = &stack_cookie_1;
    data_14000e3b0 = data_14000e538;
    data_14000e4c0 = stack_cookie_1;
    data_14000e3a0 = 0xc0000409;
    data_14000e3a4 = 1;
    data_14000e3b8 = 1;
    data_14000e3c0 = 2;
    uint64_t __security_cookie_1 = __security_cookie;
    int64_t var_10 = data_14000d680;
    __raise_securityfailure(&data_14000b790);
    /* no return */
}

int64_t sub_140009a5a() __pure
{
    return;
}

IMAGE_RUNTIME_FUNCTION_ENTRY* capture_previous_context(CONTEXT* arg1)
{
    RtlCaptureContext(arg1);
    uint64_t Rip = arg1->Rip;
    IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionEntry;
    
    for (int32_t i = 0; i < 2; i += 1)
    {
        uint64_t ImageBase;
        FunctionEntry = RtlLookupFunctionEntry(Rip, &ImageBase, nullptr);
        
        if (!FunctionEntry)
            break;
        
        uint64_t EstablisherFrame;
        void HandlerData;
        FunctionEntry = RtlVirtualUnwind(UNW_FLAG_NHANDLER, ImageBase, Rip, FunctionEntry, arg1, 
            &HandlerData, &EstablisherFrame, nullptr);
    }
    
    return FunctionEntry;
}

void __raise_securityfailure(EXCEPTION_POINTERS* arg1) __noreturn
{
    SetUnhandledExceptionFilter(0);
    UnhandledExceptionFilter(arg1);
    /* tailcall */
    return TerminateProcess(GetCurrentProcess(), 0xc0000409);
}

int64_t __isa_available_init(int64_t arg1 @ xcr0)
{
    int32_t temp0;
    int32_t temp1;
    int32_t temp2;
    int32_t temp3;
    temp0 = __cpuid(0, 0);
    int32_t temp0_1;
    int32_t temp1_1;
    int32_t temp2_1;
    int32_t temp3_1;
    temp0_1 = __cpuid(1, 0);
    int32_t var_28 = temp0_1;
    int32_t var_24 = temp1_1;
    int32_t var_20 = temp2_1;
    int32_t var_1c = temp3_1;
    int32_t rax_2;
    uint64_t rax_3;
    
    if (!((temp3 ^ 0x49656e69) | (temp2 ^ 0x6c65746e) | (temp1 ^ 0x756e6547)))
    {
        data_14000d6a8 = -1;
        rax_2 = temp0_1 & 0xfff3ff0;
        data_14000d6a0 = 0x8000;
        
        if (rax_2 != 0x106c0 && rax_2 != 0x20660 && rax_2 != 0x20670)
            rax_3 = rax_2 - 0x30650;
    }
    
    int32_t r8_3;
    
    if ((temp3 ^ 0x49656e69) | (temp2 ^ 0x6c65746e) | (temp1 ^ 0x756e6547) || (rax_2 != 0x106c0
            && rax_2 != 0x20660 && rax_2 != 0x20670
            && (rax_3 > 0x20 || !TEST_BITQ(0x100010001, rax_3))))
        r8_3 = data_14000e914;
    else
    {
        r8_3 = data_14000e914 | 1;
        data_14000e914 = r8_3;
    }
    
    int32_t r9_2 = 0;
    int32_t rsi = 0;
    int32_t r10_4 = 0;
    int32_t r11 = 0;
    
    if (temp0 >= 7)
    {
        int32_t temp0_2;
        int32_t temp1_2;
        int32_t temp2_2;
        int32_t temp3_2;
        temp0_2 = __cpuid(7, 0);
        int32_t var_28_1 = temp0_2;
        rsi = temp3_2;
        int32_t var_24_1 = temp1_2;
        r9_2 = temp1_2;
        int32_t var_20_1 = temp2_2;
        int32_t var_1c_1 = temp3_2;
        
        if (TEST_BITD(temp1_2, 9))
            data_14000e914 = r8_3 | 2;
        
        if (temp0_2 >= 1)
        {
            int32_t temp0_3;
            int32_t temp1_3;
            int32_t temp2_3;
            int32_t temp3_3;
            temp0_3 = __cpuid(7, 1);
            r10_4 = temp3_3;
            int32_t var_28_2 = temp0_3;
            int32_t var_24_2 = temp1_3;
            int32_t var_20_2 = temp2_3;
            int32_t var_1c_2 = temp3_3;
        }
        
        if (temp0 >= 0x24)
        {
            int32_t temp0_4;
            int32_t temp1_4;
            int32_t temp2_4;
            int32_t temp3_4;
            temp0_4 = __cpuid(0x24, 0);
            r11 = temp1_4;
            int32_t var_28_3 = temp0_4;
            int32_t var_24_3 = temp1_4;
            int32_t var_20_3 = temp2_4;
            int32_t var_1c_3 = temp3_4;
        }
    }
    
    int64_t rax_8 = data_14000d690 & 0xfffffffffffffffe;
    data_14000d698 = 1;
    data_14000d69c = 2;
    data_14000d690 = rax_8;
    
    if (TEST_BITD(temp2_1, 0x14))
    {
        data_14000d698 = 2;
        data_14000d690 = rax_8 & 0xffffffffffffffef;
        data_14000d69c = 6;
    }
    
    if (TEST_BITD(temp2_1, 0x1b))
    {
        int32_t temp0_5;
        int32_t temp1_5;
        temp0_5 = _xgetbv(0, arg1);
        uint64_t rdx_7 = temp0_5 << 0x20 | temp1_5;
        
        if (TEST_BITD(temp2_1, 0x1c) && (rdx_7 & 6) == 6)
        {
            int32_t rax_13 = data_14000d69c | 8;
            data_14000d698 = 3;
            data_14000d69c = rax_13;
            int64_t rax_16;
            
            if (!(r9_2 & 0x20))
                rax_16 = data_14000d690;
            else
            {
                data_14000d698 = 5;
                data_14000d69c = rax_13 | 0x20;
                rax_16 = data_14000d690 & 0xfffffffffffffffd;
                data_14000d690 = rax_16;
                
                if ((r9_2 & 0xd0030000) == 0xd0030000)
                {
                    if ((rdx_7 & 0xe0) != 0xe0)
                        rax_16 = data_14000d690;
                    else
                    {
                        int64_t rax_18 = data_14000d690;
                        data_14000d69c |= 0x40;
                        rax_16 = rax_18 & 0xffffffffffffffdb;
                        data_14000d698 = 6;
                        data_14000d690 = rax_16;
                    }
                }
            }
            
            if (TEST_BITD(rsi, 0x17))
                data_14000d690 = rax_16 & 0xfffffffffeffffff;
            
            if (TEST_BITD(r10_4, 0x13) && (rdx_7 & 0xe0) == 0xe0)
            {
                int32_t rax_22 = r11 & 0x400ff;
                data_14000e910 = rax_22;
                int64_t rcx_10 = ~((r11 >> 0x10 & 7) | 0x1000028) & data_14000d690;
                data_14000d690 = rcx_10;
                
                if (rax_22 > 1)
                    data_14000d690 = rcx_10 & 0xffffffffffffffbf;
            }
        }
        
        if (TEST_BITD(r10_4, 0x15) && TEST_BITQ(rdx_7, 0x13))
            data_14000d690 &= 0xffffffffffffff7f;
    }
    
    return 0;
}

int64_t sub_140009dd4() __pure
{
    return 1;
}

int64_t sub_140009ddc()
{
    int64_t result;
    result = data_14000d6b4;
    return result;
}

int64_t sub_140009de8()
{
    data_14000e91c = 0;
}

HMODULE sub_140009df0()
{
    HMODULE result = GetModuleHandleW(nullptr);
    int32_t* rcx_2;
    
    if (result && result->unused == 0x5a4d)
        rcx_2 = result * 2;
    
    if (!result || result->unused != 0x5a4d || *rcx_2 != 0x4550 || rcx_2[6] != 0x20b
            || rcx_2[0x21] <= 0xe)
        result = 0;
    else
        result = rcx_2[0x3e];
    
    return result;
}

int64_t sub_140009e44() __pure
{
    return 0;
}

int64_t j_sub_140009e44()
{
    /* tailcall */
    return sub_140009e44();
}

int64_t sub_140009e50()
{
    /* tailcall */
    return SetUnhandledExceptionFilter(__scrt_unhandled_exception_filter);
}

int32_t __scrt_fastfail(int32_t arg1)
{
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE))
        trap(0xd);
    
    sub_140009de8();
    CONTEXT ContextRecord;
    memset(&ContextRecord, 0, 0x4d0);
    RtlCaptureContext(&ContextRecord);
    uint64_t Rip = ContextRecord.Rip;
    uint64_t ImageBase;
    IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionEntry = RtlLookupFunctionEntry(Rip, &ImageBase, nullptr);
    uint64_t EstablisherFrame;
    void HandlerData;
    
    if (FunctionEntry)
        RtlVirtualUnwind(UNW_FLAG_NHANDLER, ImageBase, Rip, FunctionEntry, &ContextRecord, 
            &HandlerData, &EstablisherFrame, nullptr);
    ContextRecord.Rip = __return_addr;
    int64_t __saved_rbx;
    ContextRecord.Rsp = &__saved_rbx;
    int32_t var_578;
    memset(&var_578, 0, 0x98);
    void* const __return_addr_1 = __return_addr;
    var_578 = 0x40000015;
    int32_t var_574 = 1;
    BOOL rax_3 = IsDebuggerPresent();
    EXCEPTION_POINTERS ExceptionInfo;
    ExceptionInfo.ExceptionRecord = &var_578;
    ExceptionInfo.ContextRecord = &ContextRecord;
    SetUnhandledExceptionFilter(nullptr);
    int32_t result = UnhandledExceptionFilter(&ExceptionInfo);
    
    if (!result && rax_3 != 1)
        sub_140009de8();
    
    return result;
}

int64_t __scrt_unhandled_exception_filter(int64_t* arg1)
{
    int32_t* rbx = *arg1;
    
    if (*rbx == 0xe06d7363 && rbx[6] == 4)
    {
        int32_t rdx_1 = rbx[8];
        
        if (rdx_1 - 0x19930520 <= 2 || rdx_1 == 0x1994000)
        {
            *__current_exception() = rbx;
            *__current_exception_context() = arg1[1];
            terminate();
            /* no return */
        }
    }
    
    return 0;
}

void _guard_check_icall(void (* arg1)()) __pure
{
    return;
}

int64_t pre_c_initialization()
{
    _set_app_type(_crt_console_app);
    _set_fmode(0x4000);
    *__p__commode() = 0;
    
    if (__scrt_initialize_onexit_tables(1))
    {
        _RTC_Initialize();
        atexit(_RTC_Terminate);
        
        if (!_configure_narrow_argv(_crt_argv_unexpanded_arguments))
        {
            sub_14000a348();
            
            if (sub_14000a384())
                __setusermatherr(sub_140009e44);
            
            _configthreadlocale(0);
            
            if (sub_14000a358())
                _initialize_narrow_environment();
            
            j_sub_140009e44();
            return 0;
        }
    }
    
    __scrt_fastfail(7);
    breakpoint();
}

int64_t post_pgo_initialization()
{
    __scrt_initialize_default_local_stdio_options();
    return 0;
}

int64_t pre_cpp_initialization()
{
    sub_140009e50();
    /* tailcall */
    return _set_new_mode(0);
}

int64_t __scrt_common_main_seh(int64_t arg1 @ rbx)
{
    int64_t arg_8 = arg1;
    
    if (!__scrt_initialize_crt(1))
    {
        __scrt_fastfail(7);
        __scrt_fastfail(7);
    }
    else
    {
        int64_t rsi;
        rsi = 0;
        char var_18_1 = 0;
        arg1 = __scrt_acquire_startup_lock();
        int32_t rcx_1 = data_14000e358;
        
        if (rcx_1 == 1)
            __scrt_fastfail(7);
        else
        {
            if (rcx_1)
            {
                rsi = 1;
                char var_18_2 = 1;
            }
            else
            {
                data_14000e358 = 1;
                
                if (_initterm_e(&data_14000b9d8, &data_14000b9f0))
                    return 0xff;
                
                _initterm(&data_14000b9b8, &data_14000b9d0);
                data_14000e358 = 2;
            }
            
            rcx_1 = arg1;
            __scrt_release_startup_lock(rcx_1);
            
            if (data_14000e940 && __scrt_is_nonwritable_in_current_image(&data_14000e940))
                data_14000e940(0, 2, 0);
            
            if (data_14000e948 && __scrt_is_nonwritable_in_current_image(&data_14000e948))
                _register_thread_local_exe_atexit_callback(data_14000e948);
            
            _get_initial_narrow_environment();
            *__p___argv();
            *__p___argc();
            main();
            arg1 = 0;
            
            if (sub_140009df0())
            {
                if (!rsi)
                    _cexit();
                
                __scrt_uninitialize_crt(1, 0);
                return 0;
            }
        }
    }
    
    exit(arg1);
    /* no return */
}

uint64_t sub_14000a232(int32_t arg1 @ rax, char arg2, int64_t arg3, int64_t arg4, int64_t arg5)
{
    if (!sub_140009df0())
    {
        _exit(arg1);
        /* no return */
    }
    
    if (!arg2)
        _c_exit();
    
    return arg1;
}

int64_t _start()
{
    __security_init_cookie();
    int64_t rbx;
    /* tailcall */
    return __scrt_common_main_seh(rbx);
}

uint64_t __security_init_cookie()
{
    uint64_t __security_cookie_1 = __security_cookie;
    
    if (__security_cookie_1 == 0x2b992ddfa232)
    {
        FILETIME systemTimeAsFileTime;
        __builtin_memset(&systemTimeAsFileTime, 0, 8);
        GetSystemTimeAsFileTime(&systemTimeAsFileTime);
        int64_t rax;
        rax = systemTimeAsFileTime.dwLowDateTime;
        *rax[4] = systemTimeAsFileTime.dwHighDateTime;
        int64_t var_18 = rax;
        uint64_t rax_2 = GetCurrentThreadId();
        var_18 ^= rax_2;
        uint64_t rax_4 = GetCurrentProcessId();
        var_18 ^= rax_4;
        int64_t performanceCount;
        QueryPerformanceCounter(&performanceCount);
        __security_cookie_1 =
            (performanceCount << 0x20 ^ performanceCount ^ var_18 ^ &var_18) & 0xffffffffffff;
        
        if (__security_cookie_1 == 0x2b992ddfa232)
            __security_cookie_1 = 0x2b992ddfa233;
        
        __security_cookie = __security_cookie_1;
    }
    
    uint64_t result = ~__security_cookie_1;
    data_14000d680 = result;
    return result;
}

int64_t sub_14000a340() __pure
{
    return 0x4000;
}

int64_t sub_14000a348()
{
    /* tailcall */
    return InitializeSListHead(&data_14000e920);
}

int64_t sub_14000a358() __pure
{
    int64_t result;
    result = 1;
    return result;
}

int64_t sub_14000a35c() __pure
{
    return;
}

int64_t __scrt_initialize_default_local_stdio_options()
{
    data_14000dcf8 |= 0x24;
    data_14000e930 |= 2;
    return &data_14000e930;
}

int64_t sub_14000a37c() __pure
{
    return &data_14000e930;
}

int64_t sub_14000a384()
{
    int64_t result;
    result = !data_14000d6b0;
    return result;
}

int64_t sub_14000a390() __pure
{
    return &data_14000e940;
}

int64_t sub_14000a398() __pure
{
    return &data_14000e948;
}

void _RTC_Initialize()
{
    for (void* const i = &data_14000c550; i < &data_14000c550; i += 8)
    {
        int64_t rax = *i;
        
        if (rax)
            rax();
    }
}

void _RTC_Terminate()
{
    for (void* const i = &data_14000c560; i < &data_14000c560; i += 8)
    {
        int64_t rax = *i;
        
        if (rax)
            rax();
    }
}

void _guard_dispatch_icall_nop(void (* arg1)())
{
    int64_t entry_rax;
    /* jump -> entry_rax */
}

int64_t sub_14000a450()
{
    int64_t rax;
    /* tailcall */
    return rax();
}

uint64_t __scrt_is_nonwritable_in_current_image$filt$0(int64_t* arg1)
{
    int32_t rcx;
    rcx = **arg1 == 0xc0000005;
    return rcx;
}

int64_t thread_start<uint32_t (__cdecl*)(void* __ptr64)>::filt$0::filt$0(int64_t* arg1)
{
    return _seh_filter_exe(**arg1, arg1);
}

void ExitProcess(uint32_t uExitCode) __noreturn
{
    /* tailcall */
    return ExitProcess(uExitCode);
}

void std::_Throw_Cpp_error(int32_t code) __noreturn
{
    /* tailcall */
    return std::_Throw_Cpp_error(code);
}

void std::_Xbad_function_call() __noreturn
{
    /* tailcall */
    return std::_Xbad_function_call();
}

int64_t _Query_perf_counter()
{
    /* tailcall */
    return _Query_perf_counter();
}

int64_t _Query_perf_frequency()
{
    /* tailcall */
    return _Query_perf_frequency();
}

int32_t _Thrd_detach(struct _Thrd_t* thr)
{
    /* tailcall */
    return _Thrd_detach(thr);
}

void _CxxThrowException(void* pExceptionObject, struct _s__ThrowInfo* pThrowInfo) __noreturn
{
    /* tailcall */
    return _CxxThrowException(pExceptionObject, pThrowInfo);
}

enum _EXCEPTION_DISPOSITION __C_specific_handler(struct _EXCEPTION_RECORD* ExceptionRecord, void* EstablisherFrame, struct _CONTEXT* ContextRecord, struct _DISPATCHER_CONTEXT* DispatcherContext)
{
    /* tailcall */
    return __C_specific_handler(ExceptionRecord, EstablisherFrame, ContextRecord, 
        DispatcherContext);
}

enum _EXCEPTION_DISPOSITION __CxxFrameHandler3(struct EHExceptionRecord* pExcept, uint64_t RN, struct _CONTEXT* pContext, struct _xDISPATCHER_CONTEXT* pDC)
{
    /* tailcall */
    return __CxxFrameHandler3(pExcept, RN, pContext, pDC);
}

int64_t __current_exception()
{
    /* tailcall */
    return __current_exception();
}

int64_t __current_exception_context()
{
    /* tailcall */
    return __current_exception_context();
}

void __std_exception_copy(struct __std_exception_data* from, struct __std_exception_data* to)
{
    /* tailcall */
    return __std_exception_copy(from, to);
}

void __std_exception_destroy(struct __std_exception_data* data)
{
    /* tailcall */
    return __std_exception_destroy(data);
}

void __std_terminate() __noreturn
{
    /* tailcall */
    return __std_terminate();
}

int64_t memset(void* dest, int32_t c, uint64_t count)
{
    /* tailcall */
    return memset(dest, c, count);
}

char* strchr(char const* string, int32_t ch)
{
    /* tailcall */
    return strchr(string, ch);
}

int32_t* __p___argc()
{
    /* tailcall */
    return __p___argc();
}

char*** __p___argv()
{
    /* tailcall */
    return __p___argv();
}

int32_t* __p__commode()
{
    /* tailcall */
    return __p__commode();
}

void __setusermatherr(_UserMathErrorFunctionPointer _UserMathErrorFunction)
{
    /* tailcall */
    return __setusermatherr(_UserMathErrorFunction);
}

int32_t __stdio_common_vsprintf(uint64_t _Options, char* _Buffer, uint64_t _BufferCount, char const* _Format, _locale_t _Locale, va_list _ArgList)
{
    /* tailcall */
    return __stdio_common_vsprintf(_Options, _Buffer, _BufferCount, _Format, _Locale, _ArgList);
}

uintptr_t _beginthreadex(void* _Security, uint32_t _StackSize, _beginthreadex_proc_type _StartAddress, void* _ArgList, uint32_t _InitFlag, uint32_t* _ThrdAddr)
{
    /* tailcall */
    return _beginthreadex(_Security, _StackSize, _StartAddress, _ArgList, _InitFlag, _ThrdAddr);
}

void _c_exit()
{
    /* tailcall */
    return _c_exit();
}

int32_t _callnewh(uint64_t _Size)
{
    /* tailcall */
    return _callnewh(_Size);
}

void _cexit()
{
    /* tailcall */
    return _cexit();
}

int32_t _configthreadlocale(int32_t _Flag)
{
    /* tailcall */
    return _configthreadlocale(_Flag);
}

errno_t _configure_narrow_argv(enum _crt_argv_mode mode)
{
    /* tailcall */
    return _configure_narrow_argv(mode);
}

int32_t _crt_atexit(_PVFV _Function)
{
    /* tailcall */
    return _crt_atexit(_Function);
}

void _exit(int32_t _Except) __noreturn
{
    /* tailcall */
    return _exit(_Except);
}

char** _get_initial_narrow_environment()
{
    /* tailcall */
    return _get_initial_narrow_environment();
}

int32_t _initialize_narrow_environment()
{
    /* tailcall */
    return _initialize_narrow_environment();
}

int32_t _initialize_onexit_table(struct _onexit_table_t* _Table)
{
    /* tailcall */
    return _initialize_onexit_table(_Table);
}

void _initterm(_PVFV* _First, _PVFV* _Last)
{
    /* tailcall */
    return _initterm(_First, _Last);
}

int32_t _initterm_e(_PIFV* _First, _PIFV* _Last)
{
    /* tailcall */
    return _initterm_e(_First, _Last);
}

void _invalid_parameter_noinfo_noreturn() __noreturn
{
    /* tailcall */
    return _invalid_parameter_noinfo_noreturn();
}

int32_t _register_onexit_function(struct _onexit_table_t* _Table, _onexit_t_1 _Function)
{
    /* tailcall */
    return _register_onexit_function(_Table, _Function);
}

void _register_thread_local_exe_atexit_callback(_tls_callback_type _Callback)
{
    /* tailcall */
    return _register_thread_local_exe_atexit_callback(_Callback);
}

int32_t _seh_filter_exe(uint32_t _ExceptionNum, struct _EXCEPTION_POINTERS* _ExceptionPtr)
{
    /* tailcall */
    return _seh_filter_exe(_ExceptionNum, _ExceptionPtr);
}

void _set_app_type(enum _crt_app_type _Type)
{
    /* tailcall */
    return _set_app_type(_Type);
}

errno_t _set_fmode(int32_t _Value)
{
    /* tailcall */
    return _set_fmode(_Value);
}

int32_t _set_new_mode(int32_t _NewMode)
{
    /* tailcall */
    return _set_new_mode(_NewMode);
}

void exit(int32_t _Except) __noreturn
{
    /* tailcall */
    return exit(_Except);
}

void free(void* _Block)
{
    /* tailcall */
    return free(_Block);
}

int64_t malloc(uint64_t _Size)
{
    /* tailcall */
    return malloc(_Size);
}

uint64_t strlen(char const* _Str)
{
    /* tailcall */
    return strlen(_Str);
}

void terminate() __noreturn
{
    /* tailcall */
    return terminate();
}

int64_t memcpy(void* dest, void const* src, uint32_t count)
{
    /* tailcall */
    return memcpy(dest, src, count);
}

