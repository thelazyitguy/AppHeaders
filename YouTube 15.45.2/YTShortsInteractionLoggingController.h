//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSSet;
@protocol YTResponder;

@interface YTShortsInteractionLoggingController : NSObject
{
    NSObject<YTResponder> *_parentResponder;
    NSCountedSet *_buttonLogCounts;
    NSSet *_visibleButtons;
}

- (void).cxx_destruct;
- (id)computeVisibleButtonsFromSet:(id)arg1 toSet:(id)arg2;
- (id)computeHiddenButtonsFromSet:(id)arg1 toSet:(id)arg2;
- (void)markButtonAsShown:(id)arg1;
- (void)markButtonAsHidden:(id)arg1;
- (void)setVisibleButtons:(id)arg1;
- (id)initWithParentResponder:(id)arg1;

@end

