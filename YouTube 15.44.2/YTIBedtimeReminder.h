//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTICommand, YTIRenderer;

@interface YTIBedtimeReminder : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *bedtimeReminderDialog; // @dynamic bedtimeReminderDialog;
@property(nonatomic) _Bool hasBedtimeReminderDialog; // @dynamic hasBedtimeReminderDialog;
@property(nonatomic) _Bool hasShowBedtimeReminderPanelCommand; // @dynamic hasShowBedtimeReminderPanelCommand;
@property(retain, nonatomic) YTICommand *showBedtimeReminderPanelCommand; // @dynamic showBedtimeReminderPanelCommand;

@end
