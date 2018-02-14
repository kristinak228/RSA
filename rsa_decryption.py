'''
Kristina Kolibab
Prof. Tamon
CS 456
Assignment 2
'''

def main():

	# cipher of big numbers	
	f_cipher = open('a2.cipher', 'r')
	cipher_n = [line.strip() for line in f_cipher.readlines()]
	cipher_n = [int(i) for i in cipher_n]

	# output from .cpp file of PowerMod outputs
	f_ascii = open('ASCII_Chars.txt', 'r')
	ascii_n = [line.strip() for line in f_ascii.readlines()]	
	ascii_n = [int(i) for i in ascii_n]

	# For loop for decryption
	for (i, num) in enumerate(ascii_n):
		for (j, bnum) in enumerate(cipher_n):
			if num == bnum:
				c = chr(i)	
				cipher_n[j] = c

	f = open('decrypted_ans.txt', 'w')
	for line in cipher_n:
		f.write(line)

	f_cipher.close()
	f_ascii.close()	
	f.close()

#	print(cipher_n)

if __name__ == "__main__":
	main()
