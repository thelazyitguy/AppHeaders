//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DOKRegionConfig-Protocol.h"

@class NSString;

@interface DOKSimpleRegionConfig : NSObject <DOKRegionConfig>
{
    double _topOffset;
    double _bottomOffset;
    struct CGPoint _margin;
}

@property(nonatomic) struct CGPoint margin; // @synthesize margin=_margin;
@property(nonatomic) double bottomOffset; // @synthesize bottomOffset=_bottomOffset;
@property(nonatomic) double topOffset; // @synthesize topOffset=_topOffset;
- (id)initWithTopOffset:(double)arg1 bottomOffset:(double)arg2 margin:(struct CGPoint)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
