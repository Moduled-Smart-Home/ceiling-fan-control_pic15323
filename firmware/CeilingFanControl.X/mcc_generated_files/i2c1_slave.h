#ifndef I2C1_SLAVE_H
#define I2C1_SLAVE_H

#include <stdbool.h>
#include <stdint.h>

typedef void (*i2c1InterruptHandler)(void);
/**
 * \brief Initialize I2C1 interface
 * If module is configured to disabled state, the clock to the I2C1 is disabled
 * if this is supported by the device's clock system.
 *
 * \return None
 */
void I2C1_Initialize(void);

/**
 * \brief Open the I2C1 for communication. Enables the module if disabled.
 *
 * \return Nothing
 */
void I2C1_Open(void);

/**
 * \brief Close the I2C1 for communication. Disables the module if enabled.
 * Disables address recognition.
 *
 * \return Nothing
 */
void I2C1_Close(void);

/**
 * \brief Read data from I2C1 communication. 
 *
 * \return Read Data
 */
uint8_t I2C1_Read(void);

/**
 * \brief Write data over the communication. 
 *
 * \return None
 */
void I2C1_Write(uint8_t data);

/**
 * \brief Check for Master Read/Write Request
 *
 * \return bool
 * 1 - Master Read Request
 * 0 - Master Write Request
 */
bool I2C1_IsRead(void);

/**
 * \brief Enable the communication by initialization of hardware 
 *
 * \return None
 */
void I2C1_Enable(void);

/**
 * \brief Send the Ack Signal to Master 
 *
 * \return None
 */
void I2C1_SendAck(void);

/**
 * \brief Send the Nack Signal to Master 
 *
 * \return None
 */
void I2C1_SendNack(void);

/**
 * \brief The function called by the I2C1 Irq handler.
 * Can be called in a polling loop in a polled driver.
 *
 * \return Nothing
 */
void I2C1_SlaveSetIsrHandler(i2c1InterruptHandler handler);
void I2C1_SlaveSetAddrIntHandler(i2c1InterruptHandler handler);
void I2C1_SlaveSetReadIntHandler(i2c1InterruptHandler handler);
void I2C1_SlaveSetWriteIntHandler(i2c1InterruptHandler handler);
void I2C1_SlaveSetBusColIntHandler(i2c1InterruptHandler handler);
void I2C1_SlaveSetWrColIntHandler(i2c1InterruptHandler handler);

void (*MSSP1_InterruptHandler)(void);
void (*I2C1_SlaveRdInterruptHandler)(void);
void (*I2C1_SlaveWrInterruptHandler)(void);
void (*I2C1_SlaveAddrInterruptHandler)(void);
void (*I2C1_SlaveBusColInterruptHandler)(void);
void (*I2C1_SlaveWrColInterruptHandler)(void);


#endif /* I2C1_SLAVE_H */