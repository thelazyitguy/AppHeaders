//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFICuepoint, NSArray, NSDictionary, NSMutableArray, NSString;

@interface NFISegmentModel : NSObject
{
    _Bool _hasBeenViewed;
    NFICuepoint *_cuepoint;
    NSString *_segmentId;
    NSString *_defaultNext;
    NSArray *_choices;
    NSDictionary *_trackingInfo;
    NSMutableArray *_moments;
    NSString *_defaultNextOverride;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *defaultNextOverride; // @synthesize defaultNextOverride=_defaultNextOverride;
@property(nonatomic) _Bool hasBeenViewed; // @synthesize hasBeenViewed=_hasBeenViewed;
@property(readonly, nonatomic) NSMutableArray *moments; // @synthesize moments=_moments;
@property(readonly, nonatomic) NSDictionary *trackingInfo; // @synthesize trackingInfo=_trackingInfo;
@property(readonly, nonatomic) NSArray *choices; // @synthesize choices=_choices;
@property(readonly, copy, nonatomic) NSString *defaultNext; // @synthesize defaultNext=_defaultNext;
@property(readonly, copy) NSString *segmentId; // @synthesize segmentId=_segmentId;
- (id)description;
- (id)parsedChoices:(id)arg1;
- (id)allMissingAssets;
- (id)getMomentWithType:(long long)arg1;
- (id)nextChoicePoint:(double)arg1;
- (id)mostRecentChoicePoint;
- (id)choicePoints;
- (id)nextSegmentRedirect:(id)arg1;
- (id)nextSegmentId;
- (id)prefetchSegmentIds;
- (id)momentForCuepoint:(id)arg1;
- (void)removeAllMoments;
- (void)addMoment:(id)arg1;
- (id)cuepoints;
- (double)minStart:(double)arg1 withCuepoint:(id)arg2;
@property(readonly, nonatomic) NFICuepoint *cuepoint; // @synthesize cuepoint=_cuepoint;
- (id)initWithDictionary:(id)arg1 segmentId:(id)arg2;

@end
