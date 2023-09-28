#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pb push_back
#define fi first
#define sec second
#define pii pair<ll, ll>
#define mii map<ll, ll>

// used for condition value
int cond;

// used for 123 command
void num(vector<string> &v, int n)
{
    if (n == 0)
        return;
    if (n == 1 || n == 2 || n == 3)
    {
        for (int i = 0; i < n; i++)
        {
            if (i != 0)
            {
                v.push_back("oat_stage");
            }
            v.push_back("oat_stairs_2");
        }
        return;
    }

    int k = (int)sqrt(n);

    if (k * k != n)
    {
        int dev = n - k * k;
        for (int i = 0; i < dev; i++)
        {
            if (i != 0)
            {
                v.push_back("oat_stage");
            }
            v.push_back("oat_stairs_2");
        }
    }
    v.push_back("eshop_2");
    v.push_back("oat_stage");
    n = (int)sqrt(n);
    num(v, n);
}

// add function
void add()
{
    cout << "hall_2\nhall_2," << cond << ",hall_13_2\nhall_13_2," << cond << ",kd_2\nkd_2," << cond << ",kd_1\nkd_1," << cond << ",kd_3\nkd_3," << cond << ",";
}

// sub function
void sub()
{
    cout << "hall_5\nhall_5," << cond << ",hall_13_2\nhall_13_2," << cond << ",kd_2\nkd_2," << cond << ",kd_1\nkd_1," << cond << ",kd_3\nkd_3," << cond << ",";
}

// mul function
void mul()
{
    cout << "hall_3\nhall_3," << cond << ",hall_13_2\nhall_13_2," << cond << ",kd_2\nkd_2," << cond << ",kd_1\nkd_1," << cond << ",kd_3\nkd_3," << cond << ",";
}

// div function
void div()
{
    cout << "hall_12\nhall_12," << cond << ",hall_13_2\nhall_13_2," << cond << ",kd_2\nkd_2," << cond << ",kd_1\nkd_1," << cond << ",kd_3\nkd_3," << cond << ",";
}

// mod function
void mod()
{
    cout << "rm_1\nrm_1," << cond << ",oat_stage[1]\n";
    cond++;
    cout << "oat_stage," << cond << ",rm_1\nrm_1," << cond << ",mt_1_3\nmt_1_3," << cond << ",hall_12\nhall_12," << cond << ",hall_3\nhall_3," << cond << ",hall_13_2\nhall_13_2," << cond << ",kd_2\nkd_2," << cond << ",hall_5\nhall_5," << cond << ",kd_3\nkd_3," << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",";
}

// AND function
void AND()
{
    cout << "rm_1\nrm_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",rm_1\nrm_1," << cond << ",hall_13_1\nhall_13_1," << cond << ",lecture_hall_eq\nlecture_hall_eq_t," << cond << ",hall_13_3\nhall_13_3," << cond << ",kd_3\nkd_3," << cond << ",kd_2\nkd_2," << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond = cond + 1;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[7]\n";
    cond = cond - 2;
    cout << "lecture_hall_eq_f," << cond << ",hall_13_2\nhall_13_2," << cond << ",oat_stage[4]\noat_stage,";
    cond = cond + 4;
    cout << cond << ",kd_2\nkd_2," << cond << ",kd_3\nkd_3," << cond << ",lecture_hall_eq\nlecture_hall_eq_t," << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[4]\n";
    cond = cond - 2;
    cout << "lecture_hall_eq_f," << cond << ",hall_13_2\nhall_13_2," << cond << ",oat_stairs_2\noat_stairs_2," << cond << ",oat_stage[3]\noat_stage,";
    cond = cond + 3;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",";
}

// OR function
void OR()
{
    cout << "rm_1\nrm_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",rm_1\nrm_1," << cond << ",hall_13_1\nhall_13_1," << cond << ",lecture_hall_eq\nlecture_hall_eq_f," << cond << ",hall_13_3\nhall_13_3," << cond << ",kd_3\nkd_3," << cond << ",hall_13_2\nhall_13_2," << cond << ",kd_2\nkd_2," << cond << ",oat_stairs_2\noat_stairs_2," << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond = cond + 1;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[7]\n";
    cond = cond - 2;
    cout << "lecture_hall_eq_t," << cond << ",oat_stage[4]\noat_stage,";
    cond = cond + 4;
    cout << cond << ",kd_2\nkd_2," << cond << ",kd_3\nkd_3," << cond << ",lecture_hall_eq\nlecture_hall_eq_t," << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[4]\n";
    cond = cond - 2;
    cout << "lecture_hall_eq_f," << cond << ",oat_stage[3]\noat_stage,";
    cond = cond + 3;
    cout << cond << ",hall_13_2\nhall_13_2," << cond << ",oat_stairs_2\noat_stairs_2," << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",";
}

// xor function
void XOR()
{
    cout << "rm_1\nrm_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",rm_1\nrm_1," << cond << ",hall_13_1\nhall_13_1," << cond << ",lecture_hall_eq\nlecture_hall_eq_t,";
    cout << cond << ",kd_2\nlecture_hall_eq_f," << cond << ",hall_13_2\nhall_13_2," << cond << ",oat_stairs_2\noat_stairs_2," << cond << ",kd_2\nkd_2," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",lecture_hall_eq\nlecture_hall_eq_t," << cond << ",kd_1\nlecture_hall_eq_f," << cond << ",hall_13_2\nhall_13_2," << cond << ",oat_stairs_2\noat_stairs_2,";
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",lecture_hall_eq\nlecture_hall_eq_t," << cond << ",hall_13_2\nhall_13_2," << cond << ",hall_13_1\nhall_13_1," << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[3]\n";
    cond = cond - 1;
    cout << "lecture_hall_eq_f," << cond << ",oat_stage[2]\noat_stage,";
    cond = cond + 2;
    cout << cond << ",hall_13_2\nhall_13_2," << cond << ",oat_stairs_2\noat_stairs_2," << cond << ",hall_13_1\nhall_13_1," << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",";
}

// nand function
void NAND()
{
    cout << "rm_1\nrm_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",rm_1\nrm_1," << cond << ",hall_13_1\nhall_13_1," << cond << ",lecture_hall_eq\nlecture_hall_eq_t," << cond << ",hall_13_3\nhall_13_3," << cond << ",kd_3\nkd_3," << cond << ",kd_2\nkd_2," << cond << ",oat_stairs_2\noat_stairs_2," << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond = cond + 1;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[7]\n";
    cond = cond - 2;
    cout << "lecture_hall_eq_f," << cond << ",hall_13_2\nhall_13_2," << cond << ",oat_stage[4]\noat_stage,";
    cond = cond + 4;
    cout << cond << ",kd_2\nkd_2," << cond << ",kd_3\nkd_3," << cond << ",lecture_hall_eq\nlecture_hall_eq_t," << cond << ",oat_stairs_2\noat_stairs_2," << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[4]\n";
    cond = cond - 2;
    cout << "lecture_hall_eq_f," << cond << ",hall_13_2\nhall_13_2," << cond << ",oat_stage[3]\noat_stage,";
    cond = cond + 3;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",";
}

// NOT function
void NOT()
{
    cout << "rm_1\nrm_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",rm_1\nrm_1," << cond << ",hall_13_1\nhall_13_1," << cond << ",lecture_hall_eq\nlecture_hall_eq_t," << cond << ",oat_stairs_2\noat_stairs_2,";
    cout << cond << ",kd_1\nlecture_hall_eq_f," << cond << ",southern_labs_2\nsouthern_labs_2,";
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",";
}

// pop the number and output the number
void output()
{
    cout << "iit_gate_out_2\niit_gate_out_2," << cond << ",hall_13_2\nhall_13_2," << cond << ",kd_2\nkd_2," << cond << ",kd_1\nkd_1," << cond << ",kd_3\nkd_3," << cond << ",";
}

// get a single number and push it
void input()
{
    cout << "rm_2\nrm_2," << cond << ",iit_gate_in_2\niit_gate_in_2," << cond << ",rm_1\nrm_1," << cond << ",rm_3\nrm_3," << cond << ",";
}

// pop the top number and output as an ascii value
void outputascii()
{
    cout << "nankari_gate_out_2\nnankari_gate_out_2," << cond << ",hall_13_2\nhall_13_2," << cond << ",kd_2\nkd_2," << cond << ",kd_1\nkd_1," << cond << ",kd_3\nkd_3," << cond << ",";
}

// inputascii function
void inputascii()
{
    cout<<"rm_2\nrm_2,"<<cond<<",rm_3\nrm_3,"<<cond<<",rm_1\nrm_1,"<<cond<<",oat_stage[1]\noat_stage,";
    cond++;
    cout<<cond<<",rm_1\nrm_1,"<<cond<<",oat_stage[1]\noat_stage,";
    cond++;
    cout<<cond<<",rm_1\nrm_1,"<<cond<<",oat_stage[1]\noat_stage,";
    cond++;
    cout<<cond<<",airstrip_land_2\nairstrip_land_2,"<<cond<<",oat_stage[1]\noat_stage,";
    cond++;
    cout<<cond<<",events_2\nevents_2_f,"<<cond<<",rm_2\nrm_2,"<<cond<<",rm_3\nrm_3,"<<cond<<",oat_stage[1]\noat_stage,";
    cond++;
    cout<<cond<<",rm_3\nrm_3,"<<cond<<",oat_stage[-1]\n";
    cond--;
    cout<<"events_2_t,"<<cond<<",mt_3_2\nmt_3_2,"<<cond<<",oat_stage[2]\noat_stage,";
    cond=cond+2;
    cout<<cond<<",kd_3\nkd_3,"<<cond<<",rm_1\nrm_1,"<<cond<<",rm_2\nrm_2,"<<cond<<",oat_stage[1]\noat_stage,";
    cond=cond+1;
    cout<<cond<<",events_1\nevents_1_f,"<<cond<<",mt_3_1\nmt_3_1,"<<cond<<",kd_3\nkd_3,"<<cond<<",rm_1\nrm_1,"<<cond<<",rm_2\nrm_2,";
    cout<<cond<<",events_1\nevents_1_t,"<<cond<<",hall_13_2\nhall_13_2,"<<cond<<",oat_stage[1]\noat_stage,";
    cond++;
    cout<<cond<<",kd_2\nkd_2,"<<cond<<",kd_1\nkd_1,"<<cond<<",kd_3\nkd_3,"<<cond<<",oat_stage[1]\noat_stage,";
    cond++;
    cout<<cond<<",events_2\nevents_2_f,"<<cond<<",kd_1\nkd_1,"<<cond<<",mt_3_2\nmt_3_2,"<<cond<<",hall_13_2\nhall_13_2,"<<cond<<",kd_2\nkd_2,"<<cond<<",kd_3\nkd_3,"<<cond<<",events_2\nevents_2_t,"<<cond<<",oat_stage[1]\noat_stage,";
    cond++;
    cout<<cond<<",rm_1\nrm_1,"<<cond<<",rm_3\nrm_3,"<<cond<<",oat_stage[1]\noat_stage,";
    cond++;
    cout<<cond<<",events_1\nevents_1_f,"<<cond<<",rm_1\nrm_1,"<<cond<<",rm_3\nrm_3,"<<cond<<",events_1\nevents_1_t,"<<cond<<",kd_2\nkd_2,"<<cond<<",kd_3\nkd_3,"<<cond<<",kd_1\nkd_1,"<<cond<<",oat_stage[1]\noat_stage,";
    cond++;
    cout<<cond<<",kd_1\nkd_1,"<<cond<<",kd_3\nkd_3,"<<cond<<",";
}

// pop function
void pop()
{
    cout << "hall_13_2\nhall_13_2," << cond << ",kd_2\nkd_2," << cond << ",kd_1\nkd_1," << cond << ",kd_3\nkd_3," << cond << ",";
}

// swap function
void swap()
{
    cout << "rm_3\nrm_3," << cond << ",rm_2\nrm_2," << cond << ",mt_2_3\nmt_2_3," << cond << ",mt_3_1\nmt_3_1," << cond << ",oat_stage[1]\n";
    cond++;
    cout << "oat_stage," << cond << ",rm_3\nrm_3," << cond << ",kd_2\nkd_2," << cond << ",mt_1_3\nmt_1_3," << cond << ",hall_13_3\nhall_13_3," << cond << ",kd_3\nkd_3," << cond << ",oat_stage[1]\n";
    cond++;
    cout << "oat_stage," << cond << ",kd_3\nkd_3," << cond << ",";
}

// cycle function
void cycle()
{
    cout << "events_1\nevents_1_f," << cond << ",kd_1\nkd_1," << cond << ",events_1\nevents_1_t," << cond << ",rm_3\nrm_3," << cond << ",mt_1_3\nmt_1_3," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",pronite_1\npronite_1," << cond << ",pronite_2\npronite_2," << cond << ",kd_2\nkd_2," << cond << ",rm_1\nrm_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",events_1\nevents_1_f," << cond << ",rm_1\nrm_1," << cond << ",events_1\nevents_1_t," << cond << ",kd_3\nkd_3," << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_3\nkd_3," << cond << ",kd_1\nkd_1," << cond << ",";
}

// rcycle function
void rcycle()
{
    cout<<"rm_2\nrm_2,"<<cond<<",rm_3\nrm_3,"<<cond<<",events_1\nevents_1_f,"<<cond<<",kd_1\nkd_1,"<<cond<<",events_1\nevents_1_t,"<<cond<<",rm_1\nrm_1,"<<cond;
    cout<<",oat_stage[1]\noat_stage,";
    cond++;
    cout<<cond<<",rm_3\nrm_3,"<<cond<<",mt_3_1\nmt_3_1,"<<cond<<",pronite_1\npronite_1,"<<cond<<",kd_3\nkd_3,"<<cond<<",rm_2\nrm_2,"<<cond<<",oat_stage[1]\noat_stage,";
    cond++;
    cout<<cond<<",rm_1\nrm_1,"<<cond;
    cout<<",pronite_2\npronite_2,"<<cond<<",oat_stage[1]\noat_stage,";
    cond++;
    cout<<cond<<",events_1\nevents_1_f,"<<cond<<",rm_1\nrm_1,"<<cond<<",events_1\nevents_1_t,";
    cout<<cond<<",kd_1\nkd_1,"<<cond;
    cout<<",oat_stage[1]\noat_stage,";
    cond++;
    cout<<cond<<",kd_1\nkd_1,"<<cond<<",kd_2\nkd_2,"<<cond<<",";
}

// dup function
void dup()
{
    cout << "rm_2\nrm_2," << cond << ",rm_3\nrm_3," << cond << ",mt_2_3\nmt_2_3," << cond << ",rm_1\nrm_1," << cond << ",";
}

// rev function
void rev(){
	cout<<"rm_2\nrm_2,"<<cond<<",pronite_2\npronite_2,"<<cond<<",events_1\nevents_1_f,"<<cond<<",rm_1\nrm_1,"<<cond<<",rm_3\nrm_3,"<<cond<<",events_1\nevents_1_t,"<<cond<<",kd_1\nkd_1,"<<cond<<",oat_stage[1]\noat_stage,";
	cond++;
	cout<<cond<<",rm_3\nrm_3,"<<cond<<",rm_2\nrm_2,"<<cond<<",oat_stage[1]\noat_stage,";
	cond++;
	cout<<cond<<",events_1\nevents_1_f,"<<cond<<",mt_3_1\nmt_3_1,"<<cond<<",kd_1\nkd_1,"<<cond<<",rm_3\nrm_3,"<<cond<<",rm_2\nrm_2,"<<cond<<",events_1\nevents_1_t,"<<cond<<",oat_stage[1]\noat_stage,";
	cond++;
	cout<<cond<<",pronite_2\npronite_2,"<<cond<<",hall_13_1\nhall_13_1,"<<cond<<",rm_1\nrm_1,"<<cond<<",kd_3\nkd_3,"<<cond<<",oat_stage[1]\noat_stage,";
	cond++;
	cout<<cond<<",events_1\nevents_1_f,"<<cond<<",hall_13_1\nhall_13_1,"<<cond<<",rm_1\nrm_1,"<<cond<<",kd_3\nkd_3,"<<cond<<",events_1\nevents_1_t,"<<cond<<",oat_stage[1]\noat_stage,";
	cond++;
	cout<<cond<<",kd_2\nkd_2,"<<cond<<",events_1\nevents_1_f,"<<cond<<",rm_3\nrm_3,"<<cond<<",rm_1\nrm_1,";
	cout<<cond<<",events_1\nevents_1_t,"<<cond<<",kd_3\nkd_3,"<<cond<<",kd_1\nkd_1,"<<cond<<",oat_stage[1]\noat_stage,";
	cond++;
	cout<<cond<<",kd_3\nkd_3,"<<cond<<",kd_1\nkd_1,"<<cond<<",";
}

// if function
int IF(int cond_f)
{
    cout << "rm_1\nrm_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cond_f = cond;
    cout << cond << ",rm_1\nrm_1," << cond << ",hall_13_1\nhall_13_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cond_f++;
    cout << cond << ",lecture_hall_eq\nlecture_hall_eq_f," << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",";
    return cond_f;
}

// fi function
void FI(int cond_f)
{
    cout << "rm_1\nrm_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",rm_1\nrm_1," << cond << ",oat_stage[" << cond_f - cond << "]\nlecture_hall_eq_t," << cond_f << ",oat_stage[" << cond - cond_f + 1 << "]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",";
}

// quit function
void quit()
{
    cout << "finish";
}

// debug function
void debug()
{
    cout << "rm_2\nrm_2," << cond << ",pronite_2\npronite_2," << cond << ",events_1\nevents_1_f," << cond << ",kd_1\nkd_1," << cond << ",events_1\nevents_1_t," << cond << ",rm_1\nrm_1," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",events_1\nevents_1_f," << cond << ",iit_gate_out_1\niit_gate_out_1," << cond << ",rm_1\nrm_1," << cond << ",events_1\nevents_1_t," << cond;
    cout << ",kd_1\nkd_1," << cond << ",hall_13_2\nhall_13_2," << cond << ",kd_2\nkd_2," << cond << ",oat_stage[1]\noat_stage,";
    cond++;
    cout << cond << ",kd_1\nkd_1," << cond << ",";
}

int32_t main()
{
    int cond_f;
    cond = 0;
    cout << "start,0,pronite_2\npronite_2,0,kd_3\nkd_3,0,oat_stage[1]\noat_stage,1,kd_3\nkd_3,1,";
    cond = 1;
    string s;
    while (cin >> s)
    {
        // inserting a number in stack
        if ((s[0] > 47 && s[0] < 58) || s[0] == '-')
        {
            cout << "rm_2\nrm_2," << cond << ",";
            vector<string> v;
            num(v, abs(stoi(s)));
            if (s[0] != '0')
            {
                auto it = v.end();
                do
                {
                    it--;
                    if (*it == "oat_stage")
                    {
                        cout << *it << "[1]" << endl;
                        cond++;
                        cout << *it << "," << cond << ",";
                    }
                    else
                    {
                        cout << *it << endl;
                        cout << *it << "," << cond << ",";
                    }
                } while (it != v.begin());
                if (s[0] == '-')
                {
                    cout << "oat_stage[1]\noat_stage,";
                    cond++;

                    cout << cond << ",rm_3\nrm_3," << cond << ",rm_1\nrm_1," << cond << ",oat_stage[1]\noat_stage,";
                    cond++;

                    cout << cond << ",rm_1\nrm_1," << cond << ",hall_5\nhall_5," << cond << ",kd_1\nkd_1," << cond << ",kd_3\nkd_3," << cond << ",oat_stage[1]\noat_stage,";
                    cond++;
                    cout << cond << ",kd_1\nkd_1," << cond << ",";
                }
            }
            cout << "rm_1\nrm_1," << cond << ",rm_3\nrm_3," << cond << ",";
        }
        // other operations
        switch (s[0])
        {
        case 'a':
            if (s == "add")
            {
                add();
            }
            else if (s == "and")
            {
                AND();
            }
            break;
        case 's':
            if (s == "sub")
            {
                sub();
            }
            else if (s == "swap")
            {
                swap();
            }
            break;
        case 'm':
            if (s == "mul")
            {
                mul();
            }
            else if (s == "mod")
            {
                mod();
            }
            break;
        case 'r':
            if (s == "random")
            {
            }
            else if (s == "rcycle")
            {
                rcycle();
            }
            else if (s == "rev")
            {
                rev();
            }
            break;
        case 'o':
            if (s == "or")
            {
                OR();
            }
            else if (s == "output")
            {
                output();
            }
            else if (s == "outputascii")
            {
                outputascii();
            }
            break;
        case 'x':
            XOR();
            break;
        case 'n':
            if (s == "nand")
            {
                NAND();
            }
            else if (s == "not")
            {
                NOT();
            }
            break;
        case 'i':
            if (s == "input")
            {
                input();
            }
            else if (s == "inputascii")
            {
                inputascii();
            }
            else if (s == "if")
            {
                cond_f = IF(cond_f);
            }
            break;
        case 'p':
            pop();
            break;
        case 'c':
            cycle();
            break;
        case 'd':
            if (s == "div")
            {
                div();
            }
            else if (s == "dup")
            {
                dup();
            }
            else if (s == "debug")
            {
                debug();
            }
            break;
        case 'f':
            FI(cond_f);
            break;
        case 'q':
            quit();
            break;
        }
        if (s[0] != 'q')
        {
            cout << "oat_stage[1]\noat_stage,";
            cond++;
            cout << cond << ",";
        }
    }
    return 0;
}