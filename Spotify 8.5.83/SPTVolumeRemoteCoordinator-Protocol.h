//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTVolumeRemoteCoordinatorDelegate;

@protocol SPTVolumeRemoteCoordinator <NSObject>
@property(readonly, nonatomic) double volumeStep;
@property(nonatomic) __weak id <SPTVolumeRemoteCoordinatorDelegate> delegate;
- (void)remoteVolumeCommandSent;
- (long long)sendRemoteVolumeSetCommand:(double)arg1;
- (_Bool)isSystemVolumeChangeCausedByOutputRouteChange:(double)arg1;
@end

