//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GCKCRLValidityTimeRange : NSObject
{
    double _notBeforeTime;
    double _notAfterTime;
}

@property(readonly, nonatomic) double notAfterTime; // @synthesize notAfterTime=_notAfterTime;
@property(readonly, nonatomic) double notBeforeTime; // @synthesize notBeforeTime=_notBeforeTime;
- (_Bool)contains:(double)arg1;
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2 certificates:(id)arg3;

@end
