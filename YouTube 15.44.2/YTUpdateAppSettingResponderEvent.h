//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTResponderEvent.h>

@class YTIUpdateLocalAppSettingCommand;

@interface YTUpdateAppSettingResponderEvent : YTResponderEvent
{
    YTIUpdateLocalAppSettingCommand *_command;
}

+ (id)eventWithCommand:(id)arg1 firstResponder:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) YTIUpdateLocalAppSettingCommand *command; // @synthesize command=_command;
- (id)initWithCommand:(id)arg1 firstResponder:(id)arg2;

@end

