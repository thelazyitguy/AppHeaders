//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface GDKOptionalViewController : NSObject
{
    UIViewController *_viewController;
    CDUnknownBlockType _absentBehavior;
}

+ (id)optionalVCWithAbsentBehavior:(CDUnknownBlockType)arg1;
+ (id)optionalVCWithViewController:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType absentBehavior; // @synthesize absentBehavior=_absentBehavior;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)matchViewController:(CDUnknownBlockType)arg1 absentBehavior:(CDUnknownBlockType)arg2;
- (id)initWithViewController:(id)arg1 absentBehavior:(CDUnknownBlockType)arg2;

@end
