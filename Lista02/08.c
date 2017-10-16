#include <stdio.h>

float desconto (unsigned int id, unsigned int faltas)
{
  float d;
  
    switch (id) {
	  	case 1:{
			   d  = 10000/20;
			   d *= faltas;
			     return d;
	  	}
		  case 2:{
			  d  = 8000/20;
			  d *= faltas;
			    return d;
		  }
		  case 3:{
				d  = 5000/20;
			  d *= faltas;
		  
		      return d;
		  }
		  case 4:{
				d  = 3000/20;
			  d *= faltas;
			    return d;
		  }
		  case 5:{
				d  = 2000/20;
			  d *= faltas;
			    return d;
		  }
		  default:{
				printf("sem função de desconto \n");
        d=0;
          return d;
		  }
  }

}
float acrescimo (unsigned int id, unsigned int hExtra)
{
    float a;
    
    switch (id) {
	  	case 1:{
			   a  = 10000/20;
			   a /= 8;
			   a += 40;
			   a *= hExtra;
			   return a;
	  	 }
		   case 2:{
			   a  = 8000/20;
			   a /= 8;
			   a += 40;
			   a *= hExtra;
			   return a;
		   }
		   case 3:{
			 	 a  = 5000/20;
			   a /= 8;
			   a += 40;
			   a *= hExtra;
			   return a;
		   }
		   case 4:{
			 	 a  = 3000/20;
			   a /= 8;
			   a += 40;
			   a *= hExtra;
			   return a;
		   }
		  case 5:{
			  a  = 2000/20;
			  a /= 8;
			  a += 40;
			  a *= hExtra;
			  return a;
      }
		  default:{
				printf("sem função de acrescimo \n");
				a=0;
	      return a;
		  }
  }
}

float calcSal (unsigned int id, unsigned int faltas, unsigned int hExtra)
{
  float sal;
  switch (id) {
	  	case 1:{
			   sal  = 10000;
			   sal += acrescimo(id,hExtra);
			   sal -= desconto(id,faltas);
			   return sal;
	  	}
		  case 2:{
			   sal  = 8000;
			   sal += acrescimo(id,hExtra);
			   sal -= desconto(id,faltas);
			   return sal;
      }
		  case 3 :{
				 sal  = 5000;
			   sal += acrescimo(id,hExtra);
			   sal -= desconto(id,faltas);
			   return sal;
		  }
		  case 4:{
				 sal  = 3000;
			   sal += acrescimo(id,hExtra);
			   sal -= desconto(id,faltas);
			   return sal;
		  }
		  case 5:{
				 sal  = 2000;
			   sal += acrescimo(id,hExtra);
			   sal -= desconto(id,faltas);
		    return sal;
		  }
		  default:{
				printf("sem função de salario \n");
				sal = 0;
				return sal;
		  }
  }
  
  
}
int main ()
{
  unsigned int id, faltas, hExtra;
  
  scanf("%d %d %d", &id, &faltas, &hExtra);
  

  
  printf("%.2f \n", calcSal (id, faltas, hExtra) );
  
  return 0;  
}
