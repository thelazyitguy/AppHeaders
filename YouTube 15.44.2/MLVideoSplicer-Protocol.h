//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class MLVideo, NSString;
@protocol MLPlayerConfig, MLVideoTimeline;

@protocol MLVideoSplicer <NSObject>
@property(nonatomic) __weak id <MLVideoTimeline> timeline;
- (void)addVideo:(MLVideo *)arg1 playerConfig:(id <MLPlayerConfig>)arg2 forCPN:(NSString *)arg3;
@end

