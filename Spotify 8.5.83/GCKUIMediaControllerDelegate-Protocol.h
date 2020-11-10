//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKMediaStatus, GCKUIMediaController;

@protocol GCKUIMediaControllerDelegate <NSObject>

@optional
- (void)mediaController:(GCKUIMediaController *)arg1 didUpdateMediaStatus:(GCKMediaStatus *)arg2;
- (void)mediaController:(GCKUIMediaController *)arg1 didBeginPreloadForItemID:(unsigned long long)arg2;
- (void)mediaController:(GCKUIMediaController *)arg1 didUpdatePlayerState:(long long)arg2 lastStreamPosition:(double)arg3;
@end

