//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTShortsTrimmerControl;

@protocol YTShortsTrimmerDelegate <NSObject>
- (void)shortsTrimmerControl:(YTShortsTrimmerControl *)arg1 didEndInteraction:(unsigned long long)arg2;
- (void)shortsTrimmerControl:(YTShortsTrimmerControl *)arg1 didBeginInteraction:(unsigned long long)arg2;
- (void)shortsTrimmerControl:(YTShortsTrimmerControl *)arg1 normalizedPlayheadPositionDidChange:(double)arg2;
- (void)shortsTrimmerControl:(YTShortsTrimmerControl *)arg1 normalizedEndPositionDidChange:(double)arg2;
- (void)shortsTrimmerControl:(YTShortsTrimmerControl *)arg1 normalizedStartPositionDidChange:(double)arg2;
@end

