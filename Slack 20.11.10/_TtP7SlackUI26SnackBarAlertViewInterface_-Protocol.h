//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSAttributedString, NSString, SLKSnackBarAlertView, UIView;

@protocol _TtP7SlackUI26SnackBarAlertViewInterface_
+ (SLKSnackBarAlertView *)presentInView:(UIView *)arg1 offset:(double)arg2 attributedAlertText:(NSAttributedString *)arg3 accessoryText:(NSString *)arg4 accessoryAction:(void (^)(SLKSnackBarAlertView *))arg5 completion:(void (^)(void))arg6;
+ (void)presentInView:(UIView *)arg1 offset:(double)arg2 attributedAlertText:(NSAttributedString *)arg3 accessoryText:(NSString *)arg4 accessoryAction:(void (^)(SLKSnackBarAlertView *))arg5 autoDismiss:(_Bool)arg6;
+ (void)presentInView:(UIView *)arg1 offset:(double)arg2 attributedAlertText:(NSAttributedString *)arg3 duration:(double)arg4 completion:(void (^)(void))arg5;
+ (void)presentInView:(UIView *)arg1 offset:(double)arg2 attributedAlertText:(NSAttributedString *)arg3 completion:(void (^)(void))arg4;
+ (void)presentInView:(UIView *)arg1 offset:(double)arg2 alertText:(NSString *)arg3 completion:(void (^)(void))arg4;
+ (void)presentInView:(UIView *)arg1 alertText:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)updateOffsetWithOffset:(double)arg1 in:(UIView *)arg2;
- (void)dismissWithAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
@end
