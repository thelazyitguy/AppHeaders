//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTIMAPAccountProviderService-Protocol.h"

@class NSDictionary, NSString;
@protocol GBTAccountProviderListener;

@interface GBTIMAPAccountProviderServiceImpl : NSObject <GBTIMAPAccountProviderService>
{
    id <GBTAccountProviderListener> listener;
    NSDictionary *_imapAccounts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *imapAccounts; // @synthesize imapAccounts=_imapAccounts;
@property(nonatomic) __weak id <GBTAccountProviderListener> listener; // @synthesize listener;
- (void)notifyImapAccountIdsAdded:(id)arg1 idsRemoved:(id)arg2;
- (_Bool)checkOssStatus:(int)arg1 forOperation:(id)arg2;
- (void)updateAccessGroupForAccountWithUniqueId:(id)arg1;
- (_Bool)removeAllAccountsFromKeychain;
- (_Bool)removeAccountFromKeychainWithUniqueId:(id)arg1;
- (_Bool)saveAccountToKeychain:(id)arg1;
- (void)updateCachedImapAccounts;
- (void)removeAccountWithID:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)accounts;
- (id)gbtAccountWithGSCAccount:(id)arg1;
- (_Bool)removeAllAccounts;
- (_Bool)removeAccountWithUniqueId:(id)arg1;
- (_Bool)addAccount:(id)arg1;
- (id)accountAdapters;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
