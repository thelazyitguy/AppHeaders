//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol SPTCarDetectionStateObserver;

@protocol SPTCarDetector
- (void)removeObserver:(id <SPTCarDetectionStateObserver>)arg1;
- (void)addObserver:(id <SPTCarDetectionStateObserver>)arg1;
@property(nonatomic, readonly) _Bool isCarConnected;
@end

