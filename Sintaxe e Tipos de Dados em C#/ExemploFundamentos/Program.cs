using ExemploFundamentos.Models;

DateTime dataAtual = DateTime.Now.AddDays(5);

Console.WriteLine(dataAtual.ToString("dd/MM/yyyy"));

int teste = 1023 % 3;
Console.WriteLine(teste);

int n = int.Parse(Console.ReadLine());
        int p = 1, s = 0;
        while (n > 0){
             int l = n % 10;
             Console.WriteLine("l valor: "+l);
// TODO: Crie as outras condições necessárias para a resolução do desafio:
             p *= l;
             Console.WriteLine("p valor: "+p);
             s += l    ;
             Console.WriteLine("s valor: "+s);
             n /= 10  ;
             Console.WriteLine("n valor: "+n);
           }

           Console.WriteLine(p-s);

// string apresentacao = "Olá seja bem Vindo";
// int qtt = 1;
// qtt = 10;
// double altura = 1.80;
// decimal preco = 1.80M;
// bool condicao = true;

// Console.WriteLine(apresentacao);
// Console.WriteLine("valor qtt: "+qtt);
// Console.WriteLine("valor altura: " +altura.ToString("0.00") );
// Console.WriteLine("Valor preço: " +preco);
// Console.WriteLine("Valor condição: " +condicao);


// Pessoa pessoa1 = new Pessoa();

// pessoa1.Nome = "Luís";
// pessoa1.Idade = 20;
// pessoa1.Apresentar();

