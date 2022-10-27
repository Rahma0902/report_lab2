/**
  ******************************************************************************
  * @file    main.c
  * @author  Boujneh Rahma
  * @brief   Compte rendu 
  * @version V1.0.0
  * @date    27-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
//#define SOM
#define MUL
//#define INTEL
#define OTHERS
//#define MIN
#define MAX


/* Private function prototypes -----------------------------------------------*/
static int sum(int var1,int var2);
static int mul(int var1,int var2);
static int min(int var1,int var2);
static int max(int var1, int var2);
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
#ifdef INTEL
  #ifdef SOM
    int SumResult = sum(5,7);
  #endif
  #ifdef MIN 
  int MinResult = min (5,7);
  #endif
#endif
 
#ifdef OTHERS
  #ifdef MUL
    int MulResult = mul(5,7);
  #endif
  #ifdef MAX
  int MaxResult = max (5,7);
  #endif 
#endif

  while (1)
    
  {
   
  }
}
#ifdef SOM
static int sum(int var1,int var2)
{
  return(var1+var2);
}
#endif

#ifdef MUL
static int mul(int var1,int var2)
{
  return(var1*var2);
}
#endif 

#ifdef MIN
static int min(int var1,int var2) 
{
  return((var1<var2) ? var1 : var2);
}
#endif 

#ifdef MAX 
static int max(int var1, int var2)
{
  return((var1<var2) ? var2 : var1 );
}
#endif
/**************************************END OF FILE**************************************/
