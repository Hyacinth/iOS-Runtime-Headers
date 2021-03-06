/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFError, NSMutableDictionary, NSMutableSet, NSSet;

@interface MFDAMoveResponseConsumer : MFDAMailAccountConsumer <DAMessageMoveRequestConsumer> {
    MFError *_error;
    NSMutableSet *_failures;
    NSSet *_messagesIDs;
    NSMutableDictionary *_newRemoteIDsByMessageID;
}

@property(retain) MFError * error;

- (void)dealloc;
- (id)error;
- (id)initWithMessageIDs:(id)arg1 newRemoteIDsByMessageID:(id)arg2 failures:(id)arg3;
- (void)resultsForMessageMove:(id)arg1;
- (void)setError:(id)arg1;
- (void)taskFailed:(id)arg1 statusCode:(int)arg2 error:(id)arg3;

@end
