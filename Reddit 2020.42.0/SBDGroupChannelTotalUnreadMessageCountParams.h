//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SBDGroupChannelTotalUnreadMessageCountParams : NSObject
{
    NSArray *_channelCustomTypesFilter;
    unsigned long long _superChannelFilter;
}

@property unsigned long long superChannelFilter; // @synthesize superChannelFilter=_superChannelFilter;
@property(retain) NSArray *channelCustomTypesFilter; // @synthesize channelCustomTypesFilter=_channelCustomTypesFilter;
- (void).cxx_destruct;
- (id)init;

@end

