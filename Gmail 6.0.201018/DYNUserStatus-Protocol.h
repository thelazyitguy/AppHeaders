//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol DYNCustomStatus, DYNDNDStatus;

@protocol DYNUserStatus <NSObject>
@property(readonly, nonatomic) _Bool isPresenceShared;
@property(readonly, nonatomic) id <DYNCustomStatus> customStatus;
@property(readonly, nonatomic) id <DYNDNDStatus> dndStatus;
@property(readonly, nonatomic) unsigned int presence;
@end
