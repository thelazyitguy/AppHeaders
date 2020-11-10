//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTMobileMediaKitPlayerStateUtils : NSObject
{
}

+ (id)mediaKitTrackForPlayerState:(id)arg1;
+ (unsigned long long)mediaKitFavoriteStateForPlayerState:(id)arg1;
+ (unsigned long long)mediaKitRepeatStateForPlayerState:(id)arg1;
+ (unsigned long long)mediaKitShuffleStateForPlayerState:(id)arg1;
+ (unsigned long long)mediaTypeForPlayerState:(id)arg1;
+ (unsigned long long)mediaKitStateForPlayerState:(id)arg1;
+ (_Bool)isSamePlayerState:(id)arg1 old:(id)arg2;
+ (_Bool)isSameTrack:(id)arg1 old:(id)arg2;
+ (_Bool)hasTrackInfo:(id)arg1;
+ (id)playerEventForPlayerState:(id)arg1 eventName:(unsigned long long)arg2;
+ (_Bool)isSameTrackURIForPlayerState:(id)arg1 oldPlayerState:(id)arg2;
+ (_Bool)isSameContextURIForPlayerState:(id)arg1 oldPlayerState:(id)arg2;
+ (id)playerEventForNewPlayerState:(id)arg1 oldPlayerState:(id)arg2;
+ (id)playerEventForRemotePlayback;
+ (id)playerEventForCurrentPlayerState:(id)arg1;

@end

