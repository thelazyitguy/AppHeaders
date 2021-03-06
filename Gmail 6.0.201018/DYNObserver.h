//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsXplatObserveObserver-Protocol.h"

@class NSString;
@protocol ComGoogleAppsXplatObserveObservable;

@interface DYNObserver : NSObject <ComGoogleAppsXplatObserveObserver>
{
    CDUnknownBlockType _block;
    id <ComGoogleAppsXplatObserveObservable> _observable;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ComGoogleAppsXplatObserveObservable> observable; // @synthesize observable=_observable;
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)stopObserving;
- (void)observeOnMainThread:(id)arg1;
- (id)onChangeWithId:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

