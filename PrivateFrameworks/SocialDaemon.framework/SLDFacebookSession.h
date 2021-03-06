/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SocialDaemon.framework/SocialDaemon
 */

@class ACAccountStore, NSMutableSet, NSString;

@interface SLDFacebookSession : SLDSession <SLFacebookRemoteSession, SLDFacebookPostUploadDelegate> {
    ACAccountStore *_accountStore;
    NSString *_activeAccountIdentifier;
    NSMutableSet *_postUploads;
}

@property(readonly) ACAccountStore * accountStore;
@property(readonly) NSMutableSet * postUploads;

- (void).cxx_destruct;
- (void)_playPostSound;
- (id)_privilegedAccount;
- (id)_tokenSecret;
- (void)_uploadPost:(id)arg1 withSourceAppIdentifier:(id)arg2 suppressAlerts:(BOOL)arg3 trackPostStatus:(BOOL)arg4 completion:(id)arg5;
- (void)accountForEntitledClientWithHandler:(id)arg1;
- (id)accountStore;
- (void)accountsAvailabilityWithHandler:(id)arg1;
- (void)doTestCallWithDict:(id)arg1 withHandler:(id)arg2;
- (void)fetchLikeStatusForURL:(id)arg1 flags:(id)arg2 completion:(id)arg3;
- (void)finishedPostUpload:(id)arg1 withSuccess:(BOOL)arg2;
- (void)likeURL:(id)arg1 completion:(id)arg2;
- (id)postUploads;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)revokeAccessTokenForAppWithID:(id)arg1;
- (void)revokeAllAccessTokensForDeviceWithCompletion:(id)arg1;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)tokenSecretForEntitledClientWithHandler:(id)arg1;
- (void)unlikeURL:(id)arg1 completion:(id)arg2;
- (void)uploadPost:(id)arg1 forPID:(id)arg2 withXPCTransferCompletion:(id)arg3;
- (void)uploadPost:(id)arg1 suppressAlerts:(id)arg2 withPostCompletion:(id)arg3;
- (void)uploadPost:(id)arg1 withXPCTransferCompletion:(id)arg2;
- (id)whitelistedClassNamesForDecoding;

@end
