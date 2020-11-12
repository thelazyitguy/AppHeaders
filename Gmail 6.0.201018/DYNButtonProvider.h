//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DYNButtonProvider : NSObject
{
}

+ (id)defaultColor;
+ (id)buttonWithStyle:(unsigned int)arg1 title:(id)arg2 image:(id)arg3 color:(id)arg4 accessibilityId:(id)arg5;
+ (id)buttonWithStyle:(unsigned int)arg1 title:(id)arg2 image:(id)arg3 color:(id)arg4 accessibilityId:(id)arg5 inkRadius:(double)arg6;
+ (id)iconButtonWithImage:(id)arg1;
+ (id)iconButtonWithImage:(id)arg1 inkRadius:(double)arg2;
+ (id)iconButtonWithImage:(id)arg1 accessibilityId:(id)arg2;
+ (id)iconButtonWithImage:(id)arg1 accessibilityId:(id)arg2 inkRadius:(double)arg3;
+ (id)raisedButton;
+ (id)raisedButtonWithTitle:(id)arg1;
+ (id)raisedButtonWithTitle:(id)arg1 color:(id)arg2;
+ (id)raisedButtonWithTitle:(id)arg1 accessibilityId:(id)arg2;
+ (id)raisedButtonWithTitle:(id)arg1 accessibilityId:(id)arg2 color:(id)arg3;
+ (id)flatButton;
+ (id)flatButtonWithTitle:(id)arg1;
+ (id)flatButtonWithTitle:(id)arg1 color:(id)arg2;
+ (id)flatButtonWithTitle:(id)arg1 accessibilityId:(id)arg2;
+ (id)flatButtonWithTitle:(id)arg1 accessibilityId:(id)arg2 color:(id)arg3;

@end
