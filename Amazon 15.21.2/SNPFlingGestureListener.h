//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SNPFlingRegion;

@interface SNPFlingGestureListener : NSObject
{
    SNPFlingRegion *_touchedRegion;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)handleFlingCanceled:(id)arg1;
- (void)handleFlingGestureConfirmed:(id)arg1;
- (void)saveTouchedRegion:(id)arg1;

@end
