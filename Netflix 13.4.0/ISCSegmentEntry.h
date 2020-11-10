//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ISCSegmentIndex;

@interface ISCSegmentEntry : NSObject
{
    short sizeSegmentIndex_;
    int duration_;
    ISCSegmentIndex *segmentIndex_;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) ISCSegmentIndex *segmentIndex; // @synthesize segmentIndex=segmentIndex_;
@property(readonly, nonatomic) short sizeSegmentIndex; // @synthesize sizeSegmentIndex=sizeSegmentIndex_;
@property(readonly, nonatomic) int duration; // @synthesize duration=duration_;
- (id)description;
- (id)initWithBuffer:(id)arg1 segmentBuffer:(id)arg2 indexID:(id)arg3;
- (void)populateWithSegmentBuffer:(id)arg1 indexID:(id)arg2;
- (id)initWithBuffer:(id)arg1;

@end
