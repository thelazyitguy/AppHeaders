//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIFormattedString;

@interface YTIUnpluggedRecordingRenderer_RecordingData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long endTimeSeconds; // @dynamic endTimeSeconds;
@property(nonatomic) _Bool hasEndTimeSeconds; // @dynamic hasEndTimeSeconds;
@property(nonatomic) _Bool hasStartTimeSeconds; // @dynamic hasStartTimeSeconds;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) unsigned long long startTimeSeconds; // @dynamic startTimeSeconds;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;

@end

