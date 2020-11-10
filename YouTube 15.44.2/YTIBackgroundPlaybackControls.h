//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBEnumArray;

@interface YTIBackgroundPlaybackControls : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBEnumArray *backgroundNotificationButtonsArray; // @dynamic backgroundNotificationButtonsArray;
@property(readonly, nonatomic) unsigned long long backgroundNotificationButtonsArray_Count; // @dynamic backgroundNotificationButtonsArray_Count;
@property(nonatomic) _Bool hasSeekBackwardSeconds; // @dynamic hasSeekBackwardSeconds;
@property(nonatomic) _Bool hasSeekForwardSeconds; // @dynamic hasSeekForwardSeconds;
@property(nonatomic) int seekBackwardSeconds; // @dynamic seekBackwardSeconds;
@property(nonatomic) int seekForwardSeconds; // @dynamic seekForwardSeconds;

@end

