/* kernel.c
A simple kernel that displays a message.
Reem Alhumaidan
*/

int main(){
	putInMemory(0xB000, 0x8140, 'A');
	putInMemory(0xB000, 0x8141, 0x7);

	while (1){
		// todo
	}
	return 0;
}