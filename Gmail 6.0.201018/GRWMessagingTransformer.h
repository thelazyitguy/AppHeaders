//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CCTClearcutLogTransformer-Protocol.h"

@class GRWMessagingCache, GRWUserAccounts, NSString;

@interface GRWMessagingTransformer : NSObject <CCTClearcutLogTransformer>
{
    GRWUserAccounts *_userAccounts;
    GRWMessagingCache *_messagingCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GRWMessagingCache *messagingCache; // @synthesize messagingCache=_messagingCache;
@property(readonly, nonatomic) GRWUserAccounts *userAccounts; // @synthesize userAccounts=_userAccounts;
- (id)transform:(id)arg1;
- (id)initWithUserAccounts:(id)arg1 messagingCache:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
