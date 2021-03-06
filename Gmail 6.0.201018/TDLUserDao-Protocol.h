//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleAppsXplatStorageDbTransactionPromise, NSString, TDLClientSyncStateEntity, TDLUserExperimentalEntity, TDLUserMetadataEntity, TDLUserPrefsEntity;

@protocol TDLUserDao <JavaObject>
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getShardIdsWithPendingSyncDown;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteClientSyncStateWithNSString:(NSString *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteUserExperimentalWithNSString:(NSString *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteUserMetadataWithNSString:(NSString *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteUserPrefsWithNSString:(NSString *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)updateClientSyncStateWithTDLClientSyncStateEntity:(TDLClientSyncStateEntity *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getClientSyncStateWithNSString:(NSString *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)updateUserExperimentalWithTDLUserExperimentalEntity:(TDLUserExperimentalEntity *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getUserExperimentalWithNSString:(NSString *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)updateUserMetadataWithTDLUserMetadataEntity:(TDLUserMetadataEntity *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getUserMetadataWithNSString:(NSString *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)updateUserPrefsWithTDLUserPrefsEntity:(TDLUserPrefsEntity *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getUserPrefsWithNSString:(NSString *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getShardsWithSyncState;
@end

