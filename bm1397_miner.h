#ifndef BM1397_MINER_H
#define BM1397_MINER_H

#include <stdint.h>

// UART configuration constants (replace 1234 with specific values)
#define UART_NUM         UART_NUM_1234
#define TXD_PIN          (GPIO_NUM_1234)
#define RXD_PIN          (GPIO_NUM_1234)
#define BAUD_RATE        115200

// Declare the functions to expose to other parts of the project
void setup_uart(void);
void send_command_to_bm1397(uint8_t *cmd, uint8_t cmd_len);
int read_response_from_bm1397(uint8_t *response_buffer, uint8_t response_len);
void calculate_midstates(uint8_t *header, uint8_t *midstates);
void setup_bm1397(void);
void send_work_to_bm1397(uint8_t *work_data, uint8_t work_data_len);
void handle_mining(void);
void handle_found_nonce(uint32_t nonce, uint8_t job_id);

#endif // BM1397_MINER_H