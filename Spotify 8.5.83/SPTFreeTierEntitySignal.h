//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTObserverManager;

@interface SPTFreeTierEntitySignal : NSObject
{
    SPTObserverManager *_observerManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
- (void)addObserver:(id)arg1;
- (id)init;

@end
