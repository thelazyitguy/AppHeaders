//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/MLHLSMediaSegment.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class NSDate;
@protocol MLCuepoint;

@interface MLHLSDGMediaSegment : MLHLSMediaSegment <NSCopying>
{
    struct HLSPlaylistItem _item;
    id <MLCuepoint> _cuepoint;
    NSDate *_wallTime;
    NSDate *_endWallTime;
    double _mediaTime;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) double mediaTime; // @synthesize mediaTime=_mediaTime;
@property(readonly, nonatomic) NSDate *endWallTime; // @synthesize endWallTime=_endWallTime;
@property(retain, nonatomic) NSDate *wallTime; // @synthesize wallTime=_wallTime;
@property(readonly, nonatomic) id <MLCuepoint> cuepoint; // @synthesize cuepoint=_cuepoint;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)segmentByTruncatingSegmentToDuration:(double)arg1;
@property(readonly, nonatomic) long long sequenceNumber;
@property(nonatomic) _Bool discontinuity;
@property(readonly, nonatomic) struct HLSPlaylistItem *mutableItem;
@property(readonly, nonatomic) const struct HLSPlaylistItem *item;
- (id)initWithItem:(const struct HLSPlaylistItem *)arg1 mediaTime:(double)arg2 cuepoint:(id)arg3;

@end
