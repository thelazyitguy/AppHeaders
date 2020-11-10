//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GRWUserAccounts;
@protocol GRWMessagingStore, OS_dispatch_queue;

@interface GRWMessagingPersistenceCoordinator : NSObject
{
    long long _type;
    GRWUserAccounts *_userAccounts;
    id <GRWMessagingStore> _messagingStore;
    NSObject<OS_dispatch_queue> *_storeQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *storeQueue; // @synthesize storeQueue=_storeQueue;
@property(retain, nonatomic) id <GRWMessagingStore> messagingStore; // @synthesize messagingStore=_messagingStore;
@property(retain, nonatomic) GRWUserAccounts *userAccounts; // @synthesize userAccounts=_userAccounts;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)removeOldExperiments;
- (_Bool)removeAllExperiments;
- (void)removeExperimentsForUserID:(id)arg1;
- (void)setExperiments:(id)arg1 forUserID:(id)arg2;
- (id)experimentsForUserID:(id)arg1;
- (void)removeOldMessages;
- (_Bool)removeAllMessages;
- (void)removeMessagesForUserID:(id)arg1;
- (void)setMessages:(id)arg1 forUserID:(id)arg2;
- (id)messagesForUserID:(id)arg1;
- (void)setupWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 userAccounts:(id)arg2;

@end

