/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSURLRequest, NSURLConnection, NSDictionary;

@interface NSURLConnectionIPhone : NSObject {
    NSDictionary *__connectionProperties;
    id __delegate;
    long long __maxContentLength;
    NSURLRequest *__request;
    BOOL __startImmediatelyFlag;
    BOOL __usesCacheFlag;
    NSURLConnection *_connection;
}

- (void)_clearIVars;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6;
- (void)cancel;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)start;

@end