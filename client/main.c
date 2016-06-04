


#include <stdio.h>
#include <stdlib.h>
#include <bluetooth/bluetooth.h>
#include <bluetooth/hci.h>
#include <bluetooth/hci_lib.h>


int main(int argc, char *argv[]) {

  char *address = "14:1a:a3:9b:41:8e";
  int dev_id = hci_devid(address);

  struct hci_dev_info *di = (struct hci_dev_info *)malloc(sizeof(struct hci_dev_info));
  int rtn = hci_devinfo(dev_id, di);
  printf("%s\n", di->name);

  return 0;
}
