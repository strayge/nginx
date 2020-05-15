location /ga {
    rewrite /ga/(.*) /$1;
    rewrite (.*collect)MyText(.*) $1$2 break;
    proxy_pass https://www.google-analytics.com/$1?$args&uip=$remote_addr;
    proxy_set_header    X-Real-IP        $remote_addr;
    proxy_set_header    X-Forwarded-For  $proxy_add_x_forwarded_for;
}

location /a.js {
   alias /www/a.js;
}
