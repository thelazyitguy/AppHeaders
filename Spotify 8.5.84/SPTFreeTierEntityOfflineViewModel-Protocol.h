//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTAlertInterface, SPTFreeTierEntityOfflineDelegate;

@protocol SPTFreeTierEntityOfflineViewModel <NSObject>
- (void)setEntityOffline:(_Bool)arg1;
- (_Bool)isEntityOffline;
- (_Bool)isOfflineSyncAvailable;
@property(nonatomic, readonly) id <SPTAlertInterface> alertInterface;
@property(nonatomic) __weak id <SPTFreeTierEntityOfflineDelegate> offlineDelegate;
@end
