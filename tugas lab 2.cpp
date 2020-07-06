using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Calculator
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Title = "Aplikasi Konsole Kalkulator Sederhana";

            Console.WriteLine("Pilih Menu: ");
            Console.WriteLine("1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n");
            Console.Write("Masukkan Pilihan [1-4]: ");
            int opt = Convert.ToInt32(Console.ReadLine());


            if(opt > 0 && opt < 5)
            {

                Console.Write("Masukkan Bilangan 1: ");
                int bil1 = Convert.ToInt32(Console.ReadLine());

                Console.Write("Masukkan Bilangan 2: ");
                int bil2 = Convert.ToInt32(Console.ReadLine());


                switch (opt)
                {
                    case 1:
                        Console.WriteLine("\nHasil Penjumlahan dari {0} + {1} adalah {2} \n", bil1, bil2, Penjumlahan(bil1, bil2));
                        break;

                    case 2:
                        Console.WriteLine("\nHasil Pengurangan dari {0} - {1} adalah {2} \n", bil1, bil2, Pengurangan(bil1, bil2));
                        break;

                    case 3:
                        Console.WriteLine("\nHasil Perkalian dari {0} * {1} adalah {2} \n", bil1, bil2, Perkalian(bil1, bil2));
                        break;

                    case 4:
                        Console.WriteLine("\nHasil Pembagian dari {0} / {1} adalah {2} \n", bil1, bil2, Pemabagian(bil1, bil2));
                        break;
                }
            } 
            else
            {
                Console.WriteLine("Pilihan tidak ada\n\n");
            }

            Console.WriteLine("Tekan sembarang untuk keluar");
            Console.ReadKey();
        }


        static int Penjumlahan(int bil1, int bil2)
        {
            return bil1 + bil2;
        }

        static int Pengurangan(int bil1, int bil2)
        {
            return bil1 - bil2;
        }

        static int Perkalian(int bil1, int bil2)
        {
            return bil1 * bil2;
        }

        static int Pemabagian(int bil1, int bil2)
        {
            return bil1 / bil2;
        }

    }