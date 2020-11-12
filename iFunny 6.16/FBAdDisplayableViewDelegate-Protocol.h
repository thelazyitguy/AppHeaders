//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class FBAdViewabilityValidator, NSDictionary, NSError, NSNumber, NSString, NSURL, UIEvent, UIGestureRecognizer, UIView, UIViewController;
@protocol FBAdDisplayable;

@protocol FBAdDisplayableViewDelegate <NSObject>
- (UIViewController *)adDisplayableViewRootViewController:(UIView<FBAdDisplayable> *)arg1;
- (void)adDisplayableViewDidClose:(UIView<FBAdDisplayable> *)arg1;
- (void)adDisplayableView:(UIView<FBAdDisplayable> *)arg1 didFailWithError:(NSError *)arg2;
- (void)adDisplayableViewDidEnd:(UIView<FBAdDisplayable> *)arg1;
- (void)adDisplayableViewDidProgress:(UIView<FBAdDisplayable> *)arg1;
- (void)adDisplayableViewDidInteract:(UIView<FBAdDisplayable> *)arg1 withGesture:(UIGestureRecognizer *)arg2 withCommand:(NSURL *)arg3 skipAppStore:(_Bool)arg4 withPageNumber:(NSNumber *)arg5 withPageTotal:(NSNumber *)arg6;
- (void)adDisplayableViewDidClick:(UIView<FBAdDisplayable> *)arg1 withEvent:(UIEvent *)arg2 withCommand:(NSURL *)arg3 skipAppStore:(_Bool)arg4 withPageNumber:(NSNumber *)arg5 withPageTotal:(NSNumber *)arg6;
- (void)adDisplayableViewWantsToLogImpression:(UIView<FBAdDisplayable> *)arg1 withViewabilityValidator:(FBAdViewabilityValidator *)arg2 withPageNumber:(NSNumber *)arg3 withPageTotal:(NSNumber *)arg4;
- (void)adDisplayableViewDidLoad:(UIView<FBAdDisplayable> *)arg1;

@optional
- (void)adDisplayableViewDidInteract:(UIView<FBAdDisplayable> *)arg1 withTouchData:(NSDictionary *)arg2 touchType:(NSString *)arg3 withCommand:(NSURL *)arg4 skipAppStore:(_Bool)arg5 withPageNumber:(NSNumber *)arg6 withPageTotal:(NSNumber *)arg7 completionHandler:(void (^)(_Bool))arg8;
- (void)adDisplayableViewDidClick:(UIView<FBAdDisplayable> *)arg1 withEvent:(UIEvent *)arg2 withCommand:(NSURL *)arg3 skipAppStore:(_Bool)arg4 withPageNumber:(NSNumber *)arg5 withPageTotal:(NSNumber *)arg6 completionHandler:(void (^)(_Bool))arg7;
- (void)adDisplayableView:(UIView<FBAdDisplayable> *)arg1 didChangeVolume:(double)arg2;
- (void)adDisplayableViewDidPauseVideo:(UIView<FBAdDisplayable> *)arg1 cardIndex:(NSNumber *)arg2;
- (void)adDisplayableViewDidStartVideo:(UIView<FBAdDisplayable> *)arg1 cardIndex:(NSNumber *)arg2;
@end
