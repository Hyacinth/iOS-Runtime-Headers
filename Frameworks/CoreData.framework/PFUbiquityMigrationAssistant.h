/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray, NSMutableDictionary, NSString, PFUbiquityLocation;

@interface PFUbiquityMigrationAssistant : NSObject {
    NSMutableDictionary *_baselineLocationsByVersionHash;
    NSString *_localPeerID;
    NSMutableDictionary *_logLocationsByVersionHash;
    NSMutableArray *_orderedReceipts;
    NSMutableArray *_receiptLocations;
    NSString *_ubiquityName;
    PFUbiquityLocation *_ubiquityRootLocation;
}

- (void)_populateBaselineAndTransactionLogLocations;
- (id)baselineLocationsByModelVersionHash;
- (BOOL)canUseReceipts;
- (void)dealloc;
- (id)initWithUbiquityRootLocation:(id)arg1 peerID:(id)arg2 ubiquityName:(id)arg3;
- (id)latestBaselineLocationSkipModelVersionHash:(id)arg1;
- (id)latestTransactionLogForModelVersionHash:(id)arg1;
- (id)orderedReceipts;
- (id)receiptLocations;
- (id)transactionLogLocationsByModelVersionHash;
- (id)transactionLogLocationsForModelVersionHash:(id)arg1;

@end
