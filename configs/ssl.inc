# ssl_certificate         SSL_CERT;
# ssl_certificate_key     SSL_KEY;
# ssl_trusted_certificate SSL_CHAIN_CERT;

ssl_certificate         /etc/nginx/ssl/le-crt.pem;
ssl_certificate_key     /etc/nginx/ssl/le-key.pem;
ssl_trusted_certificate /etc/nginx/ssl/le-chain-crt.pem;

add_header Strict-Transport-Security "max-age=63072000; preload";
