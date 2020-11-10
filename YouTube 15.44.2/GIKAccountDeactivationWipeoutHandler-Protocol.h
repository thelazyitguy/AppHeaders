//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSObject;
@protocol GIPAccountID, OS_dispatch_queue;

@protocol GIKAccountDeactivationWipeoutHandler <NSObject>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *wipeoutHandlerQueue;
- (void)didDeactivateAccountWithID:(id <GIPAccountID>)arg1 completion:(void (^)(void))arg2;
@end

