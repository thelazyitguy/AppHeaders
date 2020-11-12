//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults, TFNTwitterAccount, TFNTwitterAdvertisingInformation;
@protocol OS_dispatch_queue;

@interface TFNTwitterAdsTPMIdSyncManager : NSObject
{
    TFNTwitterAdvertisingInformation *_advertisingInfo;
    TFNTwitterAccount *_account;
    NSUserDefaults *_userDefaults;
    NSObject<OS_dispatch_queue> *_advertisingInfoQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *advertisingInfoQueue; // @synthesize advertisingInfoQueue=_advertisingInfoQueue;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
- (id)_tailorAdsValue;
- (id)_adTrackingValue;
- (id)_lastRedirectDateKey;
- (id)_lastFetchDateKey;
- (id)_idBlobsKey;
- (id)_lastIdBlob;
- (void)_removeLastIdBlob;
- (void)_updateLastRedirectDate;
- (void)_processSuccessfulResponseWithIdBlobs:(id)arg1 advertisingID:(id)arg2;
- (id)_createRedirectURLForURL:(id)arg1;
- (_Bool)_shouldRedirectURL:(id)arg1;
- (_Bool)_shouldFetchIdBlobsForAdvertisingID:(id)arg1;
- (void)fetchAdvertisingInfoWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) TFNTwitterAdvertisingInformation *advertisingInfo; // @synthesize advertisingInfo=_advertisingInfo;
- (id)_advertisingInfoQueue_advertisingInfo;
- (id)createRedirectURLForURLIfNeeded:(id)arg1;
- (void)fetchIdBlobsIfNeededWithAsyncIDFALoad;
- (id)initWithAccount:(id)arg1 userDefaults:(id)arg2;

@end
