//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PlayerUtils : NSObject
{
}

+ (void)fadeInAudioForPlayer:(id)arg1 duration:(double)arg2 easing:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)fadeOutAudioForPlayer:(id)arg1 duration:(double)arg2 easing:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)sharedPlayerVolumeQueue;

@end

