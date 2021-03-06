/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSError, NSString, NSURLRequest, NSURLResponse;

@interface NSURLSessionTask : NSObject <NSCopying> {
    long long _countOfBytesExpectedToReceive;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    NSURLRequest *_currentRequest;
    NSError *_error;
    NSURLRequest *_originalRequest;
    NSURLResponse *_response;
    int _state;
    NSString *_taskDescription;
    unsigned int _taskIdentifier;
}

@property(readonly) long long countOfBytesExpectedToReceive;
@property(readonly) long long countOfBytesExpectedToSend;
@property(readonly) long long countOfBytesReceived;
@property(readonly) long long countOfBytesSent;
@property(readonly) NSURLRequest * currentRequest;
@property(readonly) NSError * error;
@property(readonly) NSURLRequest * originalRequest;
@property(readonly) NSURLResponse * response;
@property(readonly) int state;
@property(copy) NSString * taskDescription;
@property(readonly) unsigned int taskIdentifier;

+ (void)initialize;

- (long long)countOfBytesExpectedToReceive;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesReceived;
- (long long)countOfBytesSent;
- (id)currentRequest;
- (id)error;
- (id)originalRequest;
- (id)response;
- (void)setTaskDescription:(id)arg1;
- (int)state;
- (id)taskDescription;
- (unsigned int)taskIdentifier;

@end
