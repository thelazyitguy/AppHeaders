//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSIndexPath, UIView;

@protocol ELMScrollViewProtocol <NSObject>
- (UIView *)elementsViewForFooterInSection:(long long)arg1;
- (UIView *)elementsViewForHeaderInSection:(long long)arg1;
- (UIView *)elementsCellForItemAtIndexPath:(NSIndexPath *)arg1;
- (struct CGSize)elementsSizeForFooterInSection:(long long)arg1;
- (struct CGSize)elementsSizeForHeaderInSection:(long long)arg1;
- (struct CGSize)elementsSizeForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)didEndDisplayingView:(UIView *)arg1 forFooterInSection:(long long)arg2;
- (void)didEndDisplayingView:(UIView *)arg1 forHeaderInSection:(long long)arg2;
- (void)didEndDisplayingView:(UIView *)arg1 forItemAtIndexPath:(NSIndexPath *)arg2;
- (void)willDisplayView:(UIView *)arg1 forFooterInSection:(long long)arg2;
- (void)willDisplayView:(UIView *)arg1 forHeaderInSection:(long long)arg2;
- (void)willDisplayView:(UIView *)arg1 forItemAtIndexPath:(NSIndexPath *)arg2;
- (void)setTuningParameters:(CDStruct_c3b9c2ee)arg1 forRangeMode:(BOOL)arg2 rangeType:(long long)arg3;
- (CDStruct_c3b9c2ee)tuningParametersForRangeMode:(BOOL)arg1 rangeType:(long long)arg2;
@end

