//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSDEventsDelegate-Protocol.h"

@class MSDOffsetAggregator;
@protocol DOKDockableViewPositionConfig;

@interface MSDMShopViewPositionHandler : NSObject <MSDEventsDelegate>
{
    CDUnknownBlockType _dockableControlsSupplier;
    id <DOKDockableViewPositionConfig> _previousViewPositionConfig;
    MSDOffsetAggregator *_topOffsetAggregator;
    MSDOffsetAggregator *_bottomOffsetAggregator;
}

@property(retain, nonatomic) MSDOffsetAggregator *bottomOffsetAggregator; // @synthesize bottomOffsetAggregator=_bottomOffsetAggregator;
@property(retain, nonatomic) MSDOffsetAggregator *topOffsetAggregator; // @synthesize topOffsetAggregator=_topOffsetAggregator;
@property(retain) id <DOKDockableViewPositionConfig> previousViewPositionConfig; // @synthesize previousViewPositionConfig=_previousViewPositionConfig;
@property(copy) CDUnknownBlockType dockableControlsSupplier; // @synthesize dockableControlsSupplier=_dockableControlsSupplier;
- (void).cxx_destruct;
- (void)reload;
- (id)updatedDockableViewPosition;
- (void)onNavigationDidHappen;
- (void)removeOffsetFromBottomWithKey:(id)arg1;
- (void)removeOffsetFromTopWithKey:(id)arg1;
- (void)addOffsetFromBottom:(unsigned long long)arg1 withKey:(id)arg2;
- (void)addOffsetFromTop:(unsigned long long)arg1 withKey:(id)arg2;
- (id)addOffsetsForViewPositionConfig:(id)arg1;
- (id)initWithDockableControlsSupplier:(CDUnknownBlockType)arg1;

@end
