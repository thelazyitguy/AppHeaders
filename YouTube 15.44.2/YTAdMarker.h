//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YTSingleVideoTime;

@interface YTAdMarker : NSObject
{
    YTSingleVideoTime *_time;
    double _duration;
}

- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) YTSingleVideoTime *time; // @synthesize time=_time;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTime:(id)arg1 duration:(double)arg2;

@end

