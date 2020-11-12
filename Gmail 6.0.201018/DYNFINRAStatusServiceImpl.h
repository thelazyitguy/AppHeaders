//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNFINRAStatusService-Protocol.h"
#import "DYNFINRAStatusWriteService-Protocol.h"

@class NSError, NSString;
@protocol GIPAccountID;

@interface DYNFINRAStatusServiceImpl : NSObject <DYNFINRAStatusService, DYNFINRAStatusWriteService>
{
    id <GIPAccountID> _accountID;
    int _finraStatus;
}

- (void).cxx_destruct;
- (void)setFINRAStatus:(int)arg1;
- (_Bool)isRoomPreviewNotAllowedError:(id)arg1;
@property(readonly, nonatomic) NSError *roomPreviewNotAllowedError;
@property(readonly, nonatomic) int finraStatus;
- (id)initWithAccountID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
