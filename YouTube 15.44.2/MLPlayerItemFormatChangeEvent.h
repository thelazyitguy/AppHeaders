//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLFormat;

@interface MLPlayerItemFormatChangeEvent : NSObject
{
    MLFormat *_videoFormat;
    MLFormat *_audioFormat;
    long long _reason;
    double _absoluteTime;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double absoluteTime; // @synthesize absoluteTime=_absoluteTime;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) MLFormat *audioFormat; // @synthesize audioFormat=_audioFormat;
@property(readonly, nonatomic) MLFormat *videoFormat; // @synthesize videoFormat=_videoFormat;
- (id)initWithVideoFormat:(id)arg1 audioFormat:(id)arg2 reason:(long long)arg3 absoluteTime:(double)arg4;

@end

