# ================================================================================================
#  DS3OS
#  Copyright (C) 2021 Tim Leonard
# ================================================================================================

project(libcurl C)

SET(SOURCES
    "lib/altsvc.h"
    "lib/amigaos.h"
    "lib/arpa_telnet.h"
    "lib/asyn.h"
    "lib/bufref.h"
    "lib/c-hyper.h"
    "lib/conncache.h"
    "lib/connect.h"
    "lib/content_encoding.h"
    "lib/cookie.h"
    "lib/curl_addrinfo.h"
    "lib/curl_base64.h"
    "lib/curl_ctype.h"
    "lib/curl_des.h"
    "lib/curl_endian.h"
    "lib/curl_fnmatch.h"
    "lib/curl_get_line.h"
    "lib/curl_gethostname.h"
    "lib/curl_gssapi.h"
    "lib/curl_hmac.h"
    "lib/curl_krb5.h"
    "lib/curl_ldap.h"
    "lib/curl_md4.h"
    "lib/curl_md5.h"
    "lib/curl_memory.h"
    "lib/curl_memrchr.h"
    "lib/curl_multibyte.h"
    "lib/curl_ntlm_core.h"
    "lib/curl_ntlm_wb.h"
    "lib/curl_path.h"
    "lib/curl_printf.h"
    "lib/curl_range.h"
    "lib/curl_rtmp.h"
    "lib/curl_sasl.h"
    "lib/curl_setup.h"
    "lib/curl_setup_once.h"
    "lib/curl_sha256.h"
    "lib/curl_sspi.h"
    "lib/curl_threads.h"
    "lib/curlx.h"
    "lib/dict.h"
    "lib/doh.h"
    "lib/dotdot.h"
    "lib/dynbuf.h"
    "lib/easyif.h"
    "lib/easyoptions.h"
    "lib/escape.h"
    "lib/file.h"
    "lib/fileinfo.h"
    "lib/formdata.h"
    "lib/ftp.h"
    "lib/ftplistparser.h"
    "lib/getinfo.h"
    "lib/gopher.h"
    "lib/h2h3.h"
    "lib/hash.h"
    "lib/hostip.h"
    "lib/hsts.h"
    "lib/http.h"
    "lib/http2.h"
    "lib/http_chunks.h"
    "lib/http_digest.h"
    "lib/http_negotiate.h"
    "lib/http_ntlm.h"
    "lib/http_proxy.h"
    "lib/http_aws_sigv4.h"
    "lib/if2ip.h"
    "lib/imap.h"
    "lib/inet_ntop.h"
    "lib/inet_pton.h"
    "lib/llist.h"
    "lib/memdebug.h"
    "lib/mime.h"
    "lib/mqtt.h"
    "lib/multihandle.h"
    "lib/multiif.h"
    "lib/netrc.h"
    "lib/nonblock.h"
    "lib/parsedate.h"
    "lib/pingpong.h"
    "lib/pop3.h"
    "lib/progress.h"
    "lib/psl.h"
    "lib/quic.h"
    "lib/rand.h"
    "lib/rename.h"
    "lib/rtsp.h"
    "lib/select.h"
    "lib/sendf.h"
    "lib/setopt.h"
    "lib/setup-vms.h"
    "lib/share.h"
    "lib/sigpipe.h"
    "lib/slist.h"
    "lib/smb.h"
    "lib/smtp.h"
    "lib/sockaddr.h"
    "lib/socketpair.h"
    "lib/socks.h"
    "lib/speedcheck.h"
    "lib/splay.h"
    "lib/strcase.h"
    "lib/strdup.h"
    "lib/strerror.h"
    "lib/strtok.h"
    "lib/strtoofft.h"
    "lib/system_win32.h"
    "lib/telnet.h"
    "lib/tftp.h"
    "lib/timeval.h"
    "lib/transfer.h"
    "lib/url.h"
    "lib/urlapi-int.h"
    "lib/urldata.h"
    "lib/version_win32.h"
    "lib/warnless.h"
    "lib/wildcard.h"
    "lib/vauth/digest.h"
    "lib/vauth/ntlm.h"
    "lib/vauth/vauth.h"
    "lib/vtls/bearssl.h"
    "lib/vtls/gskit.h"
    "lib/vtls/gtls.h"
    "lib/vtls/hostcheck.h"
    "lib/vtls/keylog.h"
    "lib/vtls/mbedtls.h"
    "lib/vtls/mbedtls_threadlock.h"
    "lib/vtls/nssg.h"
    "lib/vtls/openssl.h"
    "lib/vtls/rustls.h"
    "lib/vtls/schannel.h"
    "lib/vtls/sectransp.h"
    "lib/vtls/vtls.h"
    "lib/vtls/wolfssl.h"
    "lib/vtls/x509asn1.h"
    "lib/vquic/ngtcp2.h"
    "lib/vquic/quiche.h"
    "lib/vquic/vquic.h"
    "lib/vssh/ssh.h"
    "curl_config.h"
    "lib/altsvc.c"
    "lib/amigaos.c"
    "lib/asyn-ares.c"
    "lib/asyn-thread.c"
    "lib/base64.c"
    "lib/bufref.c"
    "lib/c-hyper.c"
    "lib/conncache.c"
    "lib/connect.c"
    "lib/content_encoding.c"
    "lib/cookie.c"
    "lib/curl_addrinfo.c"
    "lib/curl_ctype.c"
    "lib/curl_des.c"
    "lib/curl_endian.c"
    "lib/curl_fnmatch.c"
    "lib/curl_get_line.c"
    "lib/curl_gethostname.c"
    "lib/curl_gssapi.c"
    "lib/curl_memrchr.c"
    "lib/curl_multibyte.c"
    "lib/curl_ntlm_core.c"
    "lib/curl_ntlm_wb.c"
    "lib/curl_path.c"
    "lib/curl_range.c"
    "lib/curl_rtmp.c"
    "lib/curl_sasl.c"
    "lib/curl_sspi.c"
    "lib/curl_threads.c"
    "lib/dict.c"
    "lib/doh.c"
    "lib/dotdot.c"
    "lib/dynbuf.c"
    "lib/easy.c"
    "lib/easygetopt.c"
    "lib/easyoptions.c"
    "lib/escape.c"
    "lib/file.c"
    "lib/fileinfo.c"
    "lib/formdata.c"
    "lib/ftp.c"
    "lib/ftplistparser.c"
    "lib/getenv.c"
    "lib/getinfo.c"
    "lib/gopher.c"
    "lib/h2h3.c"
    "lib/hash.c"
    "lib/hmac.c"
    "lib/hostasyn.c"
    "lib/hostip.c"
    "lib/hostip4.c"
    "lib/hostip6.c"
    "lib/hostsyn.c"
    "lib/hsts.c"
    "lib/http.c"
    "lib/http2.c"
    "lib/http_chunks.c"
    "lib/http_digest.c"
    "lib/http_negotiate.c"
    "lib/http_ntlm.c"
    "lib/http_proxy.c"
    "lib/http_aws_sigv4.c"
    "lib/idn_win32.c"
    "lib/if2ip.c"
    "lib/imap.c"
    "lib/inet_ntop.c"
    "lib/inet_pton.c"
    "lib/krb5.c"
    "lib/ldap.c"
    "lib/llist.c"
    "lib/md4.c"
    "lib/md5.c"
    "lib/memdebug.c"
    "lib/mime.c"
    "lib/mprintf.c"
    "lib/mqtt.c"
    "lib/multi.c"
    "lib/netrc.c"
    "lib/nonblock.c"
    "lib/openldap.c"
    "lib/parsedate.c"
    "lib/pingpong.c"
    "lib/pop3.c"
    "lib/progress.c"
    "lib/psl.c"
    "lib/rand.c"
    "lib/rename.c"
    "lib/rtsp.c"
    "lib/select.c"
    "lib/sendf.c"
    "lib/setopt.c"
    "lib/sha256.c"
    "lib/share.c"
    "lib/slist.c"
    "lib/smb.c"
    "lib/smtp.c"
    "lib/socketpair.c"
    "lib/socks.c"
    "lib/socks_gssapi.c"
    "lib/socks_sspi.c"
    "lib/speedcheck.c"
    "lib/splay.c"
    "lib/strcase.c"
    "lib/strdup.c"
    "lib/strerror.c"
    "lib/strtok.c"
    "lib/strtoofft.c"
    "lib/system_win32.c"
    "lib/telnet.c"
    "lib/tftp.c"
    "lib/timeval.c"
    "lib/transfer.c"
    "lib/url.c"
    "lib/urlapi.c"
    "lib/version.c"
    "lib/version_win32.c"
    "lib/warnless.c"
    "lib/wildcard.c"
    "lib/vauth/cleartext.c"
    "lib/vauth/cram.c"
    "lib/vauth/digest.c"
    "lib/vauth/digest_sspi.c"
    "lib/vauth/gsasl.c"
    "lib/vauth/krb5_gssapi.c"
    "lib/vauth/krb5_sspi.c"
    "lib/vauth/ntlm.c"
    "lib/vauth/ntlm_sspi.c"
    "lib/vauth/oauth2.c"
    "lib/vauth/spnego_gssapi.c"
    "lib/vauth/spnego_sspi.c"
    "lib/vauth/vauth.c"
    "lib/vtls/bearssl.c"
    "lib/vtls/gskit.c"
    "lib/vtls/gtls.c"
    "lib/vtls/hostcheck.c"
    "lib/vtls/keylog.c"
    "lib/vtls/mbedtls.c"
    "lib/vtls/mbedtls_threadlock.c"
    "lib/vtls/nss.c"
    "lib/vtls/openssl.c"
    "lib/vtls/rustls.c"
    "lib/vtls/schannel.c"
    "lib/vtls/schannel_verify.c"
    "lib/vtls/sectransp.c"
    "lib/vtls/vtls.c"
    "lib/vtls/wolfssl.c"
    "lib/vtls/x509asn1.c"
    "lib/vquic/ngtcp2.c"
    "lib/vquic/quiche.c"
    "lib/vquic/vquic.c"
    "lib/vssh/libssh.c"
    "lib/vssh/libssh2.c"
    "lib/vssh/wolfssh.c"
)

add_library(${PROJECT_NAME} STATIC ${SOURCES})

target_compile_definitions(${PROJECT_NAME} PUBLIC -DBUILDING_LIBCURL -DCURL_HIDDEN_SYMBOLS -D_USRDLL -DHAVE_CONFIG_H -Dlibcurl_EXPORTS -DCURL_STATICLIB)

target_include_directories(${PROJECT_NAME} PUBLIC
    .
    include
    lib
    ../openssl/include
)


util_setup_folder_structure(${PROJECT_NAME} SOURCES "ThirdParty")
