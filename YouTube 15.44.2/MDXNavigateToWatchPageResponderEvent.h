//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTResponderEvent.h>

@class YTWatchTransition;

@interface MDXNavigateToWatchPageResponderEvent : YTResponderEvent
{
    YTWatchTransition *_watchTransition;
}

+ (id)eventWithFirstResponder:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) YTWatchTransition *watchTransition; // @synthesize watchTransition=_watchTransition;

@end

