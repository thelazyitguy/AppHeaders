//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSIndexPath, _TtC10CoreStyles24CoreAddToCartStepperView, _TtC10CoreStyles28CoreWeightStepperControlView;

@protocol _TtP10CoreStyles17CoreCardsDelegate_
- (void)didSelectCellAtIndexWithIndex:(long long)arg1;
- (void)fetchImageForIndexWithURLWithIndex:(long long)arg1 completion:(void (^)(UIImage *, NSString *))arg2;

@optional
- (_Bool)userTappedDecrementV2ForCellAtIndexPath:(NSIndexPath *)arg1 proposedQuantity:(double)arg2 sender:(_TtC10CoreStyles28CoreWeightStepperControlView *)arg3;
- (_Bool)userTappedIncrementV2ForCellAtIndexPath:(NSIndexPath *)arg1 proposedQuantity:(double)arg2 sender:(_TtC10CoreStyles28CoreWeightStepperControlView *)arg3;
- (_Bool)userTappedInitialAddV2ForCellAtIndexPath:(NSIndexPath *)arg1 proposedQuantity:(double)arg2 sender:(_TtC10CoreStyles28CoreWeightStepperControlView *)arg3;
- (void)userTappedDecrementForCellAtIndexPath:(NSIndexPath *)arg1 sender:(_TtC10CoreStyles24CoreAddToCartStepperView *)arg2;
- (void)userTappedIncrementForCellAtIndexPath:(NSIndexPath *)arg1 sender:(_TtC10CoreStyles24CoreAddToCartStepperView *)arg2;
- (void)userTappedInitialAddForCellAtIndexPath:(NSIndexPath *)arg1 sender:(_TtC10CoreStyles24CoreAddToCartStepperView *)arg2;
- (void)willDisplayItemAtIndexPath:(NSIndexPath *)arg1;
- (void)scrollViewDidEndDecelerating;
@end
