//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFDWHBaseEvent.h>

@class NSMutableDictionary;

@interface IFDWHScreenshotEvent : IFDWHBaseEvent
{
    NSMutableDictionary *_parameters;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
- (unsigned long long)defaultTriggeredBy;
- (id)name;
- (id)initWithFeedName:(id)arg1 contentID:(id)arg2 channelName:(id)arg3 tagName:(id)arg4 digestId:(id)arg5 fullscreen:(_Bool)arg6;

@end
