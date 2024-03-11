#include "iGraphics.h"
#include <ctype.h>

	#define pi 3.14159265
	#define e 2.718281828


	int mode=0;
	
	char disp_1[1000];
	char disp_2[1000];

	double res=0;
	double res_alt=0;
	double m=0;

	int digit=0;

	int pres=0;
	int pres_alt=0;

	int eq_a=0;
	int eq_b=0;
	int eq_c=0;
	int eq_a1=0;
	int eq_b1=0;
	int eq_c1=0;
	int eq_a2=0;
	int eq_b2=0;
	int eq_c2=0;

	double a=0;
	double b=0;
	double c=0;
	double a1=0;
	double b1=0;
	double c1=0;
	double a2=0;
	double b2=0;
	double c2=0;
	double x=0;
	double y=0;
	double x1=0;
	double x2=0;

	int eqmode=0;

	int a_count=0;
	int b_count=0;
	int c_count=0;
	int a1_count=0;
	int b1_count=0;
	int c1_count=0;
	int a2_count=0;
	int b2_count=0;
	int c2_count=0;

	int a_dk=0;
	int b_dk=0;
	int c_dk=0;
	int a1_dk=0;
	int b1_dk=0;
	int c1_dk=0;
	int a2_dk=0;
	int b2_dk=0;
	int c2_dk=0;

	char d_a[100]="0";
	char d_b[100]="0";
	char d_c[100]="0";
	char d_x[100]="0";
	char d_y[100]="0";
	char d_a1[100]="0";
	char d_a2[100]="0";
	char d_b1[100]="0";
	char d_b2[100]="0";
	char d_c1[100]="0";
	char d_c2[100]="0";
	char d_x1[100]="0";
	char d_x2[100]="0";

	int plus_key=0;
	int minus_key=0;
	int multiplication_key=0;
	int divition_key=0;
	int power_key=0;
	int mod_key=0;
	int and_key=0;
	int or_key=0;
	int xor_key=0;
	int rsh_key=0;
	int lsh_key=0;
	int ncr_key=0;
	int npr_key=0;
	int eql_key=0;
	int grt_key=0;
	int lss_key=0;
	int neq_key=0;
	int leq_key=0;
	int geq_key=0;

	int binnum_key=0;
	int decnum_key=1;
	int octnum_key=0;
	int hexnum_key=0;

	int m1r=20,m1g=20,m1b=20;
	int m2r=20,m2g=20,m2b=20;
	int m3r=20,m3g=20,m3b=20;
	int m4r=20,m4g=20,m4b=20;
	int m5r=20,m5g=20,m5b=20;

	int dsp_r=20,dsp_g=20,dsp_b=20;
	int b_r=20,b_g=20,b_b=20;
	int b_pm_r=20,b_pm_g=20,b_pm_b=20; // +/- button color
	int b_0_r=20,b_0_g=20,b_0_b=20; // 0 button color
	int b_dec_r=20,b_dec_g=20,b_dec_b=20; // decimal point color
	int b_eql_r=20,b_eql_g=20,b_eql_b=20;  // equal button color
	int b_1_r=20,b_1_g=20,b_1_b=20;
	int b_2_r=20,b_2_g=20,b_2_b=20;
	int b_3_r=20,b_3_g=20,b_3_b=20;
	int b_pls_r=20,b_pls_g=20,b_pls_b=20; // plus button color
	int b_4_r=20,b_4_g=20,b_4_b=20; 
	int b_5_r=20,b_5_g=20,b_5_b=20;
	int b_6_r=20,b_6_g=20,b_6_b=20;
	int b_min_r=20,b_min_g=20,b_min_b=20; // minus button color
	int b_7_r=20,b_7_g=20,b_7_b=20;
	int b_8_r=20,b_8_g=20,b_8_b=20;
	int b_9_r=20,b_9_g=20,b_9_b=20;
	int b_mul_r=20,b_mul_g=20,b_mul_b=20; // multiplication button color
	int b_inv_r=20,b_inv_g=20,b_inv_b=20;
	int b_sq_r=20,b_sq_g=20,b_sq_b=20;
	int b_sqrt_r=20,b_sqrt_g=20,b_sqrt_b=20;
	int b_div_r=20,b_div_g=20,b_div_b=20; // division button color
	int b_prc_r=20,b_prc_g=20,b_prc_b=20;
	int b_m_r=20,b_m_g=20,b_m_b=20;
	int b_clr_r=20,b_clr_g=20,b_clr_b=20;
	int b_del_r=20,b_del_g=20,b_del_b=20; // delete button color
	int b_mp_r=20,b_mp_g=20,b_mp_b=20;
	int b_mm_r=20,b_mm_g=20,b_mm_b=20;
	int b_mc_r=20,b_mc_g=20,b_mc_b=20;
	int b_abs_r=20,b_abs_g=20,b_abs_b=20;
	int b_ln_r=20,b_ln_g=20,b_ln_b=20;
	int b_log_r=20,b_log_g=20,b_log_b=20;
	int b_10p_r=20,b_10p_g=20,b_10p_b=20;
	int b_exp_r=20,b_exp_g=20,b_exp_b=20;
	int b_sin_r=20,b_sin_g=20,b_sin_b=20;
	int b_cos_r=20,b_cos_g=20,b_cos_b=20;
	int b_tan_r=20,b_tan_g=20,b_tan_b=20;
	int b_asin_r=20,b_asin_g=20,b_asin_b=20;
	int b_acos_r=20,b_acos_g=20,b_acos_b=20;
	int b_atan_r=20,b_atan_g=20,b_atan_b=20;
	int b_pow_r=20,b_pow_g=20,b_pow_b=20;
	int b_e_r=20,b_e_g=20,b_e_b=20;
	int b_pi_r=20,b_pi_g=20,b_pi_b=20;
	int b_a_r=20,b_a_g=20,b_a_b=20;
	int b_h_r=20,b_h_g=20,b_h_b=20;
	int b_bin_r=20,b_bin_g=20,b_bin_b=20;
	int b_oct_r=20,b_oct_g=20,b_oct_b=20;
	int b_hex_r=20,b_hex_g=20,b_hex_b=20;
	int b_fact_r=20,b_fact_g=20,b_fact_b=20;
	int b_A_r=20,b_A_g=20,b_A_b=20;
	int b_B_r=20,b_B_g=20,b_B_b=20;
	int b_C_r=20,b_C_g=20,b_C_b=20;
	int b_D_r=20,b_D_g=20,b_D_b=20;
	int b_E_r=20,b_E_g=20,b_E_b=20;
	int b_F_r=20,b_F_g=20,b_F_b=20;
	int b_mod_r=20,b_mod_g=20,b_mod_b=20;
	int b_and_r=20,b_and_g=20,b_and_b=20;
	int b_or_r=20,b_or_g=20,b_or_b=20;
	int b_not_r=20,b_not_g=20,b_not_b=20;
	int b_xor_r=20,b_xor_g=20,b_xor_b=20;
	int b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
	int b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
	int b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
	int b_npr_r=20,b_npr_g=20,b_npr_b=20;
	int b_eq_r=20,b_eq_g=20,b_eq_b=20;
	int b_grt_r=20,b_grt_g=20,b_grt_b=20;
	int b_lss_r=20,b_lss_g=20,b_lss_b=20;
	int b_neq_r=20,b_neq_g=20,b_neq_b=20;
	int b_leq_r=20,b_leq_g=20,b_leq_b=20;
	int b_req_r=20,b_req_g=20,b_req_b=20;

	int digit_after_float(double n)
	{
		double frac= n-(int)n;
		int count =0;
		while(frac!=(int)frac)
		{
			frac*=10;
			count++;
		}
		return count;
	}
	//int dec_count=digit_after_float(res);
	int dec_count=0;
	int dec_count_2=0;
	int dec_key=0;
	int isResult=0;

	char* intToBinaryString(int value) 
	{
		char* binaryString = (char*)malloc(33);
		if (binaryString == NULL) {
			perror("Memory allocation failed");
			exit(EXIT_FAILURE);
		}
		memset(binaryString, '0', 32);
		binaryString[32] = '\0';
		for (int i = 31; i >= 0; i--) 
		{
			if (value & (1 << i)) 
			{
				binaryString[31 - i] = '1';
			}
		}
		return binaryString;
	}

	char* binaryString;

	long long factorial(int n) 
	{
		if (n==0)
		{
			return 1;
		}
		else
		{
			long long result = 1;
			for (int i = 1; i <= n; ++i) 
			{
				result *= i;
			}
			return result;
		}
	}

	// long long nCr(int n, int r) 
	// {
	// 	if(n>=r && r>=0)
	// 	{
	// 		long long numerator = factorial(n);
	// 		long long denominator = factorial(r) * factorial(n - r);
	// 		return numerator / denominator;
	// 	}
	// }

	// long long nPr(int n, int r) 
	// {
	// 	if(n>=r && r>=0)
	// 	{
	// 		long long numerator = factorial(n);
	// 		long long denominator = factorial(n - r);
	// 		return numerator / denominator;
	// 	}
	// }

	long long lpres=0;

	// double del ( double num)
	// {
	// 	double df=0;
	// 	int i1=0,t=0,t1=0,c=0;
	// 	t=num;
	// 	df=num-t;
	// 	t1=df*1000000;
	// 	while(!(t1%10))
	// 	{
	// 		t1/=10;
	// 		c++;
	// 	}
	// 	t1/=10;     
	// 	df=t1/(double)(pow(10,5-c));
	// 	num=t+df;
	// 	return num;
	// }


	void iDraw() 
	{
		
		iClear();

		if(mode==0)
		{
			iShowBMP2(0,0,"iCalc.bmp",-1);
			iShowBMP2(125,400,"Standard.bmp",-1);
			iShowBMP2(125,320,"scientific.bmp",-1);
			iShowBMP2(125,240,"programming.bmp",-1);
			iShowBMP2(125,160,"equation.bmp",-1);	
			iShowBMP2(125,80,"about.bmp",-1);		
		}
		if(mode==1)
		{
			iShowBMP2(10,608,"home_1.bmp",-1);
			iShowBMP2(125,608,"Standard.bmp",-1);

			iSetColor(b_pm_r,b_pm_g,b_pm_b);
			iFilledRectangle(6,6,119,65);
			iSetColor(255,255,255);
			iText(48,32,"+/-",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_0_r,b_0_g,b_0_b);
			iFilledRectangle(129,6,119,65);
			iSetColor(255,255,255);
			iText(182,32,"0",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_dec_r,b_dec_g,b_dec_b);
			iFilledRectangle(252,6,119,65);
			iSetColor(255,255,255);
			iText(310,32,".",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_eql_r,b_eql_g,b_eql_b);
			iFilledRectangle(375,6,119,65);
			iSetColor(255,255,255);
			iText(430,32,"=",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_1_r,b_1_g,b_1_b);
			iFilledRectangle(6,75,119,65);
			iSetColor(255,255,255);
			iText(55,100,"1",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_2_r,b_2_g,b_2_b);
			iFilledRectangle(129,75,119,65);
			iSetColor(255,255,255);
			iText(182,100,"2",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_3_r,b_3_g,b_3_b);
			iFilledRectangle(252,75,119,65);
			iSetColor(255,255,255);
			iText(307,100,"3",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_pls_r,b_pls_g,b_pls_b);
			iFilledRectangle(375,75,119,65);
			iSetColor(255,255,255);
			iText(430,100,"+",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_4_r,b_4_g,b_4_b);
			iFilledRectangle(6,144,119,65);
			iSetColor(255,255,255);
			iText(55,168,"4",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_5_r,b_5_g,b_5_b);
			iFilledRectangle(129,144,119,65);
			iSetColor(255,255,255);
			iText(182,168,"5",GLUT_BITMAP_HELVETICA_18);


			iSetColor(b_6_r,b_6_g,b_6_b);
			iFilledRectangle(252,144,119,65);
			iSetColor(255,255,255);
			iText(307,168,"6",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_min_r,b_min_g,b_min_b);
			iFilledRectangle(375,144,119,65);
			iSetColor(255,255,255);
			iText(430,168,"-",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_7_r,b_7_g,b_7_b);
			iFilledRectangle(6,213,119,65);
			iSetColor(255,255,255);
			iText(55,236,"7",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_8_r,b_8_g,b_8_b);
			iFilledRectangle(129,213,119,65);
			iSetColor(255,255,255);
			iText(182,236,"8",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_9_r,b_9_g,b_9_b);
			iFilledRectangle(252,213,119,65);
			iSetColor(255,255,255);
			iText(307,236,"9",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_mul_r,b_mul_g,b_mul_b);
			iFilledRectangle(375,213,119,65);
			iSetColor(255,255,255);
			iText(430,236,"x",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_inv_r,b_inv_g,b_inv_b);
			iFilledRectangle(6,282,119,65);
			iSetColor(255,255,255);
			iText(48,305,"1/x",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_sq_r,b_sq_g,b_sq_b);
			iFilledRectangle(129,282,119,65);
			iSetColor(255,255,255);
			iText(177,305,"x^2",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_sqrt_r,b_sqrt_g,b_sqrt_b);
			iFilledRectangle(252,282,119,65);
			iSetColor(255,255,255);
			iText(295,305,"root",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_div_r,b_div_g,b_div_b);
			iFilledRectangle(375,282,119,65);
			iSetColor(255,255,255);
			iText(430,305,"/",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_prc_r,b_prc_g,b_prc_b);
			iFilledRectangle(6,351,119,65);
			iSetColor(255,255,255);
			iText(55,373,"%",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_m_r,b_m_g,b_m_b);
			iFilledRectangle(129,351,119,65);
			iSetColor(255,255,255);
			iText(182,373,"M",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_clr_r,b_clr_g,b_clr_b);
			iFilledRectangle(252,351,119,65);
			iSetColor(255,255,255);
			iText(295,373,"CLR",GLUT_BITMAP_HELVETICA_18);

		

			iSetColor(b_mp_r,b_mp_g,b_mp_b);
			iFilledRectangle(6,420,119,65);
			iSetColor(255,255,255);
			iText(55,443,"M+",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_mm_r,b_mm_g,b_mm_b);
			iFilledRectangle(129,420,119,65);
			iSetColor(255,255,255);
			iText(182,443,"M-",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_mc_r,b_mc_g,b_mc_b);
			iFilledRectangle(252,420,119,65);
			iSetColor(255,255,255);
			iText(300,443,"MC",GLUT_BITMAP_HELVETICA_18);

			iSetColor(dsp_r,dsp_g,dsp_b);
			iFilledRectangle(6,490,488,100);
			iSetColor(255,255,255);
			
			if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0)
			{
				iText(30,550,disp_1,GLUT_BITMAP_HELVETICA_18);
			}
			else
			{
				iText(30,550,disp_2,GLUT_BITMAP_HELVETICA_18);
			}
		}
		if(mode==2)
		{
			
			iShowBMP2(10,608,"home_1.bmp",-1);
			iShowBMP2(125,608,"scientific.bmp",-1);

			iSetColor(b_pi_r,b_pi_g,b_pi_b);
			iFilledRectangle(10,10,92,50);
			iSetColor(255,255,255);
			iText(40,32,"pi",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_pm_r,b_pm_g,b_pm_b);
			iFilledRectangle(107,10,92,50);
			iSetColor(255,255,255);
			iText(137,32,"+/-",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_0_r,b_0_g,b_0_b);
			iFilledRectangle(204,10,92,50);
			iSetColor(255,255,255);
			iText(234,32,"0",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_dec_r,b_dec_g,b_dec_b);
			iFilledRectangle(301,10,92,50);
			iSetColor(255,255,255);
			iText(331,32,".",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_eql_r,b_eql_g,b_eql_b);
			iFilledRectangle(398,10,92,50);
			iSetColor(255,255,255);
			iText(428,32,"=",GLUT_BITMAP_HELVETICA_18);


			iSetColor(b_e_r,b_e_g,b_e_b);
			iFilledRectangle(10,65,92,50);
			iSetColor(255,255,255);
			iText(40,87,"e",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_1_r,b_1_g,b_1_b);
			iFilledRectangle(107,65,92,50);
			iSetColor(255,255,255);
			iText(137,87,"1",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_2_r,b_2_g,b_2_b);
			iFilledRectangle(204,65,92,50);
			iSetColor(255,255,255);
			iText(234,87,"2",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_3_r,b_3_g,b_3_b);
			iFilledRectangle(301,65,92,50);
			iSetColor(255,255,255);
			iText(331,87,"3",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_pls_r,b_pls_g,b_pls_b);
			iFilledRectangle(398,65,92,50);
			iSetColor(255,255,255);
			iText(428,87,"+",GLUT_BITMAP_HELVETICA_18);


            iSetColor(b_sq_r,b_sq_g,b_sq_b);
			iFilledRectangle(10,120,92,50);
			iSetColor(255,255,255);
			iText(40,142,"x^2",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_4_r,b_4_g,b_4_b);
			iFilledRectangle(107,120,92,50);
			iSetColor(255,255,255);
			iText(137,142,"4",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_5_r,b_5_g,b_5_b);
			iFilledRectangle(204,120,92,50);
			iSetColor(255,255,255);
			iText(234,142,"5",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_6_r,b_6_g,b_6_b);
			iFilledRectangle(301,120,92,50);
			iSetColor(255,255,255);
			iText(331,142,"6",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_min_r,b_min_g,b_min_b);
			iFilledRectangle(398,120,92,50);
			iSetColor(255,255,255);
			iText(428,142,"-",GLUT_BITMAP_HELVETICA_18);


			iSetColor(b_sqrt_r,b_sqrt_g,b_sqrt_b);
			iFilledRectangle(10,175,92,50);
			iSetColor(255,255,255);
			iText(40,197,"root",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_7_r,b_7_g,b_7_b);
			iFilledRectangle(107,175,92,50);
			iSetColor(255,255,255);
			iText(137,197,"7",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_8_r,b_8_g,b_8_b);
			iFilledRectangle(204,175,92,50);
			iSetColor(255,255,255);
			iText(234,197,"8",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_9_r,b_9_g,b_9_b);
			iFilledRectangle(301,175,92,50);
			iSetColor(255,255,255);
			iText(331,197,"9",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_mul_r,b_mul_g,b_mul_b);
			iFilledRectangle(398,175,92,50);
			iSetColor(255,255,255);
			iText(428,197,"x",GLUT_BITMAP_HELVETICA_18);


			iSetColor(b_exp_r,b_exp_g,b_exp_b);
			iFilledRectangle(10,230,92,50);
			iSetColor(255,255,255);
			iText(40,252,"e^x",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_asin_r,b_asin_g,b_asin_b);
			iFilledRectangle(107,230,92,50);
			iSetColor(255,255,255);
			iText(127,252,"sin^-1",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_acos_r,b_acos_g,b_acos_b);
			iFilledRectangle(204,230,92,50);
			iSetColor(255,255,255);
			iText(230,252,"cos^-1",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_atan_r,b_atan_g,b_atan_b);
			iFilledRectangle(301,230,92,50);
			iSetColor(255,255,255);
			iText(327,252,"tan^-1",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_div_r,b_div_g,b_div_b);
			iFilledRectangle(398,230,92,50);
			iSetColor(255,255,255);
			iText(428,252,"/",GLUT_BITMAP_HELVETICA_18);


			iSetColor(b_10p_r,b_10p_g,b_10p_b);
			iFilledRectangle(10,285,92,50);
			iSetColor(255,255,255);
			iText(40,307,"10^x",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_sin_r,b_sin_g,b_sin_b);
			iFilledRectangle(107,285,92,50);
			iSetColor(255,255,255);
			iText(137,307,"sin",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_cos_r,b_cos_g,b_cos_b);
			iFilledRectangle(204,285,92,50);
			iSetColor(255,255,255);
			iText(234,307,"cos",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_tan_r,b_tan_g,b_tan_b);
			iFilledRectangle(301,285,92,50);
			iSetColor(255,255,255);
			iText(331,307,"tan",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_pow_r,b_pow_g,b_pow_b);
			iFilledRectangle(398,285,92,50);
			iSetColor(255,255,255);
			iText(428,307,"^",GLUT_BITMAP_HELVETICA_18);


			iSetColor(b_inv_r,b_inv_g,b_inv_b);
			iFilledRectangle(10,340,92,50);
			iSetColor(255,255,255);
			iText(40,362,"1/x",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_abs_r,b_abs_g,b_abs_b);
			iFilledRectangle(107,340,92,50);
			iSetColor(255,255,255);
			iText(137,362,"|x|",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_ln_r,b_ln_g,b_ln_b);
			iFilledRectangle(204,340,92,50);
			iSetColor(255,255,255);
			iText(234,362,"ln",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_log_r,b_log_g,b_log_b);
			iFilledRectangle(301,340,92,50);
			iSetColor(255,255,255);
			iText(327,362,"log10",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_m_r,b_m_g,b_m_b);
			iFilledRectangle(398,340,92,50);
			iSetColor(255,255,255);
			iText(428,362,"M",GLUT_BITMAP_HELVETICA_18);


			iSetColor(b_mc_r,b_mc_g,b_mc_b);
			iFilledRectangle(10,395,92,50);
			iSetColor(255,255,255);
			iText(40,417,"MC",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_mp_r,b_mp_g,b_mp_b);
			iFilledRectangle(107,395,92,50);
			iSetColor(255,255,255);
			iText(137,417,"M+",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_mm_r,b_mm_g,b_mm_b);
			iFilledRectangle(204,395,92,50);
			iSetColor(255,255,255);
			iText(234,417,"M-",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_clr_r,b_clr_g,b_clr_b);
			iFilledRectangle(301,395,92,50);
			iSetColor(255,255,255);
			iText(331,417,"CLR",GLUT_BITMAP_HELVETICA_18);

			iSetColor(dsp_r,dsp_g,dsp_b);
			iFilledRectangle(6,490,488,100);
			iSetColor(255,255,255);
			if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
			{
				iText(30,550,disp_1,GLUT_BITMAP_HELVETICA_18);
			}
			else
			{
				iText(30,550,disp_2,GLUT_BITMAP_HELVETICA_18);
			}
		}
		if(mode==3)
		{
			iShowBMP2(10,608,"home_1.bmp",-1);
			iShowBMP2(125,608,"programming.bmp",-1);

			iSetColor(b_F_r,b_F_g,b_F_b);
			iFilledRectangle(10,10,92,50);
			iSetColor(255,255,255);
			iText(47,30,"F",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_pm_r,b_pm_g,b_pm_b);
			iFilledRectangle(107,10,92,50);
			iSetColor(255,255,255);
			iText(139,30,"+/-",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_0_r,b_0_g,b_0_b);
			iFilledRectangle(204,10,92,50);
			iSetColor(255,255,255);
			iText(242,30,"0",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_mod_r,b_mod_g,b_mod_b);
			iFilledRectangle(301,10,92,50);
			iSetColor(255,255,255);
			iText(339,30,"%",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_eql_r,b_eql_g,b_eql_b);
			iFilledRectangle(398,10,92,50);
			iSetColor(255,255,255);
			iText(436,32,"=",GLUT_BITMAP_HELVETICA_18);


			iSetColor(b_E_r,b_E_g,b_E_b);
			iFilledRectangle(10,65,92,50);
			iSetColor(255,255,255);
			iText(47,85,"E",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_1_r,b_1_g,b_1_b);
			iFilledRectangle(107,65,92,50);
			iSetColor(255,255,255);
			iText(145,85,"1",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_2_r,b_2_g,b_2_b);
			iFilledRectangle(204,65,92,50);
			iSetColor(255,255,255);
			iText(242,85,"2",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_3_r,b_3_g,b_3_b);
			iFilledRectangle(301,65,92,50);
			iSetColor(255,255,255);
			iText(339,85,"3",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_pls_r,b_pls_g,b_pls_b);
			iFilledRectangle(398,65,92,50);
			iSetColor(255,255,255);
			iText(436,85,"+",GLUT_BITMAP_HELVETICA_18);


            iSetColor(b_D_r,b_D_g,b_D_b);
			iFilledRectangle(10,120,92,50);
			iSetColor(255,255,255);
			iText(47,140,"D",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_4_r,b_4_g,b_4_b);
			iFilledRectangle(107,120,92,50);
			iSetColor(255,255,255);
			iText(145,140,"4",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_5_r,b_5_g,b_5_b);
			iFilledRectangle(204,120,92,50);
			iSetColor(255,255,255);
			iText(242,140,"5",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_6_r,b_6_g,b_6_b);
			iFilledRectangle(301,120,92,50);
			iSetColor(255,255,255);
			iText(339,140,"6",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_min_r,b_min_g,b_min_b);
			iFilledRectangle(398,120,92,50);
			iSetColor(255,255,255);
			iText(436,140,"-",GLUT_BITMAP_HELVETICA_18);


			iSetColor(b_C_r,b_C_g,b_C_b);
			iFilledRectangle(10,175,92,50);
			iSetColor(255,255,255);
			iText(47,195,"C",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_7_r,b_7_g,b_7_b);
			iFilledRectangle(107,175,92,50);
			iSetColor(255,255,255);
			iText(145,195,"7",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_8_r,b_8_g,b_8_b);
			iFilledRectangle(204,175,92,50);
			iSetColor(255,255,255);
			iText(242,195,"8",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_9_r,b_9_g,b_9_b);
			iFilledRectangle(301,175,92,50);
			iSetColor(255,255,255);
			iText(339,195,"9",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_mul_r,b_mul_g,b_mul_b);
			iFilledRectangle(398,175,92,50);
			iSetColor(255,255,255);
			iText(436,195,"x",GLUT_BITMAP_HELVETICA_18);


			iSetColor(b_B_r,b_B_g,b_B_b);
			iFilledRectangle(10,230,92,50);
			iSetColor(255,255,255);
			iText(47,250,"B",GLUT_BITMAP_HELVETICA_18);

			// iSetColor(b_fact_r,b_fact_g,b_fact_b);
			// iFilledRectangle(107,230,92,50);
			// iSetColor(255,255,255);
			// iText(137,252,"LEAP YEAR",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_ncr_r,b_ncr_g,b_ncr_b);
			iFilledRectangle(107,230,286,50);
			iSetColor(255,255,255);
			iText(200,250,"LEAP YEAR",GLUT_BITMAP_HELVETICA_18);

			// iSetColor(b_npr_r,b_npr_g,b_npr_b);
			// iFilledRectangle(301,230,92,50);
			// iSetColor(255,255,255);
			// iText(331,252," ",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_div_r,b_div_g,b_div_b);
			iFilledRectangle(398,230,92,50);
			iSetColor(255,255,255);
			iText(436,250,"/",GLUT_BITMAP_HELVETICA_18);


			iSetColor(b_A_r,b_A_g,b_A_b);
			iFilledRectangle(10,285,92,50);
			iSetColor(255,255,255);
			iText(47,305,"A",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_and_r,b_and_g,b_and_b);
			iFilledRectangle(107,285,92,50);
			iSetColor(255,255,255);
			iText(135,305,"AND",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_or_r,b_or_g,b_or_b);
			iFilledRectangle(204,285,92,50);
			iSetColor(255,255,255);
			iText(234,305,"OR",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_not_r,b_not_g,b_not_b);
			iFilledRectangle(301,285,92,50);
			iSetColor(255,255,255);
			iText(329,305,"NOT",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_xor_r,b_xor_g,b_xor_b);
			iFilledRectangle(398,285,92,50);
			iSetColor(255,255,255);
			iText(426,305,"XOR",GLUT_BITMAP_HELVETICA_18);


			iSetColor(b_lsh_r,b_lsh_g,b_lsh_b);
			iFilledRectangle(10,340,92,50);
			iSetColor(255,255,255);
			iText(45,360,"<<",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_lss_r,b_lss_g,b_lss_b);
			iFilledRectangle(107,340,92,50);
			iSetColor(255,255,255);
			iText(145,360,"<",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_eq_r,b_eq_g,b_eq_b);
			iFilledRectangle(204,340,92,50);
			iSetColor(255,255,255);
			iText(239,360,"==",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_grt_r,b_grt_g,b_grt_b);
			iFilledRectangle(301,340,92,50);
			iSetColor(255,255,255);
			iText(339,360,">",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_rsh_r,b_rsh_g,b_rsh_b);
			iFilledRectangle(398,340,92,50);
			iSetColor(255,255,255);
			iText(431,360,">>",GLUT_BITMAP_HELVETICA_18);


			iSetColor(b_neq_r,b_neq_g,b_neq_b);
			iFilledRectangle(10,395,92,50);
			iSetColor(255,255,255);
			iText(46,415,"!=",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_req_r,b_req_g,b_req_b);
			iFilledRectangle(107,395,92,50);
			iSetColor(255,255,255);
			iText(141,415,">=",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_leq_r,b_leq_g,b_leq_b);
			iFilledRectangle(204,395,92,50);
			iSetColor(255,255,255);
			iText(239,415,"<=",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_clr_r,b_clr_g,b_clr_b);
			iFilledRectangle(301,395,92,50);
			iSetColor(255,255,255);
			iText(329,415,"CLR",GLUT_BITMAP_HELVETICA_18);

			iSetColor(b_del_r,b_del_g,b_del_b);
			iFilledRectangle(398,395,92,50);
			iSetColor(255,255,255);
			iText(426,415,"DEL",GLUT_BITMAP_HELVETICA_18);

			iSetColor(dsp_r,dsp_g,dsp_b);
			iFilledRectangle(60,465,430,100);
			iSetColor(255,255,255);
			if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && mod_key==0 && and_key==0 && or_key==0 && xor_key==0 && rsh_key==0 && lsh_key==0 && ncr_key==0 && npr_key==0 && eql_key==0 && grt_key==0 && lss_key==0 && neq_key==0 && leq_key==0 && geq_key==0)
			{
				iText(100,515,disp_1,GLUT_BITMAP_HELVETICA_18);
			}
			else
			{
				iText(100,515,disp_2,GLUT_BITMAP_HELVETICA_18);
			}

			iSetColor(b_bin_r,b_bin_g,b_bin_b);
			iFilledRectangle(10,590,45,20);
			iSetColor(255,255,255);
			iText(12,592,"BIN",GLUT_BITMAP_HELVETICA_12);

			iSetColor(b_dec_r,b_dec_g,b_dec_b);
			iFilledRectangle(10,550,45,20);
			iSetColor(255,255,255);
			iText(12,552,"DEC",GLUT_BITMAP_HELVETICA_12);

			iSetColor(b_oct_r,b_oct_g,b_oct_b);
			iFilledRectangle(10,510,45,20);
			iSetColor(255,255,255);
			iText(12,512,"OCT",GLUT_BITMAP_HELVETICA_12);
			
			iSetColor(b_hex_r,b_hex_g,b_hex_b);
			iFilledRectangle(10,470,45,20);
			iSetColor(255,255,255);
			iText(12,472,"HEX",GLUT_BITMAP_HELVETICA_12);
			
			
		}
		if(mode==4)
		{
			iShowBMP2(10,608,"home_1.bmp",-1);
			iShowBMP2(125,608,"equation.bmp",-1);
			iShowBMP2(10,508,"quad.bmp",-1);
			iShowBMP2(420,508,"linear.bmp",-1);
			if(eqmode==1)
			{
				iShowBMP2(125,488,"quad_2.bmp",-1);

				iShowBMP2(90,413,"a.bmp",-1);
				iSetColor(0,0,0);
				iText(195,433,d_a,GLUT_BITMAP_HELVETICA_18);

				iShowBMP2(90,338,"b.bmp",-1);
				iSetColor(0,0,0);
				iText(195,358,d_b,GLUT_BITMAP_HELVETICA_18);

				iShowBMP2(90,263,"c.bmp",-1);
				iSetColor(0,0,0);
				iText(195,283,d_c,GLUT_BITMAP_HELVETICA_18);

				iShowBMP2(125,188,"soln.bmp",-1);

				iShowBMP2(90,113,"x1.bmp",-1);
				iSetColor(0,0,0);
				iText(195,133,d_x1,GLUT_BITMAP_HELVETICA_18);

				iShowBMP2(90,38,"x2.bmp",-1);
				iSetColor(0,0,0);
				iText(195,58,d_x2,GLUT_BITMAP_HELVETICA_18);

				iSetColor(20,20,20);
				iFilledRectangle(440,10,50,50);
				iSetColor(255,255,255);
				iText(447,30,"CLR",GLUT_BITMAP_HELVETICA_18);

			}
			if(eqmode==2)
			{
				iShowBMP2(125,488,"linear_2.bmp",-1);

				iShowBMP2(0,413,"a1.bmp",-1);
				iSetColor(0,0,0);
				iText(105,433,d_a1,GLUT_BITMAP_HELVETICA_18);

				iShowBMP2(250,413,"a2.bmp",-1);
				iSetColor(0,0,0);
				iText(355,433,d_a2,GLUT_BITMAP_HELVETICA_18);

				iShowBMP2(0,338,"b1.bmp",-1);
				iSetColor(0,0,0);
				iText(105,358,d_b1,GLUT_BITMAP_HELVETICA_18);

				iShowBMP2(250,338,"b2.bmp",-1);
				iSetColor(0,0,0);
				iText(355,358,d_b2,GLUT_BITMAP_HELVETICA_18);

				iShowBMP2(0,263,"c1.bmp",-1);
				iSetColor(0,0,0);
				iText(105,283,d_c1,GLUT_BITMAP_HELVETICA_18);

				iShowBMP2(250,263,"c2.bmp",-1);
				iSetColor(0,0,0);
				iText(355,283,d_c2,GLUT_BITMAP_HELVETICA_18);

				iShowBMP2(125,188,"soln.bmp",-1);

				iShowBMP2(90,113,"x.bmp",-1);
				iSetColor(0,0,0);
				iText(195,133,d_x,GLUT_BITMAP_HELVETICA_18);

				iShowBMP2(90,38,"y.bmp",-1);
				iSetColor(0,0,0);
				iText(195,58,d_y,GLUT_BITMAP_HELVETICA_18);

				iSetColor(20,20,20);
				iFilledRectangle(440,10,50,50);
				iSetColor(255,255,255);
				iText(447,30,"CLR",GLUT_BITMAP_HELVETICA_18);
			}
		}
		if(mode==5)
		{
			iShowBMP2(0,0,"about_me.bmp",-1);
			iShowBMP2(10,608,"home_1.bmp",-1);
		}
	}
	
	void iMouseMove(int mx, int my) 
	{
		printf("(%d,%d)\n",mx,my);
		
	} 

	void iMouse(int button, int state, int mx, int my) 
	{

		if(mode==0)
		{
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=125)&&(mx<=375)) && ((my>=400)&&(my<=470)))
			{
				mode=1;
				res=0;
				res_alt=0;
				sprintf(disp_1,"%lf",res);
				sprintf(disp_2,"%lf",res_alt);
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=125)&&(mx<=375)) && ((my>=320)&&(my<=390)))
			{
				mode=2;
				res=0;
				res_alt=0;
				sprintf(disp_1,"%lf",res);
				sprintf(disp_2,"%lf",res_alt);
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=125)&&(mx<=375)) && ((my>=240)&&(my<=310)))
			{
				mode=3;
				b_dec_r=40;
				b_dec_g=40;
				b_dec_b=40;
				pres=0;
				pres_alt=0;
				sprintf(disp_1,"%d",pres);
				sprintf(disp_2,"%d",pres_alt);
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=125)&&(mx<=375)) && ((my>=160)&&(my<=230)))
			{
				mode=4;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=125)&&(mx<=375)) && ((my>=80)&&(my<=150)))
			{
				mode=5;
			}
		}
		if(mode==1)
		{
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=80)) && ((my>=608)&&(my<=678))) 
			{
				mode=0;
				dec_key=0;
				dec_count=0;
				dec_count_2=0;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				res=0;
				res_alt=0;
				isResult=0;
				sprintf(disp_1,"%lf",res);
				sprintf(disp_2,"%lf",res_alt);
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=6)&&(mx<=125)) && ((my>=6)&&(my<=71))) 
			{
				b_pm_r=0;
				b_pm_g=70;
				b_pm_b=180;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=6)&&(mx<=125)) && ((my>=6)&&(my<=71))) 
			{
				b_pm_r=20;
				b_pm_g=20;
				b_pm_b=20;
				printf("+/-\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0)
				{
					res=res*(-1);
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					res_alt=res_alt*(-1);
					sprintf(disp_2,"%lf",res_alt);
				}

			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=129)&&(mx<=248)) && ((my>=6)&&(my<=71))) 
			{
				b_0_r=23;
				b_0_g=171;
				b_0_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=129)&&(mx<=248)) && ((my>=6)&&(my<=71))) 
			{
				b_0_r=20;
				b_0_g=20;
				b_0_b=20;
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*0;
					}
					else
					{
						res=res*10+0;
					}
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*0;
					}
					else
					{
						res_alt=res_alt*10+0;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=252)&&(mx<=371)) && ((my>=6)&&(my<=71))) 
			{
				b_dec_r=70;
				b_dec_g=15;
				b_dec_b=155;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=252)&&(mx<=371)) && ((my>=6)&&(my<=71))) 
			{
				b_dec_r=20;
				b_dec_g=20;
				b_dec_b=20;
				printf(".\n");
				dec_key=1;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=375)&&(mx<=494)) && ((my>=6)&&(my<=71))) 
			{
				b_eql_r=0;
				b_eql_g=180;
				b_eql_b=180;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=375)&&(mx<=494)) && ((my>=6)&&(my<=71))) 
			{
				b_eql_r=20;
				b_eql_g=20;
				b_eql_b=20;
				printf("=\n");
				if(plus_key==1)
				{
					res=res+res_alt;
					sprintf(disp_1,"%lf",res);
					res_alt=0;
					plus_key=0;
				}
				if(minus_key==1)
				{
					res=res-res_alt;
					sprintf(disp_1,"%lf",res);
					res_alt=0;
					minus_key=0;
				}
				if(multiplication_key==1)
				{
					res=res*res_alt;
					sprintf(disp_1,"%lf",res);
					res_alt=0;
					multiplication_key=0;
				}
				if(divition_key==1)
				{
					if(res_alt!=0)
					{
						res=res/res_alt;
						sprintf(disp_1,"%lf",res);
					}
					else
					{
						sprintf(disp_1,"%s","Math error!!");
						res=0;
					}
					res_alt=0;
					divition_key=0;
				}
				sprintf(disp_2,"%lf",res_alt);
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				dec_key=0;
				dec_count=0;
				dec_count_2=0;
				isResult=1;
				printf("%lf\n",res);
				
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=6)&&(mx<=125)) && ((my>=75)&&(my<=140))) 
			{
				b_1_r=23;
				b_1_g=171;
				b_1_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=6)&&(mx<=125)) && ((my>=75)&&(my<=140))) 
			{
				b_1_r=20;
				b_1_g=20;
				b_1_b=20;
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*1;
					}
					else
					{
						res=res*10+1;
					}
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*1;
					}
					else
					{
						res_alt=res_alt*10+1;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
				printf("1\n");
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=129)&&(mx<=248)) && ((my>=75)&&(my<=140))) 
			{
				b_2_r=23;
				b_2_g=171;
				b_2_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=129)&&(mx<=248)) && ((my>=75)&&(my<=140))) 
			{
				b_2_r=20;
				b_2_g=20;
				b_2_b=20;
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*2;
					}
					else
					{
						res=res*10+2;
					}
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*2;
					}
					else
					{
						res_alt=res_alt*10+2;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
				printf("2\n");
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=252)&&(mx<=371)) && ((my>=75)&&(my<=140))) 
			{
				b_3_r=23;
				b_3_g=171;
				b_3_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=252)&&(mx<=371)) && ((my>=75)&&(my<=140))) 
			{
				b_3_r=20;
				b_3_g=20;
				b_3_b=20;
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*3;
					}
					else
					{
						res=res*10+3;
					}
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*3;
					}
					else
					{
						res_alt=res_alt*10+3;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
				printf("3\n");
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=375)&&(mx<=494)) && ((my>=75)&&(my<=140))) 
			{
				b_pls_r=200;
				b_pls_g=45;
				b_pls_b=70;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=375)&&(mx<=494)) && ((my>=75)&&(my<=140))) 
			{
				printf("+\n");
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				//b_pls_r=20,b_pls_g=20,b_pls_b=20;
				isResult=0;
				plus_key=1;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				dec_key=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=6)&&(mx<=125)) && ((my>=144)&&(my<=209))) 
			{
				b_4_r=23;
				b_4_g=171;
				b_4_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=6)&&(mx<=125)) && ((my>=144)&&(my<=209))) 
			{
				b_4_r=20;
				b_4_g=20;
				b_4_b=20;
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*4;
					}
					else
					{
						res=res*10+4;
					}
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*4;
					}
					else
					{
						res_alt=res_alt*10+4;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
				printf("4\n");
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=129)&&(mx<=248)) && ((my>=144)&&(my<=209))) 
			{
				b_5_r=23;
				b_5_g=171;
				b_5_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=129)&&(mx<=248)) && ((my>=144)&&(my<=209))) 
			{
				b_5_r=20;
				b_5_g=20;
				b_5_b=20;
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*5;
					}
					else
					{
						res=res*10+5;
					}
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*5;
					}
					else
					{
						res_alt=res_alt*10+5;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
				printf("5\n");
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=252)&&(mx<=371)) && ((my>=144)&&(my<=209))) {
				b_6_r=23;
				b_6_g=171;
				b_6_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=252)&&(mx<=371)) && ((my>=144)&&(my<=209))) {
				b_6_r=20;
				b_6_g=20;
				b_6_b=20;
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*6;
					}
					else
					{
						res=res*10+6;
					}
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*6;
					}
					else
					{
						res_alt=res_alt*10+6;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
				printf("6\n");
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=375)&&(mx<=494)) && ((my>=144)&&(my<=209))) {
				b_min_r=200;
				b_min_g=45;
				b_min_b=70;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=375)&&(mx<=494)) && ((my>=144)&&(my<=209))) {
				printf("-\n");
				//b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				isResult=0;
				plus_key=0;
				minus_key=1;
				multiplication_key=0;
				divition_key=0;
				dec_key=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=6)&&(mx<=125)) && ((my>=213)&&(my<=278))) {
				b_7_r=23;
				b_7_g=171;
				b_7_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=6)&&(mx<=125)) && ((my>=213)&&(my<=278))) {
				b_7_r=20;
				b_7_g=20;
				b_7_b=20;
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*7;
					}
					else
					{
						res=res*10+7;
					}
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*7;
					}
					else
					{
						res_alt=res_alt*10+7;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
				printf("7\n");
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=129)&&(mx<=248)) && ((my>=213)&&(my<=278))) {
				b_8_r=23;
				b_8_g=171;
				b_8_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=129)&&(mx<=248)) && ((my>=213)&&(my<=278))) {
				b_8_r=20;
				b_8_g=20;
				b_8_b=20;
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*8;
					}
					else
					{
						res=res*10+8;
					}
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*8;
					}
					else
					{
						res_alt=res_alt*10+8;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=252)&&(mx<=371)) && ((my>=213)&&(my<=278))) {
				b_9_r=23;
				b_9_g=171;
				b_9_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=252)&&(mx<=371)) && ((my>=213)&&(my<=278))) {
				b_9_r=20;
				b_9_g=20;
				b_9_b=20;
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*9;
					}
					else
					{
						res=res*10+9;
					}
					sprintf(disp_1,"%lf",res);
				} 
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*9;
					}
					else
					{
						res_alt=res_alt*10+9;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
				printf("9\n");
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=375)&&(mx<=494)) && ((my>=213)&&(my<=278))) {
				b_mul_r=200;
				b_mul_g=45;
				b_mul_b=70;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=375)&&(mx<=494)) && ((my>=213)&&(my<=278))) {
				b_min_r=20,b_min_g=20,b_min_b=20;
				//b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				printf("x\n");
				isResult=0;
				plus_key=0;
				minus_key=0;
				multiplication_key=1;
				divition_key=0;
				dec_key=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=6)&&(mx<=125)) && ((my>=282)&&(my<=347))) {
				b_inv_r=0;
				b_inv_g=70;
				b_inv_b=180;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=6)&&(mx<=125)) && ((my>=282)&&(my<=347))) {
				b_inv_r=20;
				b_inv_g=20;
				b_inv_b=20;
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0)
				{
					res=1/res;
					sprintf(disp_1,"%lf",res);
				}
				isResult=1;
				printf("1/x\n");
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=129)&&(mx<=248)) && ((my>=282)&&(my<=347))) {
				b_sq_r=0;
				b_sq_g=70;
				b_sq_b=180;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=129)&&(mx<=248)) && ((my>=282)&&(my<=347))) {
				b_sq_r=20;
				b_sq_g=20;
				b_sq_b=20;
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0)
				{
					res=res*res;
					sprintf(disp_1,"%lf",res);
				}
				isResult=1;
				printf("x^2\n");
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=252)&&(mx<=371)) && ((my>=282)&&(my<=347))) {
				b_sqrt_r=0;
				b_sqrt_g=70;
				b_sqrt_b=180;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=252)&&(mx<=371)) && ((my>=282)&&(my<=347))) {
				b_sqrt_r=20;
				b_sqrt_g=20;
				b_sqrt_b=20;
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0)
				{
					res=sqrt(res);
					sprintf(disp_1,"%lf",res);
				}
				isResult=1;
				printf("root\n");
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=375)&&(mx<=494)) && ((my>=282)&&(my<=347))) {
				b_div_r=200;
				b_div_g=45;
				b_div_b=70;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=375)&&(mx<=494)) && ((my>=282)&&(my<=347))) {
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				//b_div_r=20,b_div_g=20,b_div_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				printf("/\n");
				isResult=0;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=1;
				dec_key=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=6)&&(mx<=125)) && ((my>=351)&&(my<=416))) {
				b_prc_r=0;
				b_prc_g=70;
				b_prc_b=180;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=6)&&(mx<=125)) && ((my>=351)&&(my<=416))) {
				b_prc_r=20;
				b_prc_g=20;
				b_prc_b=20;
				if(multiplication_key==1)
				{
					res=res*res_alt/100;
					multiplication_key=0;
					sprintf(disp_1,"%lf",res);
					res_alt=0;
					sprintf(disp_2,"%lf",res_alt);
					b_mul_r=20,b_mul_g=20,b_mul_b=20;
					isResult=1;
				}
				printf("%\n");
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=129)&&(mx<=248)) && ((my>=351)&&(my<=416))) {
				b_m_r=70;
				b_m_g=15;
				b_m_b=155;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=129)&&(mx<=248)) && ((my>=351)&&(my<=416))) {
				b_m_r=20;
				b_m_g=20;
				b_m_b=20;
				printf("M\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0)
				{
					res=m;
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					res_alt=m;
					sprintf(disp_2,"%g",res_alt);
				}

			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=252)&&(mx<=371)) && ((my>=351)&&(my<=416))) {
				b_clr_r=40;
				b_clr_g=40;
				b_clr_b=40;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=252)&&(mx<=371)) && ((my>=351)&&(my<=416))) {
				b_clr_r=20;
				b_clr_g=20;
				b_clr_b=20;
				printf("clr\n");
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				dec_key=0;
				dec_count=0;
				dec_count_2=0;
				res=0;
				res_alt=0;
				isResult=0;
				sprintf(disp_1,"%g",res);
				sprintf(disp_2,"%g",res_alt);
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=375)&&(mx<=494)) && ((my>=351)&&(my<=416))) {
				b_del_r=40;
				b_del_g=40;
				b_del_b=40;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=375)&&(mx<=494)) && ((my>=351)&&(my<=416))) {
				b_del_r=20;
				b_del_g=20;
				b_del_b=20;
				printf("del\n");
				// if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0)
				// {
					
				// }
				// else
				// {
				// 	res_alt=res_alt/10;
				// 	sprintf(disp_2,"%g",res_alt);
				// }

			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=6)&&(mx<=125)) && ((my>=420)&&(my<=485))) {
				b_mp_r=70;
				b_mp_g=15;
				b_mp_b=155;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=6)&&(mx<=125)) && ((my>=420)&&(my<=485))) {
				b_mp_r=20;
				b_mp_g=20;
				b_mp_b=20;
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0)
				{
					m=m+res;
				}
				else
				{
					m=m+res_alt;
				}
				printf("m+\n");
 			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=129)&&(mx<=248)) && ((my>=420)&&(my<=485))) {
				b_mm_r=70;
				b_mm_g=15;
				b_mm_b=155;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=129)&&(mx<=248)) && ((my>=420)&&(my<=485))) {
				b_mm_r=20;
				b_mm_g=20;
				b_mm_b=20;
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0)
				{
					m=m-res;
				}
				else
				{
					m=m-res_alt;
				}
				printf("m-\n");
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=252)&&(mx<=371)) && ((my>=420)&&(my<=485))) {
				b_mc_r=70;
				b_mc_g=15;
				b_mc_b=155;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=252)&&(mx<=371)) && ((my>=420)&&(my<=485))) {
				b_mc_r=20;
				b_mc_g=20;
				b_mc_b=20;
				m=0;
				printf("mclr\n");
			}
		}
		if(mode==2)
		{
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=80)) && ((my>=608)&&(my<=678))) 
			{
				mode=0;
				dec_key=0;
				dec_count=0;
				dec_count_2=0;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				power_key=0;
				res=0;
				res_alt=0;
				sprintf(disp_1,"%lf",res);
				sprintf(disp_2,"%lf",res_alt);
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=102)) && ((my>=10)&&(my<=60))) 
			{
				b_pi_r=0;
				b_pi_g=150;
				b_pi_b=50;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=102)) && ((my>=10)&&(my<=60))) 
			{
				b_pi_r=20;
				b_pi_g=20;
				b_pi_b=20;
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					res=pi;
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					res_alt=pi;
					sprintf(disp_2,"%lf",res_alt);
				}
				isResult=1;
				printf("pi\n");
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=107)&&(mx<=199)) && ((my>=10)&&(my<=60))) 
			{
				b_pm_r=0;
				b_pm_g=70;
				b_pm_b=1800;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=107)&&(mx<=199)) && ((my>=10)&&(my<=60))) 
			{
				b_pm_r=20;
				b_pm_g=20;
				b_pm_b=20;
				printf("+/-\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					res=res*(-1);
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					res_alt=res_alt*(-1);
					sprintf(disp_2,"%lf",res_alt);
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=204)&&(mx<=296)) && ((my>=10)&&(my<=60))) 
			{
				b_0_r=23;
				b_0_g=171;
				b_0_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=204)&&(mx<=296)) && ((my>=10)&&(my<=60))) 
			{
				b_0_r=20;
				b_0_g=20;
				b_0_b=20;
				printf("0\n");
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*0;
					}
					else
					{
						res=res*10+0;
					}
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*0;
					}
					else
					{
						res_alt=res_alt*10+0;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=301)&&(mx<=393)) && ((my>=10)&&(my<=60))) 
			{
				b_dec_r=70;
				b_dec_g=15;
				b_dec_b=155;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=301)&&(mx<=393)) && ((my>=10)&&(my<=60))) 
			{
				b_dec_r=20;
				b_dec_g=20;
				b_dec_b=20;
				printf(".\n");
				dec_key=1;
				
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=398)&&(mx<=490)) && ((my>=10)&&(my<=60))) 
			{
				b_eql_r=0;
				b_eql_g=180;
				b_eql_b=180;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=398)&&(mx<=490)) && ((my>=10)&&(my<=60))) 
			{
				b_eql_r=20;
				b_eql_g=20;
				b_eql_b=20;
				printf("=\n");
				if(plus_key==1)
				{
					res=res+res_alt;
					res_alt=0;
					plus_key=0;
				}
				if(minus_key==1)
				{
					res=res-res_alt;
					res_alt=0;
					minus_key=0;
				}
				if(multiplication_key==1)
				{
					res=res*res_alt;
					res_alt=0;
					multiplication_key=0;
				}
				if(divition_key==1)
				{
					if(res_alt!=0)
					{
						res=res/res_alt;
					}
					else
					{
						sprintf(disp_1,"%s","Math error!!");
						res=0;
					}
					res_alt=0;
					divition_key=0;
				}
				if(power_key==1)
				{
					res=pow(res,res_alt);
					res_alt=0;
					power_key=0;
				}
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_pow_r=20,b_pow_g=20,b_pow_b=20;
				sprintf(disp_1,"%lf",res);
				sprintf(disp_2,"%lf",res_alt);
				dec_key=0;
				dec_count=0;
				dec_count_2=0;
				isResult=1;
				printf("%lf\n",res);
			}

			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=102)) && ((my>=65)&&(my<=115))) 
			{
				b_e_r=0;
				b_e_g=150;
				b_e_b=50;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=102)) && ((my>=65)&&(my<=115))) 
			{
				b_e_r=20;
				b_e_g=20;
				b_e_b=20;
				printf("e\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					res=e;
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					res_alt=e;
					sprintf(disp_2,"%lf",res_alt);
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=107)&&(mx<=199)) && ((my>=65)&&(my<=115))) 
			{
				b_1_r=23;
				b_1_g=171;
				b_1_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=107)&&(mx<=199)) && ((my>=65)&&(my<=115))) 
			{
				b_1_r=20;
				b_1_g=20;
				b_1_b=20;
				printf("1\n");
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*1;
					}
					else
					{
						res=res*10+1;
					}
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*1;
					}
					else
					{
						res_alt=res_alt*10+1;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=204)&&(mx<=296)) && ((my>=65)&&(my<=115))) 
			{
				b_2_r=23;
				b_2_g=171;
				b_2_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=204)&&(mx<=296)) && ((my>=65)&&(my<=115))) 
			{
				b_2_r=20;
				b_2_g=20;
				b_2_b=20;
				printf("2\n");
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*2;
					}
					else
					{
						res=res*10+2;
					}
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*2;
					}
					else
					{
						res_alt=res_alt*10+2;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=301)&&(mx<=393)) && ((my>=65)&&(my<=115))) 
			{
				b_3_r=23;
				b_3_g=171;
				b_3_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=301)&&(mx<=393)) && ((my>=65)&&(my<=115))) 
			{
				b_3_r=20;
				b_3_g=20;
				b_3_b=20;
				printf("3\n");
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*3;
					}
					else
					{
						res=res*10+3;
					}
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*3;
					}
					else
					{
						res_alt=res_alt*10+3;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=398)&&(mx<=490)) && ((my>=65)&&(my<=115))) 
			{
				b_pls_r=200;
				b_pls_g=45;
				b_pls_b=70;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=398)&&(mx<=490)) && ((my>=65)&&(my<=115))) 
			{
				printf("+\n");
				if(isResult==1)
				{
					isResult=0;
				}
				plus_key=1;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				power_key=0;
				dec_key=0;
				//b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_pow_r=20,b_pow_g=20,b_pow_b=20;
			}

			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=102)) && ((my>=120)&&(my<=170))) 
			{
				b_sq_r=0;
				b_sq_g=70;
				b_sq_b=180;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=102)) && ((my>=120)&&(my<=170))) 
			{
				b_sq_r=20;
				b_sq_g=20;
				b_sq_b=20;
				printf("x^2\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					res=res*res;
					sprintf(disp_1,"%lf",res);
				}
				isResult=1;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=107)&&(mx<=199)) && ((my>=120)&&(my<=170))) 
			{
				b_4_r=23;
				b_4_g=171;
				b_4_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=107)&&(mx<=199)) && ((my>=120)&&(my<=170))) 
			{
				b_4_r=20;
				b_4_g=20;
				b_4_b=20;
				printf("4\n");
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*4;
					}
					else
					{
						res=res*10+4;
					}
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*4;
					}
					else
					{
						res_alt=res_alt*10+4;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=204)&&(mx<=296)) && ((my>=120)&&(my<=170))) 
			{
				b_5_r=23;
				b_5_g=171;
				b_5_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=204)&&(mx<=296)) && ((my>=120)&&(my<=170))) 
			{
				b_5_r=20;
				b_5_g=20;
				b_5_b=20;
				printf("5\n");
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*5;
					}
					else
					{
						res=res*10+5;
					}
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*5;
					}
					else
					{
						res_alt=res_alt*10+5;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=301)&&(mx<=393)) && ((my>=120)&&(my<=170))) 
			{
				b_6_r=23;
				b_6_g=171;
				b_6_b=33;
			}			
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=301)&&(mx<=393)) && ((my>=120)&&(my<=170))) 
			{
				b_6_r=20;
				b_6_g=20;
				b_6_b=20;
				printf("6\n");
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*6;
					}
					else
					{
						res=res*10+6;
					}
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*6;
					}
					else
					{
						res_alt=res_alt*10+6;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=398)&&(mx<=490)) && ((my>=120)&&(my<=170))) 
			{
				b_min_r=200;
				b_min_g=45;
				b_min_b=70;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=398)&&(mx<=490)) && ((my>=120)&&(my<=170))) 
			{
				printf("-\n");
				if(isResult==1)
				{
					isResult=0;
				}
				plus_key=0;
				minus_key=1;
				multiplication_key=0;
				divition_key=0;
				power_key=0;
				dec_key=0;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				//b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_pow_r=20,b_pow_g=20,b_pow_b=20;
			}

			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=102)) && ((my>=175)&&(my<=225))) 
			{
				b_sqrt_r=0;
				b_sqrt_g=70;
				b_sqrt_b=180;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=102)) && ((my>=175)&&(my<=225))) 
			{
				b_sqrt_r=20;
				b_sqrt_g=20;
				b_sqrt_b=20;
				printf("root\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					res=sqrt(res);
					sprintf(disp_1,"%lf",res);
				}
				isResult=1;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=107)&&(mx<=199)) && ((my>=175)&&(my<=225))) 
			{
				b_7_r=23;
				b_7_g=171;
				b_7_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=107)&&(mx<=199)) && ((my>=175)&&(my<=225))) 
			{
				b_7_r=20;
				b_7_g=20;
				b_7_b=20;
				printf("7\n");
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*7;
					}
					else
					{
						res=res*10+7;
					}
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*7;
					}
					else
					{
						res_alt=res_alt*10+7;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=204)&&(mx<=296)) && ((my>=175)&&(my<=225))) 
			{
				b_8_r=23;
				b_8_g=171;
				b_8_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=204)&&(mx<=296)) && ((my>=175)&&(my<=225))) 
			{
				b_8_r=20;
				b_8_g=20;
				b_8_b=20;
				printf("8\n");
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*8;
					}
					else
					{
						res=res*10+8;
					}
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*8;
					}
					else
					{
						res_alt=res_alt*10+8;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=301)&&(mx<=393)) && ((my>=175)&&(my<=225))) 
			{
				b_9_r=23;
				b_9_g=171;
				b_9_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=301)&&(mx<=393)) && ((my>=175)&&(my<=225))) 
			{
				b_9_r=20;
				b_9_g=20;
				b_9_b=20;
				printf("9\n");
				if(isResult==1)
				{
					res=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					
					if(dec_key==1)
					{
						dec_count++;
						res=res+pow(0.1,(dec_count))*9;
					}
					else
					{
						res=res*10+9;
					}
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					if(dec_key==1)
					{
						dec_count_2++;
						res_alt=res_alt+pow(0.1,(dec_count_2))*9;
					}
					else
					{
						res_alt=res_alt*10+9;
					}
					sprintf(disp_2,"%lf",res_alt);
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=398)&&(mx<=490)) && ((my>=175)&&(my<=225))) 
			{
				b_mul_r=0;
				b_mul_g=70;
				b_mul_b=180;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=398)&&(mx<=490)) && ((my>=175)&&(my<=225))) 
			{
				printf("x\n");
				if(isResult==1)
				{
					isResult=0;
				}
				plus_key=0;
				minus_key=0;
				multiplication_key=1;
				divition_key=0;
				power_key=0;
				dec_key=0;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				//b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_pow_r=20,b_pow_g=20,b_pow_b=20;
			}

			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=102)) && ((my>=230)&&(my<=280))) 
			{
				b_exp_r=0;
				b_exp_g=70;
				b_exp_b=180;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=102)) && ((my>=230)&&(my<=280))) 
			{
				b_exp_r=20;
				b_exp_g=20;
				b_exp_b=20;
				printf("e^x\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					res=exp(res);
					sprintf(disp_1,"%lf",res);
				}
				isResult=1;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=107)&&(mx<=199)) && ((my>=230)&&(my<=280))) 
			{
				b_asin_r=255;
				b_asin_g=75;
				b_asin_b=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=107)&&(mx<=199)) && ((my>=230)&&(my<=280))) 
			{
				b_asin_r=20;
				b_asin_g=20;
				b_asin_b=20;
				printf("sin^-1\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					if(res<0)
					{
						sprintf(disp_1,"%s","Math error!!");
						res=0;
					}
					else
					{
						res=asin(res)*(180/pi);
						sprintf(disp_1,"%lf",res);
					}
				}
				isResult=1;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=204)&&(mx<=296)) && ((my>=230)&&(my<=280))) 
			{
				b_acos_r=255;
				b_acos_g=75;
				b_acos_b=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=204)&&(mx<=296)) && ((my>=230)&&(my<=280))) 
			{
				b_acos_r=20;
				b_acos_g=20;
				b_acos_b=20;
				printf("cos^-1\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					if(res<0)
					{
						sprintf(disp_1,"%s","Math error!!");
						res=0;
					}
					else
					{
						res=acos(res)*(180/pi);
						sprintf(disp_1,"%lf",res);
					}
				}
				isResult=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=301)&&(mx<=393)) && ((my>=230)&&(my<=280))) 
			{
				b_atan_r=255;
				b_atan_g=75;
				b_atan_b=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=301)&&(mx<=393)) && ((my>=230)&&(my<=280))) 
			{
				b_atan_r=20;
				b_atan_g=20;
				b_atan_b=20;
				printf("tan^-1\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					res=atan(res)*(180/pi);
					sprintf(disp_1,"%lf",res);
				}
				isResult=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=398)&&(mx<=490)) && ((my>=230)&&(my<=280))) 
			{
				b_div_r=200;
				b_div_g=45;
				b_div_b=70;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=398)&&(mx<=490)) && ((my>=230)&&(my<=280))) 
			{
				printf("/\n");
				if(isResult==1)
				{
					isResult=0;
				}
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=1;
				power_key=0;
				dec_key=0;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				//b_div_r=20,b_div_g=20,b_div_b=20;
				b_pow_r=20,b_pow_g=20,b_pow_b=20;
			}

			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=102)) && ((my>=285)&&(my<=335))) 
			{
				b_10p_r=0;
				b_10p_g=70;
				b_10p_b=180;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=102)) && ((my>=285)&&(my<=335))) 
			{
				b_10p_r=20;
				b_10p_g=20;
				b_10p_b=20;
				printf("10^x\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					res=pow(10,res);
					sprintf(disp_1,"%lf",res);
				}
				isResult=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=107)&&(mx<=199)) && ((my>=285)&&(my<=335))) 
			{
				b_sin_r=0;
				b_sin_g=150;
				b_sin_b=150;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=107)&&(mx<=199)) && ((my>=285)&&(my<=335))) 
			{
				b_sin_r=20;
				b_sin_g=20;
				b_sin_b=20;
				printf("sin\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					res=sin((pi*res)/180);
					sprintf(disp_1,"%lf",res);
				}
				isResult=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=204)&&(mx<=296)) && ((my>=285)&&(my<=335))) 
			{
				b_cos_r=0;
				b_cos_g=150;
				b_cos_b=150;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=204)&&(mx<=296)) && ((my>=285)&&(my<=335))) 
			{
				b_cos_r=20;
				b_cos_g=20;
				b_cos_b=20;
				printf("cos\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					res=cos((pi*res)/180);
					sprintf(disp_1,"%lf",res);
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=301)&&(mx<=393)) && ((my>=285)&&(my<=335))) 
			{
				b_tan_r=0;
				b_tan_g=150;
				b_tan_b=150;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=301)&&(mx<=393)) && ((my>=285)&&(my<=335))) 
			{
				b_tan_r=20;
				b_tan_g=20;
				b_tan_b=20;
				printf("tan\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					if(res==90)
					{
						sprintf(disp_1,"%s","Math error!!");
						res=0;
					}
					else
					{
						res=tan((pi*res)/180);
						sprintf(disp_1,"%lf",res);
					}
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=398)&&(mx<=490)) && ((my>=285)&&(my<=335))) 
			{
				b_pow_r=200;
				b_pow_g=45;
				b_pow_b=70;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=398)&&(mx<=490)) && ((my>=285)&&(my<=335))) 
			{
				printf("^\n");
				if(isResult==1)
				{
					isResult=0;
				}
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				power_key=1;
				dec_key=0;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				//b_pow_r=20,b_pow_g=20,b_pow_b=20;
			}

			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=102)) && ((my>=340)&&(my<=390))) 
			{
				b_inv_r=0;
				b_inv_g=70;
				b_inv_b=180;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=102)) && ((my>=340)&&(my<=390))) 
			{
				b_inv_r=20;
				b_inv_g=20;
				b_inv_b=20;
				printf("1/x\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					if(res==0)
					{
						sprintf(disp_1,"%s","Math error!!");
						res=0;
					}
					else
					{
						res=1/res;
						sprintf(disp_1,"%lf",res);
					}
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=107)&&(mx<=199)) && ((my>=340)&&(my<=390))) 
			{
				b_abs_r=0;
				b_abs_g=70;
				b_abs_b=180;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=107)&&(mx<=199)) && ((my>=340)&&(my<=390))) 
			{
				b_abs_r=20;
				b_abs_g=20;
				b_abs_b=20;
				printf("|x|\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					res=fabs(res);
					sprintf(disp_1,"%lf",res);
				}
				isResult=1;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=204)&&(mx<=296)) && ((my>=340)&&(my<=390))) 
			{
				b_ln_r=0;
				b_ln_g=70;
				b_ln_b=180;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=204)&&(mx<=296)) && ((my>=340)&&(my<=390))) 
			{
				b_ln_r=20;
				b_ln_g=20;
				b_ln_b=20;
				printf("ln\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					if(res<=0)
					{
						sprintf(disp_1,"%s","Math error!!");
						res=0;
					}
					else
					{
						res=log(res);
						sprintf(disp_1,"%lf",res);
					}
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=301)&&(mx<=393)) && ((my>=340)&&(my<=390))) 
			{
				b_log_r=0;
				b_log_g=70;
				b_log_b=180;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=301)&&(mx<=393)) && ((my>=340)&&(my<=390))) 
			{
				b_log_r=20;
				b_log_g=20;
				b_log_b=20;
				printf("log10\n");
				if(res<=0)
					{
						sprintf(disp_1,"%s","Math error!!");
						res=0;
					}
					else
					{
						res=log10(res);
						sprintf(disp_1,"%lf",res);
					}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=398)&&(mx<=490)) && ((my>=340)&&(my<=390))) 
			{
				b_m_r=70;
				b_m_g=15;
				b_m_b=155;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=398)&&(mx<=490)) && ((my>=340)&&(my<=390))) 
			{
				b_m_r=20;
				b_m_g=20;
				b_m_b=20;
				printf("M\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					res=m;
					sprintf(disp_1,"%lf",res);
				}
				else
				{
					res_alt=m;
					sprintf(disp_2,"%lf",res_alt);
				}
			}

			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=102)) && ((my>=395)&&(my<=445))) 
			{
				b_mc_r=70;
				b_mc_g=15;
				b_mc_b=155;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=102)) && ((my>=395)&&(my<=445))) 
			{
				b_mc_r=20;
				b_mc_g=20;
				b_mc_b=20;
				printf("MC\n");
				m=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=107)&&(mx<=199)) && ((my>=395)&&(my<=445))) 
			{
				b_mp_r=70;
				b_mp_g=15;
				b_mp_b=155;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=107)&&(mx<=199)) && ((my>=395)&&(my<=445))) 
			{
				b_mp_r=20;
				b_mp_g=20;
				b_mp_b=20;
				printf("M+\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					m=m+res;
				}
				else
				{
					m=m+res_alt;
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=204)&&(mx<=296)) && ((my>=395)&&(my<=445))) 
			{
				b_mm_r=70;
				b_mm_g=15;
				b_mm_b=155;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=204)&&(mx<=296)) && ((my>=395)&&(my<=445))) 
			{
				b_mm_r=20;
				b_mm_g=20;
				b_mm_b=20;
				printf("M-\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					m=m-res;
				}
				else
				{
					m=m-res_alt;
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=301)&&(mx<=393)) && ((my>=395)&&(my<=445))) 
			{
				b_clr_r=40;
				b_clr_g=40;
				b_clr_b=40;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=301)&&(mx<=393)) && ((my>=395)&&(my<=445))) 
			{
				b_clr_r=20;
				b_clr_g=20;
				b_clr_b=20;
				printf("CLR\n");
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				dec_key=0;
				dec_count=0;
				dec_count_2=0;
				res=0;
				res_alt=0;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_pow_r=20,b_pow_g=20,b_pow_b=20;
				isResult=0;
				sprintf(disp_1,"%lf",res);
				sprintf(disp_2,"%lf",res_alt);
			}
			// if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=398)&&(mx<=490)) && ((my>=395)&&(my<=445))) 
			// {
			// 	b_del_r=40;
			// 	b_del_g=40;
			// 	b_del_b=40;

			// }
			// if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=398)&&(mx<=490)) && ((my>=395)&&(my<=445))) 
			// {
			// 	b_del_r=20;
			// 	b_del_g=20;
			// 	b_del_b=20;
			// 	printf("DEL\n");
			// 	if(isResult==0)
			// 	{
			// 		if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
			// 		{
			// 			if(digit_after_float(res)==0)
			// 			{
			// 				res=(int)res/(int)10;
			// 			}
			// 			else
			// 			{
			// 				double df=0;
			// 				int i1=0,t=0,t1=0,c=0;
			// 				t=res;
			// 				df=res-t;
			// 				t1=df*(int)pow(10,digit_after_float(res));
			// 				t1/=10;     
			// 				df=t1/(double)(pow(10,digit_after_float(res)-1));
			// 				res=t+df;
			// 			}
			// 			sprintf(disp_1,"%lf",res);
			// 		}
			// 		else
			// 		{
			// 			if(digit_after_float(res_alt)==0)
			// 			{
			// 				res_alt=(int)res_alt/(int)10;
			// 			}
			// 			else
			// 			{
			// 				double df=0;
			// 				int i1=0,t=0,t1=0,c=0;
			// 				t=res_alt;
			// 				df=res_alt-t;
			// 				t1=df*(int)pow(10,digit_after_float(res_alt));
			// 				t1/=10;     
			// 				df=t1/(double)(pow(10,digit_after_float(res_alt)-1));
			// 				res_alt=t+df;
			// 			}
			// 			sprintf(disp_2,"%lf",res_alt);
			// 		}
			// 	}
			// }
		}
		if(mode==3)
		{
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=60)) && ((my>=628)&&(my<=678))) 
			{
				b_h_r=40;
				b_h_g=40;
				b_h_b=40;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=60)) && ((my>=628)&&(my<=678))) 
			{
				b_h_r=20;
				b_h_g=20;
				b_h_b=20;
				mode=0;
				b_dec_r=20,b_dec_g=20,b_dec_b=20;
				b_bin_r=20,b_bin_g=20,b_bin_b=20;
				b_oct_r=20,b_oct_g=20,b_oct_b=20;
				b_hex_r=20,b_hex_g=20,b_hex_b=20;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				and_key=0;
				or_key=0;
				xor_key=0;
				rsh_key=0;
				lsh_key=0;
				ncr_key=0;
				npr_key=0;
				eql_key=0;
				grt_key=0;
				lss_key=0;
				neq_key=0;
				leq_key=0;
				geq_key=0;
				pres=0;
				pres_alt=0;
				isResult=0;
				octnum_key=0;
				binnum_key=0;
				hexnum_key=0;
				decnum_key=1;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_and_r=20,b_and_g=20,b_and_b=20;
				b_or_r=20,b_or_g=20,b_or_b=20;
				b_xor_r=20,b_xor_g=20,b_xor_b=20;
				b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
				b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
				b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
				b_npr_r=20,b_npr_g=20,b_npr_b=20;
				b_eq_r=20,b_eq_g=20,b_eq_b=20;
				b_grt_r=20,b_grt_g=20,b_grt_b=20;
				b_lss_r=20,b_lss_g=20,b_lss_b=20;
				b_neq_r=20,b_neq_g=20,b_neq_b=20;
				b_leq_r=20,b_leq_g=20,b_leq_b=20;
				b_req_r=20,b_req_g=20,b_req_b=20;
				b_mod_r=20,b_mod_g=20,b_mod_b=20;
				sprintf(disp_1,"%d",pres);
				sprintf(disp_2,"%d",pres_alt);
			}

			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=55)) && ((my>=590)&&(my<=610))) 
			{
				b_bin_r=200;
				b_bin_g=45;
				b_bin_b=70;
				
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=55)) && ((my>=590)&&(my<=610))) 
			{
				printf("BIN\n");
				
				decnum_key=0;
				octnum_key=0;
				hexnum_key=0;
				binnum_key=1;
				b_dec_r=20,b_dec_g=20,b_dec_b=20;
				b_oct_r=20,b_oct_g=20,b_oct_b=20;
				b_hex_r=20,b_hex_g=20,b_hex_b=20;
				binaryString=intToBinaryString(pres);
				sprintf(disp_1,"%s",binaryString);
			}

			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=55)) && ((my>=550)&&(my<=570))) 
			{
				b_dec_r=23;
				b_dec_g=171;
				b_dec_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=55)) && ((my>=550)&&(my<=570))) 
			{
				printf("DEC\n");
				
				binnum_key=0;
				octnum_key=0;
				hexnum_key=0;
				decnum_key=1;
				b_bin_r=20,b_bin_g=20,b_bin_b=20;
				b_oct_r=20,b_oct_g=20,b_oct_b=20;
				b_hex_r=20,b_hex_g=20,b_hex_b=20;
				sprintf(disp_1,"%d",pres);
			}

			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=55)) && ((my>=510)&&(my<=530))) 
			{
				b_oct_r=0;
				b_oct_g=70;
				b_oct_b=180;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=55)) && ((my>=510)&&(my<=530))) 
			{
				printf("OCT\n");
				
				binnum_key=0;
				decnum_key=0;
				hexnum_key=0;
				octnum_key=1;
				b_bin_r=20,b_bin_g=20,b_bin_b=20;
				b_dec_r=20,b_dec_g=20,b_dec_b=20;
				b_hex_r=20,b_hex_g=20,b_hex_b=20;
				sprintf(disp_1,"%o",pres);
			}

			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=55)) && ((my>=470)&&(my<=490))) 
			{
				b_hex_r=0;
				b_hex_g=150;
				b_hex_b=50;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=55)) && ((my>=470)&&(my<=490))) 
			{
				printf("HEX\n");
				hexnum_key=1;
				binnum_key=0;
				decnum_key=0;
				octnum_key=0;
				b_bin_r=20,b_bin_g=20,b_bin_b=20;
				b_oct_r=20,b_oct_g=20,b_oct_b=20;
				b_dec_r=20,b_dec_g=20,b_dec_b=20;
				sprintf(disp_1,"%X",pres);
			}

			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=102)) && ((my>=10)&&(my<=60))) 
			{
				b_F_r=0;
				b_F_g=150;
				b_F_b=50;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=102)) && ((my>=10)&&(my<=60))) 
			{
				b_F_r=20;
				b_F_g=20;
				b_F_b=20;
				printf("F\n");
				if(isResult==1 && hexnum_key==1)
				{
					pres=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && mod_key==0 && and_key==0 && or_key==0 && xor_key==0 && rsh_key==0 && lsh_key==0 && ncr_key==0 && npr_key==0 && eql_key==0 && grt_key==0 && lss_key==0 && neq_key==0 && leq_key==0 && geq_key==0)
				{
					if(hexnum_key==1)
					{
						pres=pres*16+15;
						sprintf(disp_1,"%X",pres);
					}
				}
				else
				{
					if(hexnum_key==1)
					{
						pres_alt=pres_alt*16+15;
						sprintf(disp_2,"%X",pres_alt);
					}
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=107)&&(mx<=199)) && ((my>=10)&&(my<=60))) 
			{
				b_pm_r=0;
				b_pm_g=70;
				b_pm_b=180;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=107)&&(mx<=199)) && ((my>=10)&&(my<=60))) 
			{
				b_pm_r=20;
				b_pm_g=20;
				b_pm_b=20;
				printf("+/-\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && mod_key==0 && and_key==0 && or_key==0 && xor_key==0 && rsh_key==0 && lsh_key==0 && ncr_key==0 && npr_key==0 && eql_key==0 && grt_key==0 && lss_key==0 && neq_key==0 && leq_key==0 && geq_key==0)
				{
					pres=pres*(-1);
					if(decnum_key==1)
					{
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						sprintf(disp_1,"%X",pres);
					}
					if(binnum_key==1)
					{
						binaryString=intToBinaryString(pres);
						sprintf(disp_1,"%s",binaryString);
					}

				}
				else
				{
					pres_alt=pres_alt*(-1);
					if(decnum_key==1)
					{
						sprintf(disp_2,"%d",pres_alt);
					}
					if(octnum_key==1)
					{
						sprintf(disp_2,"%o",pres_alt);
					}
					if(hexnum_key==1)
					{
						sprintf(disp_2,"%X",pres_alt);
					}
					if(binnum_key==1)
					{
						binaryString=intToBinaryString(pres_alt);
						sprintf(disp_2,"%s",binaryString);
					}
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=204)&&(mx<=296)) && ((my>=10)&&(my<=60))) 
			{
				b_0_r=23;
				b_0_g=171;
				b_0_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=204)&&(mx<=296)) && ((my>=10)&&(my<=60))) 
			{
				b_0_r=20;
				b_0_g=20;
				b_0_b=20;
				printf("0\n");
				if(isResult==1)
				{
					pres=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && mod_key==0 && and_key==0 && or_key==0 && xor_key==0 && rsh_key==0 && lsh_key==0 && ncr_key==0 && npr_key==0 && eql_key==0 && grt_key==0 && lss_key==0 && neq_key==0 && leq_key==0 && geq_key==0)
				{
					if(decnum_key==1)
					{
						pres=pres*10+0;
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						pres=pres*8+0;
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						pres=pres*16+0;
						sprintf(disp_1,"%X",pres);
					}
					if(binnum_key==1)
					{
						pres=pres*2+0;
						binaryString=intToBinaryString(pres);
						sprintf(disp_1,"%s",binaryString);
					}
				}
				else
				{
					if(decnum_key==1)
					{
						pres_alt=pres_alt*10+0;
						sprintf(disp_2,"%d",pres_alt);
					}
					if(octnum_key==1)
					{
						pres_alt=pres_alt*8+0;
						sprintf(disp_2,"%o",pres_alt);
					}
					if(hexnum_key==1)
					{
						pres_alt=pres_alt*16+0;
						sprintf(disp_2,"%X",pres_alt);
					}
					if(binnum_key==1)
					{
						pres_alt=pres_alt*2+0;
						binaryString=intToBinaryString(pres_alt);
						sprintf(disp_2,"%s",binaryString);
					}
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=301)&&(mx<=393)) && ((my>=10)&&(my<=60))) 
			{
				b_mod_r=200;
				b_mod_g=45;
				b_mod_b=70;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=301)&&(mx<=393)) && ((my>=10)&&(my<=60))) 
			{
				isResult=0;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_and_r=20,b_and_g=20,b_and_b=20;
				b_or_r=20,b_or_g=20,b_or_b=20;
				b_xor_r=20,b_xor_g=20,b_xor_b=20;
				b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
				b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
				b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
				b_npr_r=20,b_npr_g=20,b_npr_b=20;
				b_eq_r=20,b_eq_g=20,b_eq_b=20;
				b_grt_r=20,b_grt_g=20,b_grt_b=20;
				b_lss_r=20,b_lss_g=20,b_lss_b=20;
				b_neq_r=20,b_neq_g=20,b_neq_b=20;
				b_leq_r=20,b_leq_g=20,b_leq_b=20;
				b_req_r=20,b_req_g=20,b_req_b=20;
				mod_key=1;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				and_key=0;
				or_key=0;
				xor_key=0;
				rsh_key=0;
				lsh_key=0;
				ncr_key=0;
				npr_key=0;
				eql_key=0;
				grt_key=0;
				lss_key=0;
				neq_key=0;
				leq_key=0;
				geq_key=0;

			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=398)&&(mx<=490)) && ((my>=10)&&(my<=60))) 
			{
				b_eql_r=0;
				b_eql_g=180;
				b_eql_b=180;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=398)&&(mx<=490)) && ((my>=10)&&(my<=60))) 
			{
				b_eql_r=20;
				b_eql_g=20;
				b_eql_b=20;
				printf("=\n");
				if(plus_key==1)
				{
					pres=pres+pres_alt;
					if(decnum_key==1)
					{
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						sprintf(disp_1,"%X",pres);
					}
					if(binnum_key==1)
					{
						binaryString=intToBinaryString(pres);
						sprintf(disp_1,"%s",binaryString);
					}
					pres_alt=0;
					plus_key=0;
					
				}
				if(minus_key==1)
				{
					pres=pres-pres_alt;
					if(decnum_key==1)
					{
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						sprintf(disp_1,"%X",pres);
					}
					if(binnum_key==1)
					{
						binaryString=intToBinaryString(pres);
						sprintf(disp_1,"%s",binaryString);
					}
					pres_alt=0;
					minus_key=0;
				}
				if(multiplication_key==1)
				{
					pres=pres*pres_alt;
					if(decnum_key==1)
					{
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						sprintf(disp_1,"%X",pres);
					}
					if(binnum_key==1)
					{
						binaryString=intToBinaryString(pres);
						sprintf(disp_1,"%s",binaryString);
					}
					pres_alt=0;
					multiplication_key=0;
				}
				if(divition_key==1)
				{
					if(pres_alt!=0)
					{
						pres=pres/pres_alt;
						if(decnum_key==1)
						{
							sprintf(disp_1,"%d",pres);
						}
						if(octnum_key==1)
						{
							sprintf(disp_1,"%o",pres);
						}
						if(hexnum_key==1)
						{
							sprintf(disp_1,"%X",pres);
						}
						if(binnum_key==1)
						{
							binaryString=intToBinaryString(pres);
							sprintf(disp_1,"%s",binaryString);
						}
					}
					else
					{
						sprintf(disp_1,"%s","Math Error!!");
						pres=0;
					}
					pres_alt=0;
					divition_key=0;
				}
				if(mod_key==1)
				{
					pres=pres%pres_alt;
					if(decnum_key==1)
					{
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						sprintf(disp_1,"%X",pres);
					}
					if(binnum_key==1)
					{
						binaryString=intToBinaryString(pres);
						sprintf(disp_1,"%s",binaryString);
					}
					pres_alt=0;
					mod_key=0;
					
				}
				if(and_key==1)
				{
					pres=pres&pres_alt;
					if(decnum_key==1)
					{
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						sprintf(disp_1,"%X",pres);
					}
					if(binnum_key==1)
					{
						binaryString=intToBinaryString(pres);
						sprintf(disp_1,"%s",binaryString);
					}
					pres_alt=0;
					and_key=0;
					
				}
				if(or_key==1)
				{
					pres=pres|pres_alt;
					if(decnum_key==1)
					{
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						sprintf(disp_1,"%X",pres);
					}
					if(binnum_key==1)
					{
						binaryString=intToBinaryString(pres);
						sprintf(disp_1,"%s",binaryString);
					}
					pres_alt=0;
					or_key=0;
					
				}
				if(xor_key==1)
				{
					pres=pres^pres_alt;
					if(decnum_key==1)
					{
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						sprintf(disp_1,"%X",pres);
					}
					if(binnum_key==1)
					{
						binaryString=intToBinaryString(pres);
						sprintf(disp_1,"%s",binaryString);
					}
					pres_alt=0;
					xor_key=0;
				}
				if(rsh_key==1)
				{
					pres=pres>>pres_alt;
					if(decnum_key==1)
					{
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						sprintf(disp_1,"%X",pres);
					}
					if(binnum_key==1)
					{
						binaryString=intToBinaryString(pres);
						sprintf(disp_1,"%s",binaryString);
					}
					pres_alt=0;
					rsh_key=0;
					
				}
				if(lsh_key==1)
				{
					pres=pres<<pres_alt;
					if(decnum_key==1)
					{
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						sprintf(disp_1,"%X",pres);
					}
					if(binnum_key==1)
					{
						binaryString=intToBinaryString(pres);
						sprintf(disp_1,"%s",binaryString);
					}
					pres_alt=0;
					lsh_key=0;
					
				}
				// if(ncr_key==1)
				// {
					
				// 	if(decnum_key==1 && )
				// 	{
				// 		sprintf(disp_1,"%lld",lpres);
				// 	}
				// 	lpres=0;
				// 	pres_alt=0;
				// 	ncr_key=0;
					
				// }
				// if(npr_key==1)
				// {
				// 	lpres=nPr(pres,pres_alt);
				// 	if(decnum_key==1)
				// 	{
				// 		sprintf(disp_1,"%lld",lpres);
				// 	}
				// 	lpres=0;
				// 	pres_alt=0;
				// 	ncr_key=0;
					
				// }
				if(eql_key==1)
				{
					if(pres==pres_alt)
					{
						sprintf(disp_1,"%s","TRUE");
					}
					else
					{
						sprintf(disp_1,"%s","FALSE");
					}
					pres=0;
					pres_alt=0;
					eql_key=0;
					
				}
				if(grt_key==1)
				{
					if(pres>pres_alt)
					{
						sprintf(disp_1,"%s","TRUE");
					}
					else
					{
						sprintf(disp_1,"%s","FALSE");
					}
					pres=0;
					pres_alt=0;
					grt_key=0;
					
				}
				if(lss_key==1)
				{
					if(pres<pres_alt)
					{
						sprintf(disp_1,"%s","TRUE");
					}
					else
					{
						sprintf(disp_1,"%s","FALSE");
					}
					pres=0;
					pres_alt=0;
					lss_key=0;
					
				}
				if(neq_key==1)
				{
					if(pres!=pres_alt)
					{
						sprintf(disp_1,"%s","TRUE");
					}
					else
					{
						sprintf(disp_1,"%s","FALSE");
					}
					pres=0;
					pres_alt=0;
					neq_key=0;
					
				}
				if(leq_key==1)
				{
					if(pres<=pres_alt)
					{
						sprintf(disp_1,"%s","TRUE");
					}
					else
					{
						sprintf(disp_1,"%s","FALSE");
					}
					pres=0;
					pres_alt=0;
					leq_key=0;
					
				}
				if(geq_key==1)
				{
					if(pres>=pres_alt)
					{
						sprintf(disp_1,"%s","TRUE");
					}
					else
					{
						sprintf(disp_1,"%s","FALSE");
					}
					pres=0;
					pres_alt=0;
					geq_key=0;
					
				}
				b_mod_r=20,b_mod_g=20,b_mod_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_and_r=20,b_and_g=20,b_and_b=20;
				b_or_r=20,b_or_g=20,b_or_b=20;
				b_xor_r=20,b_xor_g=20,b_xor_b=20;
				b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
				b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
				b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
				b_npr_r=20,b_npr_g=20,b_npr_b=20;
				b_eq_r=20,b_eq_g=20,b_eq_b=20;
				b_grt_r=20,b_grt_g=20,b_grt_b=20;
				b_lss_r=20,b_lss_g=20,b_lss_b=20;
				b_neq_r=20,b_neq_g=20,b_neq_b=20;
				b_leq_r=20,b_leq_g=20,b_leq_b=20;
				b_req_r=20,b_req_g=20,b_req_b=20;
				sprintf(disp_2,"%d",pres_alt);
				
				isResult=1;
			}

			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=102)) && ((my>=65)&&(my<=115))) 
			{
				b_E_r=0;
				b_E_g=150;
				b_E_b=150;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=102)) && ((my>=65)&&(my<=115))) 
			{
				b_E_r=20;
				b_E_g=20;
				b_E_b=20;
				printf("E\n");
				if(isResult==1 && hexnum_key==1)
				{
					pres=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					if(hexnum_key==1)
					{
						pres=pres*16+14;
						sprintf(disp_1,"%X",pres);
					}
				}
				else
				{
					if(hexnum_key==1)
					{
						pres_alt=pres_alt*16+14;
						sprintf(disp_2,"%X",pres_alt);
					}
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=107)&&(mx<=199)) && ((my>=65)&&(my<=115))) 
			{
				b_1_r=23;
				b_1_g=171;
				b_1_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=107)&&(mx<=199)) && ((my>=65)&&(my<=115))) 
			{
				b_1_r=20;
				b_1_g=20;
				b_1_b=20;
				printf("1\n");
				if(isResult==1)
				{
					pres=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && mod_key==0 && and_key==0 && or_key==0 && xor_key==0 && rsh_key==0 && lsh_key==0 && ncr_key==0 && npr_key==0 && eql_key==0 && grt_key==0 && lss_key==0 && neq_key==0 && leq_key==0 && geq_key==0)
				{
					if(decnum_key==1)
					{
						pres=pres*10+1;
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						pres=pres*8+1;
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						pres=pres*16+1;
						sprintf(disp_1,"%X",pres);
					}
					if(binnum_key==1)
					{
						pres=pres*2+1;
						binaryString=intToBinaryString(pres);
						sprintf(disp_1,"%s",binaryString);
					}
				}
				else
				{
					if(decnum_key==1)
					{
						pres_alt=pres_alt*10+1;
						sprintf(disp_2,"%d",pres_alt);
					}
					if(octnum_key==1)
					{
						pres_alt=pres_alt*8+1;
						sprintf(disp_2,"%o",pres_alt);
					}
					if(hexnum_key==1)
					{
						pres_alt=pres_alt*16+1;
						sprintf(disp_2,"%X",pres_alt);
					}
					if(binnum_key==1)
					{
						pres_alt=pres_alt*2+1;
						binaryString=intToBinaryString(pres_alt);
						sprintf(disp_2,"%s",binaryString);
					}
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=204)&&(mx<=296)) && ((my>=65)&&(my<=115))) 
			{
				b_2_r=23;
				b_2_g=171;
				b_2_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=204)&&(mx<=296)) && ((my>=65)&&(my<=115))) 
			{
				b_2_r=20;
				b_2_g=20;
				b_2_b=20;
				printf("2\n");
				if(isResult==1 && (decnum_key==1 || octnum_key==1 || hexnum_key==1))
				{
					pres=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && mod_key==0 && and_key==0 && or_key==0 && xor_key==0 && rsh_key==0 && lsh_key==0 && ncr_key==0 && npr_key==0 && eql_key==0 && grt_key==0 && lss_key==0 && neq_key==0 && leq_key==0 && geq_key==0)
				{
					if(decnum_key==1)
					{
						pres=pres*10+2;
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						pres=pres*8+2;
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						pres=pres*16+2;
						sprintf(disp_1,"%X",pres);
					}
				}
				else
				{
					if(decnum_key==1)
					{
						pres_alt=pres_alt*10+0;
						sprintf(disp_2,"%d",pres_alt);
					}
					if(octnum_key==1)
					{
						pres_alt=pres_alt*8+0;
						sprintf(disp_2,"%o",pres_alt);
					}
					if(hexnum_key==1)
					{
						pres_alt=pres_alt*16+0;
						sprintf(disp_2,"%X",pres_alt);
					}
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=301)&&(mx<=393)) && ((my>=65)&&(my<=115))) 
			{
				b_3_r=23;
				b_3_g=171;
				b_3_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=301)&&(mx<=393)) && ((my>=65)&&(my<=115))) 
			{
				b_3_r=20;
				b_3_g=20;
				b_3_b=20;
				printf("3\n");
				if(isResult==1 && (decnum_key==1 || octnum_key==1 || hexnum_key==1))
				{
					pres=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && mod_key==0 && and_key==0 && or_key==0 && xor_key==0 && rsh_key==0 && lsh_key==0 && ncr_key==0 && npr_key==0 && eql_key==0 && grt_key==0 && lss_key==0 && neq_key==0 && leq_key==0 && geq_key==0)
				{
					if(decnum_key==1)
					{
						pres=pres*10+3;
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						pres=pres*8+3;
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						pres=pres*16+3;
						sprintf(disp_1,"%X",pres);
					}
					
				}
				else
				{
					if(decnum_key==1)
					{
						pres_alt=pres_alt*10+3;
						sprintf(disp_2,"%d",pres_alt);
					}
					if(octnum_key==1)
					{
						pres_alt=pres_alt*8+3;
						sprintf(disp_2,"%o",pres_alt);
					}
					if(hexnum_key==1)
					{
						pres_alt=pres_alt*16+3;
						sprintf(disp_2,"%X",pres_alt);
					}
					
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=398)&&(mx<=490)) && ((my>=65)&&(my<=115))) 
			{
				b_pls_r=200;
				b_pls_g=45;
				b_pls_b=70;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=398)&&(mx<=490)) && ((my>=65)&&(my<=115))) 
			{
				printf("+\n");
				isResult=0;
				b_mod_r=20,b_mod_g=20,b_mod_b=20;
				//b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_and_r=20,b_and_g=20,b_and_b=20;
				b_or_r=20,b_or_g=20,b_or_b=20;
				b_xor_r=20,b_xor_g=20,b_xor_b=20;
				b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
				b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
				b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
				b_npr_r=20,b_npr_g=20,b_npr_b=20;
				b_eq_r=20,b_eq_g=20,b_eq_b=20;
				b_grt_r=20,b_grt_g=20,b_grt_b=20;
				b_lss_r=20,b_lss_g=20,b_lss_b=20;
				b_neq_r=20,b_neq_g=20,b_neq_b=20;
				b_leq_r=20,b_leq_g=20,b_leq_b=20;
				b_req_r=20,b_req_g=20,b_req_b=20;
				printf("%\n");
				mod_key=0;
				plus_key=1;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				and_key=0;
				or_key=0;
				xor_key=0;
				rsh_key=0;
				lsh_key=0;
				ncr_key=0;
				npr_key=0;
				eql_key=0;
				grt_key=0;
				lss_key=0;
				neq_key=0;
				leq_key=0;
				geq_key=0;
			}

			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=102)) && ((my>=120)&&(my<=170))) 
			{
				b_D_r=0;
				b_D_g=150;
				b_D_b=150;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=102)) && ((my>=120)&&(my<=170))) 
			{
				b_D_r=20;
				b_D_g=20;
				b_D_b=20;
				printf("D\n");
				if(isResult==1 && hexnum_key==1)
				{
					pres=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && mod_key==0 && and_key==0 && or_key==0 && xor_key==0 && rsh_key==0 && lsh_key==0 && ncr_key==0 && npr_key==0 && eql_key==0 && grt_key==0 && lss_key==0 && neq_key==0 && leq_key==0 && geq_key==0)
				{
					if(hexnum_key==1)
					{
						pres=pres*16+13;
						sprintf(disp_1,"%X",pres);
					}
				}
				else
				{
					if(hexnum_key==1)
					{
						pres_alt=pres_alt*16+13;
						sprintf(disp_2,"%X",pres_alt);
					}
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=107)&&(mx<=199)) && ((my>=120)&&(my<=170))) 
			{
				b_4_r=23;
				b_4_g=171;
				b_4_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=107)&&(mx<=199)) && ((my>=120)&&(my<=170))) 
			{
				b_4_r=20;
				b_4_g=20;
				b_4_b=20;
				printf("4\n");
				if(isResult==1 && (decnum_key==1 || octnum_key==1 || hexnum_key==1))
				{
					pres=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && mod_key==0 && and_key==0 && or_key==0 && xor_key==0 && rsh_key==0 && lsh_key==0 && ncr_key==0 && npr_key==0 && eql_key==0 && grt_key==0 && lss_key==0 && neq_key==0 && leq_key==0 && geq_key==0)
				{
					if(decnum_key==1)
					{
						pres=pres*10+4;
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						pres=pres*8+4;
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						pres=pres*16+4;
						sprintf(disp_1,"%X",pres);
					}
					
				}
				else
				{
					if(decnum_key==1)
					{
						pres_alt=pres_alt*10+4;
						sprintf(disp_2,"%d",pres_alt);
					}
					if(octnum_key==1)
					{
						pres_alt=pres_alt*8+4;
						sprintf(disp_2,"%o",pres_alt);
					}
					if(hexnum_key==1)
					{
						pres_alt=pres_alt*16+4;
						sprintf(disp_2,"%X",pres_alt);
					}
					
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=204)&&(mx<=296)) && ((my>=120)&&(my<=170))) 
			{
				b_5_r=23;
				b_5_g=171;
				b_5_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=204)&&(mx<=296)) && ((my>=120)&&(my<=170))) 
			{
				b_5_r=20;
				b_5_g=20;
				b_5_b=20;
				printf("5\n");
				if(isResult==1 && (decnum_key==1 || octnum_key==1 || hexnum_key==1))
				{
					pres=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && mod_key==0 && and_key==0 && or_key==0 && xor_key==0 && rsh_key==0 && lsh_key==0 && ncr_key==0 && npr_key==0 && eql_key==0 && grt_key==0 && lss_key==0 && neq_key==0 && leq_key==0 && geq_key==0)
				{
					if(decnum_key==1)
					{
						pres=pres*10+5;
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						pres=pres*8+5;
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						pres=pres*16+5;
						sprintf(disp_1,"%X",pres);
					}
					
				}
				else
				{
					if(decnum_key==1)
					{
						pres_alt=pres_alt*10+5;
						sprintf(disp_2,"%d",pres_alt);
					}
					if(octnum_key==1)
					{
						pres_alt=pres_alt*8+5;
						sprintf(disp_2,"%o",pres_alt);
					}
					if(hexnum_key==1)
					{
						pres_alt=pres_alt*16+5;
						sprintf(disp_2,"%X",pres_alt);
					}
					
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=301)&&(mx<=393)) && ((my>=120)&&(my<=170))) 
			{
				b_6_r=23;
				b_6_g=171;
				b_6_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=301)&&(mx<=393)) && ((my>=120)&&(my<=170))) 
			{
				b_6_r=20;
				b_6_g=20;
				b_6_b=20;
				printf("6\n");
				if(isResult==1 && (decnum_key==1 || octnum_key==1 || hexnum_key==1))
				{
					pres=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && mod_key==0 && and_key==0 && or_key==0 && xor_key==0 && rsh_key==0 && lsh_key==0 && ncr_key==0 && npr_key==0 && eql_key==0 && grt_key==0 && lss_key==0 && neq_key==0 && leq_key==0 && geq_key==0)
				{
					if(decnum_key==1)
					{
						pres=pres*10+6;
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						pres=pres*8+6;
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						pres=pres*16+6;
						sprintf(disp_1,"%X",pres);
					}
					
				}
				else
				{
					if(decnum_key==1)
					{
						pres_alt=pres_alt*10+6;
						sprintf(disp_2,"%d",pres_alt);
					}
					if(octnum_key==1)
					{
						pres_alt=pres_alt*8+6;
						sprintf(disp_2,"%o",pres_alt);
					}
					if(hexnum_key==1)
					{
						pres_alt=pres_alt*16+6;
						sprintf(disp_2,"%X",pres_alt);
					}
					
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=398)&&(mx<=490)) && ((my>=120)&&(my<=170))) 
			{
				b_min_r=200;
				b_min_g=45;
				b_min_b=70;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=398)&&(mx<=490)) && ((my>=120)&&(my<=170))) 
			{
				printf("-\n");
				isResult=0;
				b_mod_r=20,b_mod_g=20,b_mod_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				//b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_and_r=20,b_and_g=20,b_and_b=20;
				b_or_r=20,b_or_g=20,b_or_b=20;
				b_xor_r=20,b_xor_g=20,b_xor_b=20;
				b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
				b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
				b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
				b_npr_r=20,b_npr_g=20,b_npr_b=20;
				b_eq_r=20,b_eq_g=20,b_eq_b=20;
				b_grt_r=20,b_grt_g=20,b_grt_b=20;
				b_lss_r=20,b_lss_g=20,b_lss_b=20;
				b_neq_r=20,b_neq_g=20,b_neq_b=20;
				b_leq_r=20,b_leq_g=20,b_leq_b=20;
				b_req_r=20,b_req_g=20,b_req_b=20;
				printf("%\n");
				mod_key=0;
				plus_key=0;
				minus_key=1;
				multiplication_key=0;
				divition_key=0;
				and_key=0;
				or_key=0;
				xor_key=0;
				rsh_key=0;
				lsh_key=0;
				ncr_key=0;
				npr_key=0;
				eql_key=0;
				grt_key=0;
				lss_key=0;
				neq_key=0;
				leq_key=0;
				geq_key=0;
			}

			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=102)) && ((my>=175)&&(my<=225))) 
			{
				b_C_r=0;
				b_C_g=150;
				b_C_b=150;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=102)) && ((my>=175)&&(my<=225))) 
			{
				b_C_r=20;
				b_C_g=20;
				b_C_b=20;
				printf("C\n");
				if(isResult==1 && hexnum_key==1)
				{
					pres=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && mod_key==0 && and_key==0 && or_key==0 && xor_key==0 && rsh_key==0 && lsh_key==0 && ncr_key==0 && npr_key==0 && eql_key==0 && grt_key==0 && lss_key==0 && neq_key==0 && leq_key==0 && geq_key==0)
				{
					if(hexnum_key==1)
					{
						pres=pres*16+12;
						sprintf(disp_1,"%X",pres);
					}
				}
				else
				{
					if(hexnum_key==1)
					{
						pres_alt=pres_alt*16+12;
						sprintf(disp_2,"%X",pres_alt);
					}
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=107)&&(mx<=199)) && ((my>=175)&&(my<=225))) 
			{
				b_7_r=23;
				b_7_g=171;
				b_7_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=107)&&(mx<=199)) && ((my>=175)&&(my<=225))) 
			{
				b_7_r=20;
				b_7_g=20;
				b_7_b=20;
				printf("7\n");
				if(isResult==1 && (decnum_key==1 || octnum_key==1 || hexnum_key==1))
				{
					pres=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && mod_key==0 && and_key==0 && or_key==0 && xor_key==0 && rsh_key==0 && lsh_key==0 && ncr_key==0 && npr_key==0 && eql_key==0 && grt_key==0 && lss_key==0 && neq_key==0 && leq_key==0 && geq_key==0)
				{
					if(decnum_key==1)
					{
						pres=pres*10+7;
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						pres=pres*8+7;
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						pres=pres*16+7;
						sprintf(disp_1,"%X",pres);
					}
					
				}
				else
				{
					if(decnum_key==1)
					{
						pres_alt=pres_alt*10+7;
						sprintf(disp_2,"%d",pres_alt);
					}
					if(octnum_key==1)
					{
						pres_alt=pres_alt*8+7;
						sprintf(disp_2,"%o",pres_alt);
					}
					if(hexnum_key==1)
					{
						pres_alt=pres_alt*16+7;
						sprintf(disp_2,"%X",pres_alt);
					}
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=204)&&(mx<=296)) && ((my>=175)&&(my<=225))) 
			{
				b_8_r=23;
				b_8_g=171;
				b_8_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=204)&&(mx<=296)) && ((my>=175)&&(my<=225))) 
			{
				b_8_r=20;
				b_8_g=20;
				b_8_b=20;
				printf("8\n");
				if(isResult==1 && (decnum_key==1 || hexnum_key==1))
				{
					pres=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && mod_key==0 && and_key==0 && or_key==0 && xor_key==0 && rsh_key==0 && lsh_key==0 && ncr_key==0 && npr_key==0 && eql_key==0 && grt_key==0 && lss_key==0 && neq_key==0 && leq_key==0 && geq_key==0)
				{
					if(decnum_key==1)
					{
						pres=pres*10+8;
						sprintf(disp_1,"%d",pres);
					}
					if(hexnum_key==1)
					{
						pres=pres*16+8;
						sprintf(disp_1,"%X",pres);
					}
				}
				else
				{
					if(decnum_key==1)
					{
						pres_alt=pres_alt*10+8;
						sprintf(disp_2,"%d",pres_alt);
					}
					if(hexnum_key==1)
					{
						pres_alt=pres_alt*16+8;
						sprintf(disp_2,"%X",pres_alt);
					}
					
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=301)&&(mx<=393)) && ((my>=175)&&(my<=225))) 
			{
				b_9_r=23;
				b_9_g=171;
				b_9_b=33;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=301)&&(mx<=393)) && ((my>=175)&&(my<=225))) 
			{
				b_9_r=20;
				b_9_g=20;
				b_9_b=20;
				printf("9\n");
				if(isResult==1 && (decnum_key==1 || hexnum_key==1))
				{
					pres=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && mod_key==0 && and_key==0 && or_key==0 && xor_key==0 && rsh_key==0 && lsh_key==0 && ncr_key==0 && npr_key==0 && eql_key==0 && grt_key==0 && lss_key==0 && neq_key==0 && leq_key==0 && geq_key==0)
				{
					if(decnum_key==1)
					{
						pres=pres*10+9;
						sprintf(disp_1,"%d",pres);
					}
					if(hexnum_key==1)
					{
						pres=pres*16+9;
						sprintf(disp_1,"%X",pres);
					}
				}
				else
				{
					if(decnum_key==1)
					{
						pres_alt=pres_alt*10+9;
						sprintf(disp_2,"%d",pres_alt);
					}
					if(hexnum_key==1)
					{
						pres_alt=pres_alt*16+9;
						sprintf(disp_2,"%X",pres_alt);
					}
					
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=398)&&(mx<=490)) && ((my>=175)&&(my<=225))) 
			{
				b_mul_r=200;
				b_mul_g=45;
				b_mul_b=70;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=398)&&(mx<=490)) && ((my>=175)&&(my<=225))) 
			{
				printf("x\n");
				isResult=0;
				b_mod_r=20,b_mod_g=20,b_mod_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				//b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_and_r=20,b_and_g=20,b_and_b=20;
				b_or_r=20,b_or_g=20,b_or_b=20;
				b_xor_r=20,b_xor_g=20,b_xor_b=20;
				b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
				b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
				b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
				b_npr_r=20,b_npr_g=20,b_npr_b=20;
				b_eq_r=20,b_eq_g=20,b_eq_b=20;
				b_grt_r=20,b_grt_g=20,b_grt_b=20;
				b_lss_r=20,b_lss_g=20,b_lss_b=20;
				b_neq_r=20,b_neq_g=20,b_neq_b=20;
				b_leq_r=20,b_leq_g=20,b_leq_b=20;
				b_req_r=20,b_req_g=20,b_req_b=20;
				printf("%\n");
				mod_key=0;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				and_key=0;
				or_key=0;
				xor_key=0;
				rsh_key=0;
				lsh_key=0;
				ncr_key=0;
				npr_key=0;
				eql_key=0;
				grt_key=0;
				lss_key=0;
				neq_key=0;
				leq_key=0;
				geq_key=0;
			}

			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=102)) && ((my>=230)&&(my<=280))) 
			{
				b_B_r=0;
				b_B_g=150;
				b_B_b=50;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=102)) && ((my>=230)&&(my<=280))) 
			{
				b_B_r=20;
				b_B_g=20;
				b_B_b=20;
				printf("B\n");
				if(isResult==1 && hexnum_key==1)
				{
					pres=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && mod_key==0 && and_key==0 && or_key==0 && xor_key==0 && rsh_key==0 && lsh_key==0 && ncr_key==0 && npr_key==0 && eql_key==0 && grt_key==0 && lss_key==0 && neq_key==0 && leq_key==0 && geq_key==0)
				{
					if(hexnum_key==1)
					{
						pres=pres*16+11;
						sprintf(disp_1,"%X",pres);
					}
				}
				else
				{
					if(hexnum_key==1)
					{
						pres_alt=pres_alt*16+11;
						sprintf(disp_2,"%X",pres_alt);
					}
				}
			}
			
			 if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=204)&&(mx<=296)) && ((my>=230)&&(my<=280))) 
			 {
			 	b_ncr_r=40;
			 	b_ncr_g=40;
			 	b_ncr_b=40;
			 }
			 if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=204)&&(mx<=296)) && ((my>=230)&&(my<=280))) 
			 {
			 	
					if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && mod_key==0 && and_key==0 && or_key==0 && xor_key==0 && rsh_key==0 && lsh_key==0 && ncr_key==0 && npr_key==0 && eql_key==0 && grt_key==0 && lss_key==0 && neq_key==0 && leq_key==0 && geq_key==0)
					{
						b_ncr_r=20;
			 			b_ncr_g=20;
			 			b_ncr_b=20;
						if(decnum_key==1)
						{
							if((pres%4==0 && pres%100!=0)||(pres%400==0))
							{
								sprintf(disp_1,"%s","LEAP YEAR!!");
							}
							else
							{
								sprintf(disp_1,"%s","NOT A LEAP YEAR!!");
							}
							pres=0;
							isResult=1;
						}
					}
			}
			// if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=301)&&(mx<=393)) && ((my>=230)&&(my<=280))) 
			// {
			// 	b_npr_r=40;
			// 	b_npr_g=40;
			// 	b_npr_b=40;
			// }
			// if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=301)&&(mx<=393)) && ((my>=230)&&(my<=280))) 
			// {
			// 	// printf("nPr\n");
			// 	// printf("%d %d\n",mx,my);
			// 	// b_mod_r=20,b_mod_g=20,b_mod_b=20;
			// 	// b_pls_r=20,b_pls_g=20,b_pls_b=20;
			// 	// b_min_r=20,b_min_g=20,b_min_b=20;
			// 	// b_mul_r=20,b_mul_g=20,b_mul_b=20;
			// 	// b_div_r=20,b_div_g=20,b_div_b=20;
			// 	// b_and_r=20,b_and_g=20,b_and_b=20;
			// 	// b_or_r=20,b_or_g=20,b_or_b=20;
			// 	// b_xor_r=20,b_xor_g=20,b_xor_b=20;
			// 	// b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
			// 	// b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
			// 	// b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
			// 	// //b_npr_r=20,b_npr_g=20,b_npr_b=20;
			// 	// b_eq_r=20,b_eq_g=20,b_eq_b=20;
			// 	// b_grt_r=20,b_grt_g=20,b_grt_b=20;
			// 	// b_lss_r=20,b_lss_g=20,b_lss_b=20;
			// 	// b_neq_r=20,b_neq_g=20,b_neq_b=20;
			// 	// b_leq_r=20,b_leq_g=20,b_leq_b=20;
			// 	// b_req_r=20,b_req_g=20,b_req_b=20;
			// 	// mod_key=0;
			// 	// plus_key=0;
			// 	// minus_key=0;
			// 	// multiplication_key=0;
			// 	// divition_key=0;
			// 	// and_key=0;
			// 	// or_key=0;
			// 	// xor_key=0;
			// 	// rsh_key=0;
			// 	// lsh_key=0;
			// 	// ncr_key=0;
			// 	// npr_key=1;
			// 	// eql_key=0;
			// 	// grt_key=0;
			// 	// lss_key=0;
			// 	// neq_key=0;
			// 	// leq_key=0;
			// 	// geq_key=0;

			// }
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=398)&&(mx<=490)) && ((my>=230)&&(my<=280))) 
			{
				b_div_r=200;
				b_div_g=45;
				b_div_b=70;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=398)&&(mx<=490)) && ((my>=230)&&(my<=280))) 
			{
				printf("/\n");
				isResult=0;
				b_mod_r=20,b_mod_g=20,b_mod_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				//b_div_r=20,b_div_g=20,b_div_b=20;
				b_and_r=20,b_and_g=20,b_and_b=20;
				b_or_r=20,b_or_g=20,b_or_b=20;
				b_xor_r=20,b_xor_g=20,b_xor_b=20;
				b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
				b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
				b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
				b_npr_r=20,b_npr_g=20,b_npr_b=20;
				b_eq_r=20,b_eq_g=20,b_eq_b=20;
				b_grt_r=20,b_grt_g=20,b_grt_b=20;
				b_lss_r=20,b_lss_g=20,b_lss_b=20;
				b_neq_r=20,b_neq_g=20,b_neq_b=20;
				b_leq_r=20,b_leq_g=20,b_leq_b=20;
				b_req_r=20,b_req_g=20,b_req_b=20;
				printf("%\n");
				mod_key=0;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=1;
				and_key=0;
				or_key=0;
				xor_key=0;
				rsh_key=0;
				lsh_key=0;
				ncr_key=0;
				npr_key=0;
				eql_key=0;
				grt_key=0;
				lss_key=0;
				neq_key=0;
				leq_key=0;
				geq_key=0;

			}

			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=102)) && ((my>=285)&&(my<=335))) 
			{
				b_A_r=0;
				b_A_g=150;
				b_A_b=50;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=102)) && ((my>=285)&&(my<=335))) 
			{
				b_A_r=20;
				b_A_g=20;
				b_A_b=20;
				printf("A\n");
				if(isResult==1 && hexnum_key==1)
				{
					pres=0;
					isResult=0;
				}
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && power_key==0)
				{
					if(hexnum_key==1)
					{
						pres=pres*16+10;
						sprintf(disp_1,"%X",pres);
					}
				}
				else
				{
					if(hexnum_key==1)
					{
						pres_alt=pres_alt*16+10;
						sprintf(disp_2,"%X",pres_alt);
					}
				}
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=107)&&(mx<=199)) && ((my>=285)&&(my<=335))) 
			{
				b_and_r=0;
				b_and_g=150;
				b_and_b=150;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=107)&&(mx<=199)) && ((my>=285)&&(my<=335))) 
			{
				printf("AND\n");
				isResult=0;
				b_mod_r=20,b_mod_g=20,b_mod_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				//b_and_r=20,b_and_g=20,b_and_b=20;
				b_or_r=20,b_or_g=20,b_or_b=20;
				b_xor_r=20,b_xor_g=20,b_xor_b=20;
				b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
				b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
				b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
				b_npr_r=20,b_npr_g=20,b_npr_b=20;
				b_eq_r=20,b_eq_g=20,b_eq_b=20;
				b_grt_r=20,b_grt_g=20,b_grt_b=20;
				b_lss_r=20,b_lss_g=20,b_lss_b=20;
				b_neq_r=20,b_neq_g=20,b_neq_b=20;
				b_leq_r=20,b_leq_g=20,b_leq_b=20;
				b_req_r=20,b_req_g=20,b_req_b=20;
				mod_key=0;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				and_key=1;
				or_key=0;
				xor_key=0;
				rsh_key=0;
				lsh_key=0;
				ncr_key=0;
				npr_key=0;
				eql_key=0;
				grt_key=0;
				lss_key=0;
				neq_key=0;
				leq_key=0;
				geq_key=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=204)&&(mx<=296)) && ((my>=285)&&(my<=335))) 
			{
				b_or_r=0;
				b_or_g=150;
				b_or_b=150;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=204)&&(mx<=296)) && ((my>=285)&&(my<=335))) 
			{
				printf("OR\n");
				isResult=0;
				b_mod_r=20,b_mod_g=20,b_mod_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_and_r=20,b_and_g=20,b_and_b=20;
				//b_or_r=20,b_or_g=20,b_or_b=20;
				b_xor_r=20,b_xor_g=20,b_xor_b=20;
				b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
				b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
				b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
				b_npr_r=20,b_npr_g=20,b_npr_b=20;
				b_eq_r=20,b_eq_g=20,b_eq_b=20;
				b_grt_r=20,b_grt_g=20,b_grt_b=20;
				b_lss_r=20,b_lss_g=20,b_lss_b=20;
				b_neq_r=20,b_neq_g=20,b_neq_b=20;
				b_leq_r=20,b_leq_g=20,b_leq_b=20;
				b_req_r=20,b_req_g=20,b_req_b=20;
				printf("%\n");
				mod_key=0;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				and_key=0;
				or_key=1;
				xor_key=0;
				rsh_key=0;
				lsh_key=0;
				ncr_key=0;
				npr_key=0;
				eql_key=0;
				grt_key=0;
				lss_key=0;
				neq_key=0;
				leq_key=0;
				geq_key=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=301)&&(mx<=393)) && ((my>=285)&&(my<=335))) 
			{
				b_not_r=0;
				b_not_g=150;
				b_not_b=150;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=301)&&(mx<=393)) && ((my>=285)&&(my<=335))) 
			{
				b_not_r=20;
				b_not_g=20;
				b_not_b=20;
				printf("NOT\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && mod_key==0 && and_key==0 && or_key==0 && xor_key==0 && rsh_key==0 && lsh_key==0 && ncr_key==0 && npr_key==0 && eql_key==0 && grt_key==0 && lss_key==0 && neq_key==0 && leq_key==0 && geq_key==0)
				{
					pres = ~ pres;
					if(decnum_key==1)
					{
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						sprintf(disp_1,"%X",pres);
					}
					if(binnum_key==1)
					{
						binaryString=intToBinaryString(pres);
						sprintf(disp_1,"%s",binaryString);
					}
				}
				isResult=1;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=398)&&(mx<=490)) && ((my>=285)&&(my<=335))) 
			{
				b_xor_r=0;
				b_xor_g=150;
				b_xor_b=150;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=398)&&(mx<=490)) && ((my>=285)&&(my<=335))) 
			{
				printf("XOR\n");
				isResult=0;
				b_mod_r=20,b_mod_g=20,b_mod_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_and_r=20,b_and_g=20,b_and_b=20;
				b_or_r=20,b_or_g=20,b_or_b=20;
				//b_xor_r=20,b_xor_g=20,b_xor_b=20;
				b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
				b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
				b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
				b_npr_r=20,b_npr_g=20,b_npr_b=20;
				b_eq_r=20,b_eq_g=20,b_eq_b=20;
				b_grt_r=20,b_grt_g=20,b_grt_b=20;
				b_lss_r=20,b_lss_g=20,b_lss_b=20;
				b_neq_r=20,b_neq_g=20,b_neq_b=20;
				b_leq_r=20,b_leq_g=20,b_leq_b=20;
				b_req_r=20,b_req_g=20,b_req_b=20;
				printf("%\n");
				mod_key=0;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				and_key=0;
				or_key=0;
				xor_key=1;
				rsh_key=0;
				lsh_key=0;
				ncr_key=0;
				npr_key=0;
				eql_key=0;
				grt_key=0;
				lss_key=0;
				neq_key=0;
				leq_key=0;
				geq_key=0;
			}

			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=102)) && ((my>=340)&&(my<=390))) 
			{
				b_lsh_r=255;
				b_lsh_g=75;
				b_lsh_b=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=102)) && ((my>=340)&&(my<=390))) 
			{
				printf("<<\n");
				isResult=0;
				b_mod_r=20,b_mod_g=20,b_mod_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_and_r=20,b_and_g=20,b_and_b=20;
				b_or_r=20,b_or_g=20,b_or_b=20;
				b_xor_r=20,b_xor_g=20,b_xor_b=20;
				b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
				//b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
				b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
				b_npr_r=20,b_npr_g=20,b_npr_b=20;
				b_eq_r=20,b_eq_g=20,b_eq_b=20;
				b_grt_r=20,b_grt_g=20,b_grt_b=20;
				b_lss_r=20,b_lss_g=20,b_lss_b=20;
				b_neq_r=20,b_neq_g=20,b_neq_b=20;
				b_leq_r=20,b_leq_g=20,b_leq_b=20;
				b_req_r=20,b_req_g=20,b_req_b=20;
				mod_key=0;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				and_key=0;
				or_key=0;
				xor_key=0;
				rsh_key=0;
				lsh_key=1;
				ncr_key=0;
				npr_key=0;
				eql_key=0;
				grt_key=0;
				lss_key=0;
				neq_key=0;
				leq_key=0;
				geq_key=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=107)&&(mx<=199)) && ((my>=340)&&(my<=390))) 
			{
				b_lss_r=70;
				b_lss_g=15;
				b_lss_b=155;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=107)&&(mx<=199)) && ((my>=340)&&(my<=390))) 
			{
				printf("<\n");
				isResult=0;
				b_mod_r=20,b_mod_g=20,b_mod_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_and_r=20,b_and_g=20,b_and_b=20;
				b_or_r=20,b_or_g=20,b_or_b=20;
				b_xor_r=20,b_xor_g=20,b_xor_b=20;
				b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
				b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
				b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
				b_npr_r=20,b_npr_g=20,b_npr_b=20;
				b_eq_r=20,b_eq_g=20,b_eq_b=20;
				b_grt_r=20,b_grt_g=20,b_grt_b=20;
				//b_lss_r=20,b_lss_g=20,b_lss_b=20;
				b_neq_r=20,b_neq_g=20,b_neq_b=20;
				b_leq_r=20,b_leq_g=20,b_leq_b=20;
				b_req_r=20,b_req_g=20,b_req_b=20;
				mod_key=0;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				and_key=0;
				or_key=0;
				xor_key=0;
				rsh_key=0;
				lsh_key=0;
				ncr_key=0;
				npr_key=0;
				eql_key=0;
				grt_key=0;
				lss_key=1;
				neq_key=0;
				leq_key=0;
				geq_key=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=204)&&(mx<=296)) && ((my>=340)&&(my<=390))) 
			{
				b_eq_r=70;
				b_eq_g=15;
				b_eq_b=155;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=204)&&(mx<=296)) && ((my>=340)&&(my<=390))) 
			{
				printf("==\n");
				isResult=0;
				b_mod_r=20,b_mod_g=20,b_mod_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_and_r=20,b_and_g=20,b_and_b=20;
				b_or_r=20,b_or_g=20,b_or_b=20;
				b_xor_r=20,b_xor_g=20,b_xor_b=20;
				b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
				b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
				b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
				b_npr_r=20,b_npr_g=20,b_npr_b=20;
				//b_eq_r=20,b_eq_g=20,b_eq_b=20;
				b_grt_r=20,b_grt_g=20,b_grt_b=20;
				b_lss_r=20,b_lss_g=20,b_lss_b=20;
				b_neq_r=20,b_neq_g=20,b_neq_b=20;
				b_leq_r=20,b_leq_g=20,b_leq_b=20;
				b_req_r=20,b_req_g=20,b_req_b=20;
				mod_key=0;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				and_key=0;
				or_key=0;
				xor_key=0;
				rsh_key=0;
				lsh_key=0;
				ncr_key=0;
				npr_key=0;
				eql_key=1;
				grt_key=0;
				lss_key=0;
				neq_key=0;
				leq_key=0;
				geq_key=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=301)&&(mx<=393)) && ((my>=340)&&(my<=390))) 
			{
				b_grt_r=70;
				b_grt_g=15;
				b_grt_b=155;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=301)&&(mx<=393)) && ((my>=340)&&(my<=390))) 
			{
				printf(">\n");
				isResult=0;
				b_mod_r=20,b_mod_g=20,b_mod_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_and_r=20,b_and_g=20,b_and_b=20;
				b_or_r=20,b_or_g=20,b_or_b=20;
				b_xor_r=20,b_xor_g=20,b_xor_b=20;
				b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
				b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
				b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
				b_npr_r=20,b_npr_g=20,b_npr_b=20;
				b_eq_r=20,b_eq_g=20,b_eq_b=20;
				//b_grt_r=20,b_grt_g=20,b_grt_b=20;
				b_lss_r=20,b_lss_g=20,b_lss_b=20;
				b_neq_r=20,b_neq_g=20,b_neq_b=20;
				b_leq_r=20,b_leq_g=20,b_leq_b=20;
				b_req_r=20,b_req_g=20,b_req_b=20;
				mod_key=0;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				and_key=0;
				or_key=0;
				xor_key=0;
				rsh_key=0;
				lsh_key=0;
				ncr_key=0;
				npr_key=0;
				eql_key=0;
				grt_key=1;
				lss_key=0;
				neq_key=0;
				leq_key=0;
				geq_key=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=398)&&(mx<=490)) && ((my>=340)&&(my<=390))) 
			{
				b_rsh_r=255;
				b_rsh_g=75;
				b_rsh_b=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=398)&&(mx<=490)) && ((my>=340)&&(my<=390))) 
			{
				printf(">>\n");
				isResult=0;
				b_mod_r=20,b_mod_g=20,b_mod_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_and_r=20,b_and_g=20,b_and_b=20;
				b_or_r=20,b_or_g=20,b_or_b=20;
				b_xor_r=20,b_xor_g=20,b_xor_b=20;
				//b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
				b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
				b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
				b_npr_r=20,b_npr_g=20,b_npr_b=20;
				b_eq_r=20,b_eq_g=20,b_eq_b=20;
				b_grt_r=20,b_grt_g=20,b_grt_b=20;
				b_lss_r=20,b_lss_g=20,b_lss_b=20;
				b_neq_r=20,b_neq_g=20,b_neq_b=20;
				b_leq_r=20,b_leq_g=20,b_leq_b=20;
				b_req_r=20,b_req_g=20,b_req_b=20;
				mod_key=0;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				and_key=0;
				or_key=0;
				xor_key=0;
				rsh_key=1;
				lsh_key=0;
				ncr_key=0;
				npr_key=0;
				eql_key=0;
				grt_key=0;
				lss_key=0;
				neq_key=0;
				leq_key=0;
				geq_key=0;
			}

			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=10)&&(mx<=102)) && ((my>=395)&&(my<=445))) 
			{
				b_neq_r=70;
				b_neq_g=15;
				b_neq_b=155;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=102)) && ((my>=395)&&(my<=445))) 
			{
				printf("!=\n");
				isResult=0;
				b_mod_r=20,b_mod_g=20,b_mod_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_and_r=20,b_and_g=20,b_and_b=20;
				b_or_r=20,b_or_g=20,b_or_b=20;
				b_xor_r=20,b_xor_g=20,b_xor_b=20;
				b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
				b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
				b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
				b_npr_r=20,b_npr_g=20,b_npr_b=20;
				b_eq_r=20,b_eq_g=20,b_eq_b=20;
				b_grt_r=20,b_grt_g=20,b_grt_b=20;
				b_lss_r=20,b_lss_g=20,b_lss_b=20;
				//b_neq_r=20,b_neq_g=20,b_neq_b=20;
				b_leq_r=20,b_leq_g=20,b_leq_b=20;
				b_req_r=20,b_req_g=20,b_req_b=20;
				mod_key=0;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				and_key=0;
				or_key=0;
				xor_key=0;
				rsh_key=0;
				lsh_key=0;
				ncr_key=0;
				npr_key=0;
				eql_key=0;
				grt_key=0;
				lss_key=0;
				neq_key=1;
				leq_key=0;
				geq_key=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=107)&&(mx<=199)) && ((my>=395)&&(my<=445))) 
			{
				b_req_r=70;
				b_req_g=15;
				b_req_b=155;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=107)&&(mx<=199)) && ((my>=395)&&(my<=445))) 
			{
				printf(">=\n");
				isResult=0;
				b_mod_r=20,b_mod_g=20,b_mod_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_and_r=20,b_and_g=20,b_and_b=20;
				b_or_r=20,b_or_g=20,b_or_b=20;
				b_xor_r=20,b_xor_g=20,b_xor_b=20;
				b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
				b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
				b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
				b_npr_r=20,b_npr_g=20,b_npr_b=20;
				b_eq_r=20,b_eq_g=20,b_eq_b=20;
				b_grt_r=20,b_grt_g=20,b_grt_b=20;
				b_lss_r=20,b_lss_g=20,b_lss_b=20;
				b_neq_r=20,b_neq_g=20,b_neq_b=20;
				b_leq_r=20,b_leq_g=20,b_leq_b=20;
				//b_req_r=20,b_req_g=20,b_req_b=20;
				mod_key=0;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				and_key=0;
				or_key=0;
				xor_key=0;
				rsh_key=0;
				lsh_key=0;
				ncr_key=0;
				npr_key=0;
				eql_key=0;
				grt_key=0;
				lss_key=0;
				neq_key=0;
				leq_key=0;
				geq_key=1;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=204)&&(mx<=296)) && ((my>=395)&&(my<=445))) 
			{
				b_leq_r=70;
				b_leq_g=15;
				b_leq_b=155;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=204)&&(mx<=296)) && ((my>=395)&&(my<=445))) 
			{
				printf("<=\n");
				isResult=0;
				b_mod_r=20,b_mod_g=20,b_mod_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_and_r=20,b_and_g=20,b_and_b=20;
				b_or_r=20,b_or_g=20,b_or_b=20;
				b_xor_r=20,b_xor_g=20,b_xor_b=20;
				b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
				b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
				b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
				b_npr_r=20,b_npr_g=20,b_npr_b=20;
				b_eq_r=20,b_eq_g=20,b_eq_b=20;
				b_grt_r=20,b_grt_g=20,b_grt_b=20;
				b_lss_r=20,b_lss_g=20,b_lss_b=20;
				b_neq_r=20,b_neq_g=20,b_neq_b=20;
				//b_leq_r=20,b_leq_g=20,b_leq_b=20;
				b_req_r=20,b_req_g=20,b_req_b=20;
				mod_key=0;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				and_key=0;
				or_key=0;
				xor_key=0;
				rsh_key=0;
				lsh_key=0;
				ncr_key=0;
				npr_key=0;
				eql_key=0;
				grt_key=0;
				lss_key=0;
				neq_key=0;
				leq_key=1;
				geq_key=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=301)&&(mx<=393)) && ((my>=395)&&(my<=445))) 
			{
				b_clr_r=40;
				b_clr_g=40;
				b_clr_b=40;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=301)&&(mx<=393)) && ((my>=395)&&(my<=445))) 
			{
				b_clr_r=20;
				b_clr_g=20;
				b_clr_b=20;
				printf("CLR\n");
				isResult=0;
				b_bin_r=20,b_bin_g=20,b_bin_b=20;
				b_oct_r=20,b_oct_g=20,b_oct_b=20;
				b_hex_r=20,b_hex_g=20,b_hex_b=20;
				plus_key=0;
				minus_key=0;
				multiplication_key=0;
				divition_key=0;
				and_key=0;
				or_key=0;
				xor_key=0;
				rsh_key=0;
				lsh_key=0;
				ncr_key=0;
				npr_key=0;
				eql_key=0;
				grt_key=0;
				lss_key=0;
				neq_key=0;
				leq_key=0;
				geq_key=0;
				pres=0;
				pres_alt=0;
				
				octnum_key=0;
				binnum_key=0;
				hexnum_key=0;
				decnum_key=1;
				b_mod_r=20,b_mod_g=20,b_mod_b=20;
				b_pls_r=20,b_pls_g=20,b_pls_b=20;
				b_min_r=20,b_min_g=20,b_min_b=20;
				b_mul_r=20,b_mul_g=20,b_mul_b=20;
				b_div_r=20,b_div_g=20,b_div_b=20;
				b_and_r=20,b_and_g=20,b_and_b=20;
				b_or_r=20,b_or_g=20,b_or_b=20;
				b_xor_r=20,b_xor_g=20,b_xor_b=20;
				b_rsh_r=20,b_rsh_g=20,b_rsh_b=20;
				b_lsh_r=20,b_lsh_g=20,b_lsh_b=20;
				b_ncr_r=20,b_ncr_g=20,b_ncr_b=20;
				b_npr_r=20,b_npr_g=20,b_npr_b=20;
				b_eq_r=20,b_eq_g=20,b_eq_b=20;
				b_grt_r=20,b_grt_g=20,b_grt_b=20;
				b_lss_r=20,b_lss_g=20,b_lss_b=20;
				b_neq_r=20,b_neq_g=20,b_neq_b=20;
				b_leq_r=20,b_leq_g=20,b_leq_b=20;
				b_req_r=20,b_req_g=20,b_req_b=20;
				sprintf(disp_1,"%d",pres);
				sprintf(disp_2,"%d",pres_alt);
			}
			
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx>=398)&&(mx<=490)) && ((my>=395)&&(my<=445))) 
			{
				b_del_r=40;
				b_del_g=40;
				b_del_b=40;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=398)&&(mx<=490)) && ((my>=395)&&(my<=445))) 
			{
				b_del_r=20;
				b_del_g=20;
				b_del_b=20;
				printf("DEL\n");
				if(plus_key==0 && minus_key==0 && multiplication_key==0 && divition_key==0 && mod_key==0 && and_key==0 && or_key==0 && xor_key==0 && rsh_key==0 && lsh_key==0 && ncr_key==0 && npr_key==0 && eql_key==0 && grt_key==0 && lss_key==0 && neq_key==0 && leq_key==0 && geq_key==0)
				{
					if(decnum_key==1)
					{
						pres=pres/10;
						sprintf(disp_1,"%d",pres);
					}
					if(octnum_key==1)
					{
						pres=pres/8;
						sprintf(disp_1,"%o",pres);
					}
					if(hexnum_key==1)
					{
						pres=pres/16;
						sprintf(disp_1,"%X",pres);
					}
					if(binnum_key==1)
					{
						pres=pres/2;
						binaryString=intToBinaryString(pres);
						sprintf(disp_1,"%s",binaryString);
					}
				}
				else
				{
					if(decnum_key==1)
					{
						pres_alt=pres_alt/10;
						sprintf(disp_2,"%d",pres_alt);
					}
					if(octnum_key==1)
					{
						pres_alt=pres_alt/8;
						sprintf(disp_2,"%o",pres_alt);
					}
					if(hexnum_key==1)
					{
						pres_alt=pres_alt/16;
						sprintf(disp_2,"%X",pres_alt);
					}
					if(binnum_key==1)
					{
						pres_alt=pres_alt/2;
						binaryString=intToBinaryString(pres_alt);
						sprintf(disp_2,"%s",binaryString);
					}
				}
				
			}
			
		}

		if(mode==4)
		{
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=80)) && ((my>=608)&&(my<=678))) 
			{
				mode=0;
				eqmode=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && eqmode!=1 && ((mx>=10)&&(mx<=80)) && ((my>=508)&&(my<=578))) 
			{
				eqmode=1;
				eq_a1=0;
				eq_b1=0;
				eq_c1=0;
				eq_a2=0;
				eq_b2=0;
				eq_c2=0;
				a1=0;
				b1=0;
				c1=0;
				a2=0;
				b2=0;
				c2=0;
				x=0;
				y=0;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && eqmode!=2 && ((mx>=420)&&(mx<=490)) && ((my>=508)&&(my<=578))) 
			{
				eqmode=2;
				eq_a=0;
				eq_b=0;
				eq_c=0;
				a=0;
				b=0;
				c=0;
				x1=0;
				x1=0;
			}
			if(eqmode==1)
			{
				if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=90)&&(mx<=410)) && ((my>=413)&&(my<=463))) 
				{
					eq_a=1;
					eq_b=0;
					eq_c=0;
				}
				if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=90)&&(mx<=410)) && ((my>=338)&&(my<=388))) 
				{
					eq_a=0;
					eq_b=1;
					eq_c=0;
				}
				if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=90)&&(mx<=410)) && ((my>=263)&&(my<=313))) 
				{
					eq_a=0;
					eq_b=0;
					eq_c=1;
				}
				if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=125)&&(mx<=375)) && ((my>=188)&&(my<=238)))
				{
					if(a==0)
					{
						sprintf(d_x1,"%s","No Solution");
						sprintf(d_x2,"%s","No Solution");
					}
					else if(b*b-4*a*c < 0)
					{
						sprintf(d_x1,"%s","No Real Solution");
						sprintf(d_x2,"%s","No Real Solution");
					}
					else
					{
						x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
						x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
						sprintf(d_x1,"%lf",x1);
						sprintf(d_x2,"%lf",x2);
					}
					eq_a=0;
					eq_b=0;
					eq_c=0;
				}
				if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=440)&&(mx<=490)) && ((my>=10)&&(my<=60)))
				{
					x1=0;
					x2=0;
					a=0;
					b=0;
					c=0;
					a_count=0;
					b_count=0;
					c_count=0;
					a_dk=0;
					b_dk=0;
					c_dk=0;
					sprintf(d_x1,"%lf",x1);
					sprintf(d_x2,"%lf",x2);
					sprintf(d_a,"%lf",a);
					sprintf(d_b,"%lf",b);
					sprintf(d_c,"%lf",c);
					eq_a=0;
					eq_b=0;
					eq_c=0;
				}
			}
			if(eqmode==2)
			{
				if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=0)&&(mx<=250)) && ((my>=413)&&(my<=463))) 
				{
					eq_a1=1;
					eq_b1=0;
					eq_c1=0;
					eq_a2=0;
					eq_b2=0;
					eq_c2=0;
				}
				if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>250)&&(mx<=500)) && ((my>=413)&&(my<=463))) 
				{
					eq_a1=0;
					eq_b1=0;
					eq_c1=0;
					eq_a2=1;
					eq_b2=0;
					eq_c2=0;
				}
				if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=0)&&(mx<=250)) && ((my>=338)&&(my<=388))) 
				{
					eq_a1=0;
					eq_b1=1;
					eq_c1=0;
					eq_a2=0;
					eq_b2=0;
					eq_c2=0;
				}
				if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=250)&&(mx<=500)) && ((my>=338)&&(my<=388))) 
				{
					eq_a1=0;
					eq_b1=0;
					eq_c1=0;
					eq_a2=0;
					eq_b2=1;
					eq_c2=0;
				}
				if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=0)&&(mx<=250)) && ((my>=263)&&(my<=313))) 
				{
					eq_a1=0;
					eq_b1=0;
					eq_c1=1;
					eq_a2=0;
					eq_b2=0;
					eq_c2=0;
				}
				if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=250)&&(mx<=500)) && ((my>=263)&&(my<=313))) 
				{
					eq_a1=0;
					eq_b1=0;
					eq_c1=0;
					eq_a2=0;
					eq_b2=0;
					eq_c2=1;
				}
				if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=125)&&(mx<=375)) && ((my>=188)&&(my<=238)))
				{
					if((a1*b2-a2*b1==0)&&(b1*c2-b2*c1==0)&&(c1*a2-c2*a1==0))
					{
						sprintf(d_x,"%s","Infinite Solutions");
						sprintf(d_y,"%s","Infinite Solutions");
					}
					else if((a1*b2-a2*b1==0)&&(b1*c2-b2*c1!=0)&&(c1*a2-c2*a1!=0))
					{
						sprintf(d_x,"%s","No Solution");
						sprintf(d_y,"%s","No Solution");
					}
					else 
					{
						x = (b1*c2-b2*c1)/(a1*b2-b1*a2);
						y = (c1*a2-c2*a1)/(a1*b2-b1*a2);
						sprintf(d_x,"%lf",x);
						sprintf(d_y,"%lf",y);
					}
					eq_a1=0;
					eq_b1=0;
					eq_c1=0;
					eq_a2=0;
					eq_b2=0;
					eq_c2=0;
				}
				if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=440)&&(mx<=490)) && ((my>=10)&&(my<=60)))
				{
					x=0;
					y=0;
					a1=0;
					b1=0;
					c1=0;
					a2=0;
					b2=0;
					c2=0;
					a1_count=0;
					b1_count=0;
					c1_count=0;
					a2_count=0;
					b2_count=0;
					c2_count=0;
					a1_dk=0;
					b1_dk=0;
					c1_dk=0;
					a2_dk=0;
					b2_dk=0;
					c2_dk=0;
					sprintf(d_x,"%lf",x);
					sprintf(d_y,"%lf",y);
					sprintf(d_a1,"%lf",a1);
					sprintf(d_b1,"%lf",b1);
					sprintf(d_c1,"%lf",c1);
					sprintf(d_a2,"%lf",a2);
					sprintf(d_b2,"%lf",b2);
					sprintf(d_c2,"%lf",c2);
					eq_a1=0;
					eq_b1=0;
					eq_c1=0;
					eq_a2=0;
					eq_b2=0;
					eq_c2=0;
				}
			}

		}

		if(mode==5)
		{
			if (button == GLUT_LEFT_BUTTON && state == GLUT_UP && ((mx>=10)&&(mx<=80)) && ((my>=608)&&(my<=678))) 
			{
				mode=0;
			}
		}
		
	}


	void iKeyboard(unsigned char key) 
	{
		if(mode==4)
		{
			if(key == '0')
			{
				if(eqmode==1)
				{
					if(eq_a==1)
					{
						if(a_dk==1)
						{
							a_count++;
							a=a+pow(0.1,(a_count))*0;
						}
						else
						{
							a=a*10+0;
						}
						sprintf(d_a,"%lf",a);
					}
					if(eq_b==1)
					{
						if(b_dk==1)
						{
							b_count++;
							b=b+pow(0.1,(b_count))*0;
						}
						else
						{
							b=b*10+0;
						}
						sprintf(d_b,"%lf",b);
					}
					if(eq_c==1)
					{
						if(c_dk==1)
						{
							c_count++;
							c=c+pow(0.1,(c_count))*0;
						}
						else
						{
							c=c*10+0;
						}
						sprintf(d_c,"%lf",c);
					}
				}
				if(eqmode==2)
				{
					if(eq_a1==1)
					{
						if(a1_dk==1)
						{
							a1_count++;
							a1=a1+pow(0.1,(a1_count))*0;
						}
						else
						{
							a1=a1*10+0;
						}
						sprintf(d_a1,"%lf",a1);
					}
					if(eq_a2==1)
					{
						if(a2_dk==1)
						{
							a2_count++;
							a2=a2+pow(0.1,(a2_count))*0;
						}
						else
						{
							a2=a2*10+0;
						}
						sprintf(d_a2,"%lf",a2);
					}
					if(eq_b1==1)
					{
						if(b1_dk==1)
						{
							b1_count++;
							b1=b1+pow(0.1,(b1_count))*0;
						}
						else
						{
							b1=b1*10+0;
						}
						sprintf(d_b1,"%lf",b1);
					}
					if(eq_b2==1)
					{
						if(b2_dk==1)
						{
							b2_count++;
							b2=b2+pow(0.1,(b2_count))*0;
						}
						else
						{
							b2=b2*10+0;
						}
						sprintf(d_b2,"%lf",b2);
					}
					if(eq_c1==1)
					{
						if(c1_dk==1)
						{
							c1_count++;
							c1=c1+pow(0.1,(c1_count))*0;
						}
						else
						{
							c1=c1*10+0;
						}
						sprintf(d_c1,"%lf",c1);
					}
					if(eq_c2==1)
					{
						if(c2_dk==1)
						{
							c2_count++;
							c2=c2+pow(0.1,(c2_count))*0;
						}
						else
						{
							c2=c2*10+0;
						}
						sprintf(d_c2,"%lf",c2);
					}
				}
			}
			if(key == '1')
			{
				if(eqmode==1)
				{
					if(eq_a==1)
					{
						if(a_dk==1)
						{
							a_count++;
							a=a+pow(0.1,(a_count))*1;
						}
						else
						{
							a=a*10+1;
						}
						sprintf(d_a,"%lf",a);
					}
					if(eq_b==1)
					{
						if(b_dk==1)
						{
							b_count++;
							b=b+pow(0.1,(b_count))*1;
						}
						else
						{
							b=b*10+1;
						}
						sprintf(d_b,"%lf",b);
					}
					if(eq_c==1)
					{
						if(c_dk==1)
						{
							c_count++;
							c=c+pow(0.1,(c_count))*1;
						}
						else
						{
							c=c*10+1;
						}
						sprintf(d_c,"%lf",c);
					}
				}
				if(eqmode==2)
				{
					if(eq_a1==1)
					{
						if(a1_dk==1)
						{
							a1_count++;
							a1=a1+pow(0.1,(a1_count))*1;
						}
						else
						{
							a1=a1*10+1;
						}
						sprintf(d_a1,"%lf",a1);
					}
					if(eq_a2==1)
					{
						if(a2_dk==1)
						{
							a2_count++;
							a2=a2+pow(0.1,(a2_count))*1;
						}
						else
						{
							a2=a2*10+1;
						}
						sprintf(d_a2,"%lf",a2);
					}
					if(eq_b1==1)
					{
						if(b1_dk==1)
						{
							b1_count++;
							b1=b1+pow(0.1,(b1_count))*1;
						}
						else
						{
							b1=b1*10+1;
						}
						sprintf(d_b1,"%lf",b1);
					}
					if(eq_b2==1)
					{
						if(b2_dk==1)
						{
							b2_count++;
							b2=b2+pow(0.1,(b2_count))*1;
						}
						else
						{
							b2=b2*10+1;
						}
						sprintf(d_b2,"%lf",b2);
					}
					if(eq_c1==1)
					{
						if(c1_dk==1)
						{
							c1_count++;
							c1=c1+pow(0.1,(c1_count))*1;
						}
						else
						{
							c1=c1*10+1;
						}
						sprintf(d_c1,"%lf",c1);
					}
					if(eq_c2==1)
					{
						if(c2_dk==1)
						{
							c2_count++;
							c2=c2+pow(0.1,(c2_count))*1;
						}
						else
						{
							c2=c2*10+1;
						}
						sprintf(d_c2,"%lf",c2);
					}
				}
			}
			if(key == '2')
			{
				if(eqmode==1)
				{
					if(eq_a==1)
					{
						if(a_dk==1)
						{
							a_count++;
							a=a+pow(0.1,(a_count))*2;
						}
						else
						{
							a=a*10+2;
						}
						sprintf(d_a,"%lf",a);
					}
					if(eq_b==1)
					{
						if(b_dk==1)
						{
							b_count++;
							b=b+pow(0.1,(b_count))*2;
						}
						else
						{
							b=b*10+2;
						}
						sprintf(d_b,"%lf",b);
					}
					if(eq_c==1)
					{
						if(c_dk==1)
						{
							c_count++;
							c=c+pow(0.1,(c_count))*2;
						}
						else
						{
							c=c*10+2;
						}
						sprintf(d_c,"%lf",c);
					}
				}
				if(eqmode==2)
				{
					if(eq_a1==1)
					{
						if(a1_dk==1)
						{
							a1_count++;
							a1=a1+pow(0.1,(a1_count))*2;
						}
						else
						{
							a1=a1*10+2;
						}
						sprintf(d_a1,"%lf",a1);
					}
					if(eq_a2==1)
					{
						if(a2_dk==1)
						{
							a2_count++;
							a2=a2+pow(0.1,(a2_count))*2;
						}
						else
						{
							a2=a2*10+2;
						}
						sprintf(d_a2,"%lf",a2);
					}
					if(eq_b1==1)
					{
						if(b1_dk==1)
						{
							b1_count++;
							b1=b1+pow(0.1,(b1_count))*2;
						}
						else
						{
							b1=b1*10+2;
						}
						sprintf(d_b1,"%lf",b1);
					}
					if(eq_b2==1)
					{
						if(b2_dk==1)
						{
							b2_count++;
							b2=b2+pow(0.1,(b2_count))*2;
						}
						else
						{
							b2=b2*10+2;
						}
						sprintf(d_b2,"%lf",b2);
					}
					if(eq_c1==1)
					{
						if(c1_dk==1)
						{
							c1_count++;
							c1=c1+pow(0.1,(c1_count))*2;
						}
						else
						{
							c1=c1*10+2;
						}
						sprintf(d_c1,"%lf",c1);
					}
					if(eq_c2==1)
					{
						if(c2_dk==1)
						{
							c2_count++;
							c2=c2+pow(0.1,(c2_count))*2;
						}
						else
						{
							c2=c2*10+2;
						}
						sprintf(d_c2,"%lf",c2);
					}
				}
			}
			if(key == '3')
			{
				if(eqmode==1)
				{
					if(eq_a==1)
					{
						if(a_dk==1)
						{
							a_count++;
							a=a+pow(0.1,(a_count))*3;
						}
						else
						{
							a=a*10+3;
						}
						sprintf(d_a,"%lf",a);
					}
					if(eq_b==1)
					{
						if(b_dk==1)
						{
							b_count++;
							b=b+pow(0.1,(b_count))*3;
						}
						else
						{
							b=b*10+3;
						}
						sprintf(d_b,"%lf",b);
					}
					if(eq_c==1)
					{
						if(c_dk==1)
						{
							c_count++;
							c=c+pow(0.1,(c_count))*3;
						}
						else
						{
							c=c*10+3;
						}
						sprintf(d_c,"%lf",c);
					}
				}
				if(eqmode==2)
				{
					if(eq_a1==1)
					{
						if(a1_dk==1)
						{
							a1_count++;
							a1=a1+pow(0.1,(a1_count))*3;
						}
						else
						{
							a1=a1*10+3;
						}
						sprintf(d_a1,"%lf",a1);
					}
					if(eq_a2==1)
					{
						if(a2_dk==1)
						{
							a2_count++;
							a2=a2+pow(0.1,(a2_count))*3;
						}
						else
						{
							a2=a2*10+3;
						}
						sprintf(d_a2,"%lf",a2);
					}
					if(eq_b1==1)
					{
						if(b1_dk==1)
						{
							b1_count++;
							b1=b1+pow(0.1,(b1_count))*3;
						}
						else
						{
							b1=b1*10+3;
						}
						sprintf(d_b1,"%lf",b1);
					}
					if(eq_b2==1)
					{
						if(b2_dk==1)
						{
							b2_count++;
							b2=b2+pow(0.1,(b2_count))*3;
						}
						else
						{
							b2=b2*10+3;
						}
						sprintf(d_b2,"%lf",b2);
					}
					if(eq_c1==1)
					{
						if(c1_dk==1)
						{
							c1_count++;
							c1=c1+pow(0.1,(c1_count))*3;
						}
						else
						{
							c1=c1*10+3;
						}
						sprintf(d_c1,"%lf",c1);
					}
					if(eq_c2==1)
					{
						if(c2_dk==1)
						{
							c2_count++;
							c2=c2+pow(0.1,(c2_count))*3;
						}
						else
						{
							c2=c2*10+3;
						}
						sprintf(d_c2,"%lf",c2);
					}
				}
			}
			if(key == '4')
			{
				if(eqmode==1)
				{
					if(eq_a==1)
					{
						if(a_dk==1)
						{
							a_count++;
							a=a+pow(0.1,(a_count))*4;
						}
						else
						{
							a=a*10+4;
						}
						sprintf(d_a,"%lf",a);
					}
					if(eq_b==1)
					{
						if(b_dk==1)
						{
							b_count++;
							b=b+pow(0.1,(b_count))*4;
						}
						else
						{
							b=b*10+4;
						}
						sprintf(d_b,"%lf",b);
					}
					if(eq_c==1)
					{
						if(c_dk==1)
						{
							c_count++;
							c=c+pow(0.1,(c_count))*4;
						}
						else
						{
							c=c*10+4;
						}
						sprintf(d_c,"%lf",c);
					}
				}
				if(eqmode==2)
				{
					if(eq_a1==1)
					{
						if(a1_dk==1)
						{
							a1_count++;
							a1=a1+pow(0.1,(a1_count))*4;
						}
						else
						{
							a1=a1*10+4;
						}
						sprintf(d_a1,"%lf",a1);
					}
					if(eq_a2==1)
					{
						if(a2_dk==1)
						{
							a2_count++;
							a2=a2+pow(0.1,(a2_count))*4;
						}
						else
						{
							a2=a2*10+4;
						}
						sprintf(d_a2,"%lf",a2);
					}
					if(eq_b1==1)
					{
						if(b1_dk==1)
						{
							b1_count++;
							b1=b1+pow(0.1,(b1_count))*4;
						}
						else
						{
							b1=b1*10+4;
						}
						sprintf(d_b1,"%lf",b1);
					}
					if(eq_b2==1)
					{
						if(b2_dk==1)
						{
							b2_count++;
							b2=b2+pow(0.1,(b2_count))*4;
						}
						else
						{
							b2=b2*10+4;
						}
						sprintf(d_b2,"%lf",b2);
					}
					if(eq_c1==1)
					{
						if(c1_dk==1)
						{
							c1_count++;
							c1=c1+pow(0.1,(c1_count))*4;
						}
						else
						{
							c1=c1*10+4;
						}
						sprintf(d_c1,"%lf",c1);
					}
					if(eq_c2==1)
					{
						if(c2_dk==1)
						{
							c2_count++;
							c2=c2+pow(0.1,(c2_count))*4;
						}
						else
						{
							c2=c2*10+4;
						}
						sprintf(d_c2,"%lf",c2);
					}
				}
			}
			if(key == '5')
			{
				if(eqmode==1)
				{
					if(eq_a==1)
					{
						if(a_dk==1)
						{
							a_count++;
							a=a+pow(0.1,(a_count))*5;
						}
						else
						{
							a=a*10+5;
						}
						sprintf(d_a,"%lf",a);
					}
					if(eq_b==1)
					{
						if(b_dk==1)
						{
							b_count++;
							b=b+pow(0.1,(b_count))*5;
						}
						else
						{
							b=b*10+5;
						}
						sprintf(d_b,"%lf",b);
					}
					if(eq_c==1)
					{
						if(c_dk==1)
						{
							c_count++;
							c=c+pow(0.1,(c_count))*5;
						}
						else
						{
							c=c*10+5;
						}
						sprintf(d_c,"%lf",c);
					}
				}
				if(eqmode==2)
				{
					if(eq_a1==1)
					{
						if(a1_dk==1)
						{
							a1_count++;
							a1=a1+pow(0.1,(a1_count))*5;
						}
						else
						{
							a1=a1*10+5;
						}
						sprintf(d_a1,"%lf",a1);
					}
					if(eq_a2==1)
					{
						if(a2_dk==1)
						{
							a2_count++;
							a2=a2+pow(0.1,(a2_count))*5;
						}
						else
						{
							a2=a2*10+5;
						}
						sprintf(d_a2,"%lf",a2);
					}
					if(eq_b1==1)
					{
						if(b1_dk==1)
						{
							b1_count++;
							b1=b1+pow(0.1,(b1_count))*5;
						}
						else
						{
							b1=b1*10+5;
						}
						sprintf(d_b1,"%lf",b1);
					}
					if(eq_b2==1)
					{
						if(b2_dk==1)
						{
							b2_count++;
							b2=b2+pow(0.1,(b2_count))*5;
						}
						else
						{
							b2=b2*10+5;
						}
						sprintf(d_b2,"%lf",b2);
					}
					if(eq_c1==1)
					{
						if(c1_dk==1)
						{
							c1_count++;
							c1=c1+pow(0.1,(c1_count))*5;
						}
						else
						{
							c1=c1*10+5;
						}
						sprintf(d_c1,"%lf",c1);
					}
					if(eq_c2==1)
					{
						if(c2_dk==1)
						{
							c2_count++;
							c2=c2+pow(0.1,(c2_count))*5;
						}
						else
						{
							c2=c2*10+5;
						}
						sprintf(d_c2,"%lf",c2);
					}
				}
			}
			if(key == '6')
			{
				if(eqmode==1)
				{
					if(eq_a==1)
					{
						if(a_dk==1)
						{
							a_count++;
							a=a+pow(0.1,(a_count))*6;
						}
						else
						{
							a=a*10+6;
						}
						sprintf(d_a,"%lf",a);
					}
					if(eq_b==1)
					{
						if(b_dk==1)
						{
							b_count++;
							b=b+pow(0.1,(b_count))*6;
						}
						else
						{
							b=b*10+6;
						}
						sprintf(d_b,"%lf",b);
					}
					if(eq_c==1)
					{
						if(c_dk==1)
						{
							c_count++;
							c=c+pow(0.1,(c_count))*6;
						}
						else
						{
							c=c*10+6;
						}
						sprintf(d_c,"%lf",c);
					}
				}
				if(eqmode==2)
				{
					if(eq_a1==1)
					{
						if(a1_dk==1)
						{
							a1_count++;
							a1=a1+pow(0.1,(a1_count))*6;
						}
						else
						{
							a1=a1*10+6;
						}
						sprintf(d_a1,"%lf",a1);
					}
					if(eq_a2==1)
					{
						if(a2_dk==1)
						{
							a2_count++;
							a2=a2+pow(0.1,(a2_count))*6;
						}
						else
						{
							a2=a2*10+6;
						}
						sprintf(d_a2,"%lf",a2);
					}
					if(eq_b1==1)
					{
						if(b1_dk==1)
						{
							b1_count++;
							b1=b1+pow(0.1,(b1_count))*6;
						}
						else
						{
							b1=b1*10+6;
						}
						sprintf(d_b1,"%lf",b1);
					}
					if(eq_b2==1)
					{
						if(b2_dk==1)
						{
							b2_count++;
							b2=b2+pow(0.1,(b2_count))*6;
						}
						else
						{
							b2=b2*10+6;
						}
						sprintf(d_b2,"%lf",b2);
					}
					if(eq_c1==1)
					{
						if(c1_dk==1)
						{
							c1_count++;
							c1=c1+pow(0.1,(c1_count))*6;
						}
						else
						{
							c1=c1*10+6;
						}
						sprintf(d_c1,"%lf",c1);
					}
					if(eq_c2==1)
					{
						if(c2_dk==1)
						{
							c2_count++;
							c2=c2+pow(0.1,(c2_count))*6;
						}
						else
						{
							c2=c2*10+6;
						}
						sprintf(d_c2,"%lf",c2);
					}
				}
			}
			if(key == '7')
			{
				if(eqmode==1)
				{
					if(eq_a==1)
					{
						if(a_dk==1)
						{
							a_count++;
							a=a+pow(0.1,(a_count))*7;
						}
						else
						{
							a=a*10+7;
						}
						sprintf(d_a,"%lf",a);
					}
					if(eq_b==1)
					{
						if(b_dk==1)
						{
							b_count++;
							b=b+pow(0.1,(b_count))*7;
						}
						else
						{
							b=b*10+7;
						}
						sprintf(d_b,"%lf",b);
					}
					if(eq_c==1)
					{
						if(c_dk==1)
						{
							c_count++;
							c=c+pow(0.1,(c_count))*7;
						}
						else
						{
							c=c*10+7;
						}
						sprintf(d_c,"%lf",c);
					}
				}
				if(eqmode==2)
				{
					if(eq_a1==1)
					{
						if(a1_dk==1)
						{
							a1_count++;
							a1=a1+pow(0.1,(a1_count))*7;
						}
						else
						{
							a1=a1*10+7;
						}
						sprintf(d_a1,"%lf",a1);
					}
					if(eq_a2==1)
					{
						if(a2_dk==1)
						{
							a2_count++;
							a2=a2+pow(0.1,(a2_count))*7;
						}
						else
						{
							a2=a2*10+7;
						}
						sprintf(d_a2,"%lf",a2);
					}
					if(eq_b1==1)
					{
						if(b1_dk==1)
						{
							b1_count++;
							b1=b1+pow(0.1,(b1_count))*7;
						}
						else
						{
							b1=b1*10+7;
						}
						sprintf(d_b1,"%lf",b1);
					}
					if(eq_b2==1)
					{
						if(b2_dk==1)
						{
							b2_count++;
							b2=b2+pow(0.1,(b2_count))*7;
						}
						else
						{
							b2=b2*10+7;
						}
						sprintf(d_b2,"%lf",b2);
					}
					if(eq_c1==1)
					{
						if(c1_dk==1)
						{
							c1_count++;
							c1=c1+pow(0.1,(c1_count))*7;
						}
						else
						{
							c1=c1*10+7;
						}
						sprintf(d_c1,"%lf",c1);
					}
					if(eq_c2==1)
					{
						if(c2_dk==1)
						{
							c2_count++;
							c2=c2+pow(0.1,(c2_count))*7;
						}
						else
						{
							c2=c2*10+7;
						}
						sprintf(d_c2,"%lf",c2);
					}
				}
			}
			if(key == '8')
			{
				if(eqmode==1)
				{
					if(eq_a==1)
					{
						if(a_dk==1)
						{
							a_count++;
							a=a+pow(0.1,(a_count))*8;
						}
						else
						{
							a=a*10+8;
						}
						sprintf(d_a,"%lf",a);
					}
					if(eq_b==1)
					{
						if(b_dk==1)
						{
							b_count++;
							b=b+pow(0.1,(b_count))*8;
						}
						else
						{
							b=b*10+8;
						}
						sprintf(d_b,"%lf",b);
					}
					if(eq_c==1)
					{
						if(c_dk==1)
						{
							c_count++;
							c=c+pow(0.1,(c_count))*8;
						}
						else
						{
							c=c*10+8;
						}
						sprintf(d_c,"%lf",c);
					}
				}
				if(eqmode==2)
				{
					if(eq_a1==1)
					{
						if(a1_dk==1)
						{
							a1_count++;
							a1=a1+pow(0.1,(a1_count))*8;
						}
						else
						{
							a1=a1*10+8;
						}
						sprintf(d_a1,"%lf",a1);
					}
					if(eq_a2==1)
					{
						if(a2_dk==1)
						{
							a2_count++;
							a2=a2+pow(0.1,(a2_count))*8;
						}
						else
						{
							a2=a2*10+8;
						}
						sprintf(d_a2,"%lf",a2);
					}
					if(eq_b1==1)
					{
						if(b1_dk==1)
						{
							b1_count++;
							b1=b1+pow(0.1,(b1_count))*8;
						}
						else
						{
							b1=b1*10+8;
						}
						sprintf(d_b1,"%lf",b1);
					}
					if(eq_b2==1)
					{
						if(b2_dk==1)
						{
							b2_count++;
							b2=b2+pow(0.1,(b2_count))*8;
						}
						else
						{
							b2=b2*10+8;
						}
						sprintf(d_b2,"%lf",b2);
					}
					if(eq_c1==1)
					{
						if(c1_dk==1)
						{
							c1_count++;
							c1=c1+pow(0.1,(c1_count))*8;
						}
						else
						{
							c1=c1*10+8;
						}
						sprintf(d_c1,"%lf",c1);
					}
					if(eq_c2==1)
					{
						if(c2_dk==1)
						{
							c2_count++;
							c2=c2+pow(0.1,(c2_count))*8;
						}
						else
						{
							c2=c2*10+8;
						}
						sprintf(d_c2,"%lf",c2);
					}
				}
			}
			if(key == '9')
			{
				if(eqmode==1)
				{
					if(eq_a==1)
					{
						if(a_dk==1)
						{
							a_count++;
							a=a+pow(0.1,(a_count))*9;
						}
						else
						{
							a=a*10+9;
						}
						sprintf(d_a,"%lf",a);
					}
					if(eq_b==1)
					{
						if(b_dk==1)
						{
							b_count++;
							b=b+pow(0.1,(b_count))*9;
						}
						else
						{
							b=b*10+9;
						}
						sprintf(d_b,"%lf",b);
					}
					if(eq_c==1)
					{
						if(c_dk==1)
						{
							c_count++;
							c=c+pow(0.1,(c_count))*9;
						}
						else
						{
							c=c*10+9;
						}
						sprintf(d_c,"%lf",c);
					}
				}
				if(eqmode==2)
				{
					if(eq_a1==1)
					{
						if(a1_dk==1)
						{
							a1_count++;
							a1=a1+pow(0.1,(a1_count))*9;
						}
						else
						{
							a1=a1*10+9;
						}
						sprintf(d_a1,"%lf",a1);
					}
					if(eq_a2==1)
					{
						if(a2_dk==1)
						{
							a2_count++;
							a2=a2+pow(0.1,(a2_count))*9;
						}
						else
						{
							a2=a2*10+9;
						}
						sprintf(d_a2,"%lf",a2);
					}
					if(eq_b1==1)
					{
						if(b1_dk==1)
						{
							b1_count++;
							b1=b1+pow(0.1,(b1_count))*9;
						}
						else
						{
							b1=b1*10+9;
						}
						sprintf(d_b1,"%lf",b1);
					}
					if(eq_b2==1)
					{
						if(b2_dk==1)
						{
							b2_count++;
							b2=b2+pow(0.1,(b2_count))*9;
						}
						else
						{
							b2=b2*10+9;
						}
						sprintf(d_b2,"%lf",b2);
					}
					if(eq_c1==1)
					{
						if(c1_dk==1)
						{
							c1_count++;
							c1=c1+pow(0.1,(c1_count))*9;
						}
						else
						{
							c1=c1*10+9;
						}
						sprintf(d_c1,"%lf",c1);
					}
					if(eq_c2==1)
					{
						if(c2_dk==1)
						{
							c2_count++;
							c2=c2+pow(0.1,(c2_count))*9;
						}
						else
						{
							c2=c2*10+9;
						}
						sprintf(d_c2,"%lf",c2);
					}
				}
			}
			if(key=='.')
			{
				if(eqmode==1)
				{
					if(eq_a==1)
					{
						a_dk=1;
					}
					if(eq_b==1)
					{
						b_dk=1;
					}
					if(eq_c==1)
					{
						c_dk=1;
					}
				}
				if(eqmode==2)
				{
					if(eq_a1==1)
					{
						a1_dk=1;
					}
					if(eq_a2==1)
					{
						a2_dk=1;
					}
					if(eq_b1==1)
					{
						b1_dk=1;
					}
					if(eq_b2==1)
					{
						b2_dk=1;
					}
					if(eq_c1==1)
					{
						c1_dk=1;
					}
					if(eq_c2==1)
					{
						c2_dk=1;
					}
				}
			}
			if(key=='-')
			{
				if(eqmode==1)
				{
					if(eq_a==1)
					{
						a=(-1)*a;
						sprintf(d_a,"%lf",a);
					}
					if(eq_b==1)
					{
						b=(-1)*b;
						sprintf(d_b,"%lf",b);
					}
					if(eq_c==1)
					{
						c=(-1)*c;
						sprintf(d_c,"%lf",c);
					}
				}
				if(eqmode==2)
				{
					if(eq_a1==1)
					{
						a1=(-1)*a1;
						sprintf(d_a1,"%lf",a1);
					}
					if(eq_a2==1)
					{
						a2=(-1)*a2;
						sprintf(d_a2,"%lf",a2);
					}
					if(eq_b1==1)
					{
						b1=(-1)*b1;
						sprintf(d_b1,"%lf",b1);
					}
					if(eq_b2==1)
					{
						b2=(-1)*b2;
						sprintf(d_b2,"%lf",b2);
					}
					if(eq_c1==1)
					{
						c1=(-1)*c1;
						sprintf(d_c1,"%lf",c1);
					}
					if(eq_c2==1)
					{
						c2=(-1)*c2;
						sprintf(d_c2,"%lf",c2);
					}
				}
			}
		}
	}

	/*
		function iSpecialKeyboard() is called whenver user hits special keys like-
		function keys, home, end, pg up, pg down, arraows etc. you have to use
		appropriate constants to detect them. A list is:
		GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
		GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
		GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
		GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
	void iSpecialKeyboard(unsigned char key) 
	{

		if (key == GLUT_KEY_END) 
		{
			exit(0);
		}
		
		
	}

	void iText()
	{
		
	}

	int main() 
	{
		iInitialize(500, 688, "iCalc");
		return 0;
	}
