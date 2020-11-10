//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;
@protocol MDCFlexibleHeaderTopSafeAreaDelegate;

@interface MDCFlexibleHeaderTopSafeArea : NSObject
{
    _Bool _subtractsAdditionalSafeAreaInsets;
    _Bool _inferTopSafeAreaInsetFromViewController;
    double _extractedTopSafeAreaInset;
    UIViewController *_topSafeAreaSourceViewController;
    id <MDCFlexibleHeaderTopSafeAreaDelegate> _topSafeAreaDelegate;
    double _lastNonZeroTopSafeAreaInset;
}

- (void).cxx_destruct;
@property(nonatomic) double lastNonZeroTopSafeAreaInset; // @synthesize lastNonZeroTopSafeAreaInset=_lastNonZeroTopSafeAreaInset;
@property(nonatomic) __weak id <MDCFlexibleHeaderTopSafeAreaDelegate> topSafeAreaDelegate; // @synthesize topSafeAreaDelegate=_topSafeAreaDelegate;
@property(nonatomic) _Bool inferTopSafeAreaInsetFromViewController; // @synthesize inferTopSafeAreaInsetFromViewController=_inferTopSafeAreaInsetFromViewController;
@property(nonatomic) _Bool subtractsAdditionalSafeAreaInsets; // @synthesize subtractsAdditionalSafeAreaInsets=_subtractsAdditionalSafeAreaInsets;
@property(nonatomic) __weak UIViewController *topSafeAreaSourceViewController; // @synthesize topSafeAreaSourceViewController=_topSafeAreaSourceViewController;
@property(nonatomic) double extractedTopSafeAreaInset; // @synthesize extractedTopSafeAreaInset=_extractedTopSafeAreaInset;
- (void)extractTopSafeAreaInset;
- (void)safeAreaInsetsDidChange;
- (double)topSafeAreaInset;

@end

