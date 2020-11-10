//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YTICommand;

@interface YTMacroMarkersTimelineMarker : NSObject
{
    double _startTime;
    double _endTime;
    long long _markerType;
    long long _index;
    NSString *_title;
    YTICommand *_onActiveCommand;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTICommand *onActiveCommand; // @synthesize onActiveCommand=_onActiveCommand;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) long long markerType; // @synthesize markerType=_markerType;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2 markerType:(long long)arg3 index:(long long)arg4 title:(id)arg5 onActiveCommand:(id)arg6;

@end
