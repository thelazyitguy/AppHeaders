//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface AMapNetFlowBlockStrategy : NSObject
{
    NSString *_begin;
    NSNumber *_duration;
    NSNumber *_percent;
    id _userInfo;
    long long _minSecond;
    long long _maxSecond;
    double _inPercent;
}

- (void).cxx_destruct;
@property(nonatomic) double inPercent; // @synthesize inPercent=_inPercent;
@property(nonatomic) long long maxSecond; // @synthesize maxSecond=_maxSecond;
@property(nonatomic) long long minSecond; // @synthesize minSecond=_minSecond;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSNumber *percent; // @synthesize percent=_percent;
@property(readonly, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSString *begin; // @synthesize begin=_begin;
- (_Bool)isHitStrateg;
- (void)parserStrategy;
- (id)initWithBegin:(id)arg1 duration:(id)arg2 percent:(id)arg3;

@end

