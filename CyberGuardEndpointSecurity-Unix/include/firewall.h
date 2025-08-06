#ifndef FIREWALL_H
#define FIREWALL_H

// Function to initialize the firewall
void initialize_firewall();

// Function to block a specific IP address
void block_ip(const char *ip_address);

// Function to allow a specific IP address
void allow_ip(const char *ip_address);

// Function to check if an IP address is blocked
int is_ip_blocked(const char *ip_address);

// Function to log firewall activity
void log_firewall_activity(const char *activity);

#endif // FIREWALL_H