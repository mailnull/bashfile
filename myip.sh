#!/bin/bash
ip_url="http://whatismyip.akamai.com/"
CMD_GET_IP=$(curl -s $ip_url)
echo $CMD_GET_IP
