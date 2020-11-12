//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol A9VSFezDrawerSnapPointRange;

@interface A9VSFezDrawerProgress : NSObject
{
    double _progress;
    double _centerY;
    CDUnknownBlockType _update;
    id <A9VSFezDrawerSnapPointRange> _snapPointRange;
    UIView *_drawerView;
    UIView *_referenceView;
}

@property(nonatomic) __weak UIView *referenceView; // @synthesize referenceView=_referenceView;
@property(nonatomic) __weak UIView *drawerView; // @synthesize drawerView=_drawerView;
@property(nonatomic) __weak id <A9VSFezDrawerSnapPointRange> snapPointRange; // @synthesize snapPointRange=_snapPointRange;
@property(copy, nonatomic) CDUnknownBlockType update; // @synthesize update=_update;
@property(nonatomic) double centerY; // @synthesize centerY=_centerY;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)updateProgress;
- (id)init;

@end
