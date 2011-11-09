/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@interface WebInspectorServerConnectionHTTP : WebInspectorServerConnection  {
    int _socketFileDescriptor;
    struct __CFReadStream { } *_readStream;
    struct __CFWriteStream { } *_writeStream;
    BOOL _isWebSocketServer;
    BOOL _shouldCloseAfterSendingResponse;
    struct __CFHTTPMessage { } *_httpMessage;
    struct __CFHTTPMessage { } *_httpResponse;
    struct __CFData { } *_incomingWebSocketData;
    struct __CFData { } *_outgoingData;
}


- (void)shutdown;
- (void)send;
- (void)close;
- (void)_sendPendingData;
- (void)readWebSocketMessage:(const char *)arg1 length:(long)arg2;
- (void)readHTTPMessage:(const char *)arg1 length:(long)arg2;
- (void)sendWebSocketResponse:(id)arg1;
- (void)sendHTTPResponse;
- (void)sendHTTPInspectorPageResponse:(id)arg1;
- (void)sendHTTPDynamicJSONListingResponse;
- (void)read:(const char *)arg1 length:(long)arg2;
- (void)handleReadEvent:(unsigned long)arg1;
- (void)handleWriteEvent:(unsigned long)arg1;
- (id)initWithSocketFileDescriptor:(int)arg1;
- (void)clearChannel;
- (void)sendWebSocketMessage:(id)arg1;
- (void)dealloc;

@end