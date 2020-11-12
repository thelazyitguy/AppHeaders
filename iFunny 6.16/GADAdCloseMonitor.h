//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADAdContent, GADFullScreenAdViewController, GADObserverCollection, GADTimer;

@interface GADAdCloseMonitor : NSObject
{
    GADObserverCollection *_observers;
    GADObserverCollection *_didActivateObservers;
    GADObserverCollection *_willDeactivateObservers;
    GADFullScreenAdViewController *_viewController;
    GADAdContent *_ad;
    double _adCloseTimeInterval;
    long long _adShowTime;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _hasHandledClose
    GADTimer *_timer;
}

- (void).cxx_destruct;
- (void)handleAdClose:(id)arg1;
- (void)handleImpression;
- (id)initWithAd:(id)arg1 webAdView:(id)arg2 adConfiguration:(id)arg3 viewController:(id)arg4;

@end
