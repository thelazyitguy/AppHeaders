//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTResponderEvent.h>

@class YTICommand;

@interface YTPreloadAppStoreEndpointResponderEvent : YTResponderEvent
{
    YTICommand *_navigationEndpoint;
}

+ (id)eventWithCommand:(id)arg1 firstResponder:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) YTICommand *navigationEndpoint; // @synthesize navigationEndpoint=_navigationEndpoint;
- (id)initWithNavigationEndpoint:(id)arg1 firstResponder:(id)arg2;

@end

