//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CALayer, GSCImageAnimator, UIImage;

@protocol GSCImageAnimatorDelegate
- (void)imageAnimatorFlushMemory:(GSCImageAnimator *)arg1;
- (void)imageAnimatorCreatedLayer:(GSCImageAnimator *)arg1 layer:(CALayer *)arg2;
- (void)imageAnimatorDidAdvance:(GSCImageAnimator *)arg1 image:(UIImage *)arg2;
@end

