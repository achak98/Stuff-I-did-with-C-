public static ValueType Go()
{
var primes = M.Primes(1000000);

for (int i = 10; i < 1000000; i++)
{
if (primes[i])
{
string strPrime = i.ToString();

foreach (char c in strPrime.ToCharArray().Distinct())
{
if (strPrime.Replace(c.ToString(), "").Length != strPrime.Length - 3)
continue;

var listPrimes = new List();
for (int j = 0; j < 10; j++)>
{
int newNum = int.Parse(strPrime.Replace(c.ToString(), j.ToString()));
if (primes[newNum] && newNum.ToString().Length == strPrime.Length)
listPrimes.Add(newNum);
}
if (listPrimes.Distinct().Count() == 8)
return listPrimes.Min();
}
}
}
return 0;
}
