//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface SMASHBackOperationDoneInfo : NSObject
{
    _Bool _backWasSuccessful;
    UIViewController *_lastPoppedViewController;
}

@property(readonly, nonatomic) UIViewController *lastPoppedViewController; // @synthesize lastPoppedViewController=_lastPoppedViewController;
@property(readonly, nonatomic) _Bool backWasSuccessful; // @synthesize backWasSuccessful=_backWasSuccessful;
- (void).cxx_destruct;
- (id)initWithSuccess:(_Bool)arg1 lastPoppedViewController:(id)arg2;

@end
